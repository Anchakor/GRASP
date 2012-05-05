#ifndef LAYOUT_H
#define LAYOUT_H

#include <QtGui>
#include "graph.h"

class LayoutDockWidget : public QDockWidget
{
    Q_OBJECT

    public:
        explicit LayoutDockWidget(QWidget *parent = 0, Qt::WindowFlags flags = 0);

    signals:
        void layoutChanged();

    public slots:
        void layoutChange(int index);
        void applyLayout();

    private:
        QComboBox comboBox_;

        QWidget sugiyama_;
        QDoubleSpinBox sugiyamaNodeDistanceSpinBox_;
        QDoubleSpinBox sugiyamaLayerDistanceSpinBox_;
        QCheckBox sugiyamaFlip_;

        QWidget fmmm_;
        QDoubleSpinBox fmmmUnitEdgeLengthSpinBox_;

        QCheckBox applyLayout_;
};

void layoutGraph(Graph *g);

#endif
