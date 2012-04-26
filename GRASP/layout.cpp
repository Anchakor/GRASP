#include "layout.h"
#include "mainwindow.h"
#include <ogdf/basic/Graph.h>
#include <ogdf/basic/GraphAttributes.h>
#include <ogdf/layered/SugiyamaLayout.h>
#include <ogdf/layered/OptimalRanking.h>
#include <ogdf/layered/MedianHeuristic.h>
#include <ogdf/layered/FastHierarchyLayout.h>

#include <ogdf/energybased/FMMMLayout.h>

LayoutDockWidget::LayoutDockWidget(QWidget *parent, Qt::WindowFlags flags) : QDockWidget(parent, flags)
{
    setWindowTitle(tr("Layout properties"));

    QVBoxLayout *vbl = new QVBoxLayout();

    comboBox_.addItem(tr("Sugiyama Layout"));
    comboBox_.addItem(tr("FMMM Layout"));
    comboBox_.setCurrentIndex(0);
    vbl->addWidget(&comboBox_);

    QFormLayout *fl = new QFormLayout();
    sugiyamaNodeDistanceSpinBox_.setRange(1,2000);
    sugiyamaNodeDistanceSpinBox_.setValue(40);
    fl->addRow(new QLabel(tr("Node Distance:"), this), &sugiyamaNodeDistanceSpinBox_);
    sugiyamaLayerDistanceSpinBox_.setRange(1,2000);
    sugiyamaLayerDistanceSpinBox_.setValue(50);
    fl->addRow(new QLabel(tr("Layer Distance:"), this), &sugiyamaLayerDistanceSpinBox_);
    sugiyama_.setLayout(fl);
    vbl->addWidget(&sugiyama_);

    QFormLayout *fl2 = new QFormLayout();
    fmmmUnitEdgeLengthSpinBox_.setRange(1,4000);
    fmmmUnitEdgeLengthSpinBox_.setValue(40);
    fl2->addRow(new QLabel(tr("Unit Edge Length:"), this), &fmmmUnitEdgeLengthSpinBox_);
    fmmm_.setLayout(fl2);
    vbl->addWidget(&fmmm_);
    fmmm_.setVisible(false);

    applyLayout_.setText(tr("Apply Layout"));
    vbl->addWidget(&applyLayout_);

    QWidget *w = new QWidget(this);
    w->setLayout(vbl);
    setWidget(w);

    connect(&comboBox_, SIGNAL(currentIndexChanged(int)), this, SLOT(layoutChange(int)));
    connect(&comboBox_, SIGNAL(currentIndexChanged(int)), this, SLOT(applyLayout()));
    connect(&sugiyamaNodeDistanceSpinBox_, SIGNAL(editingFinished()), this, SLOT(applyLayout()));
    connect(&sugiyamaLayerDistanceSpinBox_, SIGNAL(editingFinished()), this, SLOT(applyLayout()));
    connect(&fmmmUnitEdgeLengthSpinBox_, SIGNAL(editingFinished()), this, SLOT(applyLayout()));
    connect(&applyLayout_, SIGNAL(released()), this, SLOT(applyLayout()));
    
    applyLayout_.setCheckState(Qt::Checked);
    applyLayout();
}

void LayoutDockWidget::layoutChange(int index)
{
    sugiyama_.setVisible(false);
    fmmm_.setVisible(false);
    if(index == 0) {
        sugiyama_.setVisible(true);
    } else if(index == 1) {
        fmmm_.setVisible(true);
    }
}

void LayoutDockWidget::applyLayout()
{
    Ui::Layout::apply = applyLayout_.isChecked();
    Ui::Layout::algorithm = comboBox_.currentIndex();
    Ui::Layout::sugiyamaNodeDistance = sugiyamaNodeDistanceSpinBox_.value();
    Ui::Layout::sugiyamaLayerDistance = sugiyamaLayerDistanceSpinBox_.value();
    Ui::Layout::fmmmUnitEdgeLength = fmmmUnitEdgeLengthSpinBox_.value();
    if(applyLayout_.isChecked()) {
        emit layoutChanged();
    }
}

void layoutGraph(Graph *g)
{
    if(!g) {
        throw NullGraphPointerException();
    }
    if(!Ui::Layout::apply) return;

    ogdf::Graph G;
    ogdf::GraphAttributes GA(G, ogdf::GraphAttributes::nodeGraphics | ogdf::GraphAttributes::edgeGraphics);

    QHash<GraphNode *, ogdf::node> nodeHash;
    Nodes::const_iterator i = g->nodes_.constBegin();
    while (i != g->nodes_.constEnd()) {
        GraphNode *gn = i.value();
        // call layouts of nodes to get non-0 width and height
        gn->adjustSize();

        ogdf::node n = G.newNode();
        GA.x(n) = gn->x();
        GA.y(n) = gn->y();
        GA.width(n) = gn->geometry().width();
        GA.height(n) = gn->geometry().height();
        nodeHash.insert(gn, n);
        ++i;
    }
    Edges::const_iterator j = g->edges_.constBegin();
    while (j != g->edges_.constEnd()) {
        GraphEdge *ge = j.value();

        G.newEdge(
                nodeHash.value(ge->sourceNode()),
                nodeHash.value(ge->destNode()));
        ++j;
    }

    if(Ui::Layout::algorithm == 0) {
        ogdf::SugiyamaLayout SL;
        SL.setRanking(new ogdf::OptimalRanking);
        SL.setCrossMin(new ogdf::MedianHeuristic);
        ogdf::FastHierarchyLayout *fhl = new ogdf::FastHierarchyLayout;
        fhl->nodeDistance(Ui::Layout::sugiyamaNodeDistance);
        fhl->layerDistance(Ui::Layout::sugiyamaLayerDistance);
        SL.setLayout(fhl);
        SL.call(GA);
    } else if(Ui::Layout::algorithm == 1) {
        ogdf::FMMMLayout fmmm;
        fmmm.randSeed(666); // :)
        fmmm.useHighLevelOptions(true);
        fmmm.unitEdgeLength(Ui::Layout::fmmmUnitEdgeLength);
        //fmmm.minGraphSize(100);
        //fmmm.newInitialPlacement(true);
        fmmm.qualityVersusSpeed(ogdf::FMMMLayout::qvsGorgeousAndEfficient);
        fmmm.call(GA);
    }

    QHash<GraphNode *, ogdf::node>::iterator k = nodeHash.begin();
    while (k != nodeHash.end()) {
        GraphNode *gn = k.key();
        ogdf::node n = k.value();

        gn->setPos(GA.x(n) - (GA.width(n) / 2.0), GA.y(n) - (GA.height(n) / 2.0));
        ++k;
    }
    Edges::const_iterator l = g->edges_.constBegin();
    while (l != g->edges_.constEnd()) {
        GraphEdge *ge = l.value();
        ge->updateGeometry();
        ++l;
    }
}

