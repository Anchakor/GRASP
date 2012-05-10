##############################################################################
## BEGIN Makefile.header
##############################################################################

LIBS = 

all: release

clean: cleanrelease

# feel free to use "debug" and "cleandebug" for Debug!

doxy:
	rm -rf doc/html
	mkdir -p doc/html
	doxygen ogdf-doxygen.cfg
	cp -f doc/images/ftv2*.png doc/html

##############################################################################
## END Makefile.header
##############################################################################

debug = _debug
saferelease = _saferelease
release = _release

$(debug)/src/augmentation/DfsMakeBiconnected.o: src/augmentation/DfsMakeBiconnected.cpp \
 ogdf/augmentation/DfsMakeBiconnected.h ogdf/module/AugmentationModule.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h
	mkdir -p $(debug)/src/augmentation
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/augmentation/DfsMakeBiconnected.o -c src/augmentation/DfsMakeBiconnected.cpp

$(saferelease)/src/augmentation/DfsMakeBiconnected.o: src/augmentation/DfsMakeBiconnected.cpp \
 ogdf/augmentation/DfsMakeBiconnected.h ogdf/module/AugmentationModule.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h
	mkdir -p $(saferelease)/src/augmentation
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/augmentation/DfsMakeBiconnected.o -c src/augmentation/DfsMakeBiconnected.cpp

$(release)/src/augmentation/DfsMakeBiconnected.o: src/augmentation/DfsMakeBiconnected.cpp \
 ogdf/augmentation/DfsMakeBiconnected.h ogdf/module/AugmentationModule.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h
	mkdir -p $(release)/src/augmentation
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/augmentation/DfsMakeBiconnected.o -c src/augmentation/DfsMakeBiconnected.cpp

$(debug)/src/augmentation/PlanarAugmentation.o: src/augmentation/PlanarAugmentation.cpp \
 ogdf/augmentation/PlanarAugmentation.h ogdf/module/AugmentationModule.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/decomposition/DynamicBCTree.h \
 ogdf/decomposition/BCTree.h ogdf/basic/BoundedStack.h ogdf/basic/SList.h \
 ogdf/basic/simple_graph_alg.h ogdf/planarity/PlanarModule.h
	mkdir -p $(debug)/src/augmentation
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/augmentation/PlanarAugmentation.o -c src/augmentation/PlanarAugmentation.cpp

$(saferelease)/src/augmentation/PlanarAugmentation.o: src/augmentation/PlanarAugmentation.cpp \
 ogdf/augmentation/PlanarAugmentation.h ogdf/module/AugmentationModule.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/decomposition/DynamicBCTree.h \
 ogdf/decomposition/BCTree.h ogdf/basic/BoundedStack.h ogdf/basic/SList.h \
 ogdf/basic/simple_graph_alg.h ogdf/planarity/PlanarModule.h
	mkdir -p $(saferelease)/src/augmentation
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/augmentation/PlanarAugmentation.o -c src/augmentation/PlanarAugmentation.cpp

$(release)/src/augmentation/PlanarAugmentation.o: src/augmentation/PlanarAugmentation.cpp \
 ogdf/augmentation/PlanarAugmentation.h ogdf/module/AugmentationModule.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/decomposition/DynamicBCTree.h \
 ogdf/decomposition/BCTree.h ogdf/basic/BoundedStack.h ogdf/basic/SList.h \
 ogdf/basic/simple_graph_alg.h ogdf/planarity/PlanarModule.h
	mkdir -p $(release)/src/augmentation
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/augmentation/PlanarAugmentation.o -c src/augmentation/PlanarAugmentation.cpp

$(debug)/src/augmentation/PlanarAugmentationFix.o: src/augmentation/PlanarAugmentationFix.cpp \
 ogdf/augmentation/PlanarAugmentationFix.h \
 ogdf/module/AugmentationModule.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/decomposition/DynamicBCTree.h \
 ogdf/decomposition/BCTree.h ogdf/basic/BoundedStack.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/GraphCopy.h \
 ogdf/augmentation/PlanarAugmentation.h ogdf/basic/simple_graph_alg.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(debug)/src/augmentation
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/augmentation/PlanarAugmentationFix.o -c src/augmentation/PlanarAugmentationFix.cpp

$(saferelease)/src/augmentation/PlanarAugmentationFix.o: src/augmentation/PlanarAugmentationFix.cpp \
 ogdf/augmentation/PlanarAugmentationFix.h \
 ogdf/module/AugmentationModule.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/decomposition/DynamicBCTree.h \
 ogdf/decomposition/BCTree.h ogdf/basic/BoundedStack.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/GraphCopy.h \
 ogdf/augmentation/PlanarAugmentation.h ogdf/basic/simple_graph_alg.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(saferelease)/src/augmentation
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/augmentation/PlanarAugmentationFix.o -c src/augmentation/PlanarAugmentationFix.cpp

$(release)/src/augmentation/PlanarAugmentationFix.o: src/augmentation/PlanarAugmentationFix.cpp \
 ogdf/augmentation/PlanarAugmentationFix.h \
 ogdf/module/AugmentationModule.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/decomposition/DynamicBCTree.h \
 ogdf/decomposition/BCTree.h ogdf/basic/BoundedStack.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/GraphCopy.h \
 ogdf/augmentation/PlanarAugmentation.h ogdf/basic/simple_graph_alg.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(release)/src/augmentation
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/augmentation/PlanarAugmentationFix.o -c src/augmentation/PlanarAugmentationFix.cpp

$(debug)/src/basic/CliqueFinder.o: src/basic/CliqueFinder.cpp ogdf/graphalg/CliqueFinder.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/decomposition/StaticSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/decomposition/PertinentGraph.h \
 ogdf/decomposition/StaticSkeleton.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/NodeComparer.h ogdf/basic/geometry.h ogdf/basic/Hashing.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/CliqueFinder.o -c src/basic/CliqueFinder.cpp

$(saferelease)/src/basic/CliqueFinder.o: src/basic/CliqueFinder.cpp ogdf/graphalg/CliqueFinder.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/decomposition/StaticSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/decomposition/PertinentGraph.h \
 ogdf/decomposition/StaticSkeleton.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/NodeComparer.h ogdf/basic/geometry.h ogdf/basic/Hashing.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/CliqueFinder.o -c src/basic/CliqueFinder.cpp

$(release)/src/basic/CliqueFinder.o: src/basic/CliqueFinder.cpp ogdf/graphalg/CliqueFinder.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/decomposition/StaticSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/decomposition/PertinentGraph.h \
 ogdf/decomposition/StaticSkeleton.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/NodeComparer.h ogdf/basic/geometry.h ogdf/basic/Hashing.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/CliqueFinder.o -c src/basic/CliqueFinder.cpp

$(debug)/src/basic/CombinatorialEmbedding.o: src/basic/CombinatorialEmbedding.cpp \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/FaceArray.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/CombinatorialEmbedding.o -c src/basic/CombinatorialEmbedding.cpp

$(saferelease)/src/basic/CombinatorialEmbedding.o: src/basic/CombinatorialEmbedding.cpp \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/FaceArray.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/CombinatorialEmbedding.o -c src/basic/CombinatorialEmbedding.cpp

$(release)/src/basic/CombinatorialEmbedding.o: src/basic/CombinatorialEmbedding.cpp \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/FaceArray.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/CombinatorialEmbedding.o -c src/basic/CombinatorialEmbedding.cpp

$(debug)/src/basic/DualGraph.o: src/basic/DualGraph.cpp ogdf/basic/DualGraph.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/FaceArray.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/DualGraph.o -c src/basic/DualGraph.cpp

$(saferelease)/src/basic/DualGraph.o: src/basic/DualGraph.cpp ogdf/basic/DualGraph.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/FaceArray.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/DualGraph.o -c src/basic/DualGraph.cpp

$(release)/src/basic/DualGraph.o: src/basic/DualGraph.cpp ogdf/basic/DualGraph.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/FaceArray.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/DualGraph.o -c src/basic/DualGraph.cpp

$(debug)/src/basic/EdgeComparer.o: src/basic/EdgeComparer.cpp ogdf/basic/EdgeComparer.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/EdgeComparer.o -c src/basic/EdgeComparer.cpp

$(saferelease)/src/basic/EdgeComparer.o: src/basic/EdgeComparer.cpp ogdf/basic/EdgeComparer.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/EdgeComparer.o -c src/basic/EdgeComparer.cpp

$(release)/src/basic/EdgeComparer.o: src/basic/EdgeComparer.cpp ogdf/basic/EdgeComparer.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/EdgeComparer.o -c src/basic/EdgeComparer.cpp

$(debug)/src/basic/EdgeComparerSimple.o: src/basic/EdgeComparerSimple.cpp \
 ogdf/basic/EdgeComparerSimple.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/EdgeComparerSimple.o -c src/basic/EdgeComparerSimple.cpp

$(saferelease)/src/basic/EdgeComparerSimple.o: src/basic/EdgeComparerSimple.cpp \
 ogdf/basic/EdgeComparerSimple.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/EdgeComparerSimple.o -c src/basic/EdgeComparerSimple.cpp

$(release)/src/basic/EdgeComparerSimple.o: src/basic/EdgeComparerSimple.cpp \
 ogdf/basic/EdgeComparerSimple.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/EdgeComparerSimple.o -c src/basic/EdgeComparerSimple.cpp

$(debug)/src/basic/Graph.o: src/basic/Graph.cpp ogdf/basic/Array.h ogdf/basic/basic.h \
 ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/AdjEntryArray.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/fileformats/GmlParser.h ogdf/basic/Hashing.h ogdf/basic/String.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/geometry.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/basic/GraphObserver.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/cluster/ClusterArray.h \
 ogdf/basic/simple_graph_alg.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/Graph.o -c src/basic/Graph.cpp

$(saferelease)/src/basic/Graph.o: src/basic/Graph.cpp ogdf/basic/Array.h ogdf/basic/basic.h \
 ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/AdjEntryArray.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/fileformats/GmlParser.h ogdf/basic/Hashing.h ogdf/basic/String.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/geometry.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/basic/GraphObserver.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/cluster/ClusterArray.h \
 ogdf/basic/simple_graph_alg.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/Graph.o -c src/basic/Graph.cpp

$(release)/src/basic/Graph.o: src/basic/Graph.cpp ogdf/basic/Array.h ogdf/basic/basic.h \
 ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/AdjEntryArray.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/fileformats/GmlParser.h ogdf/basic/Hashing.h ogdf/basic/String.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/geometry.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/basic/GraphObserver.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/cluster/ClusterArray.h \
 ogdf/basic/simple_graph_alg.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/Graph.o -c src/basic/Graph.cpp

$(debug)/src/basic/GraphAttributes.o: src/basic/GraphAttributes.cpp \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/fileformats/GmlParser.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/basic/GraphObserver.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/cluster/ClusterArray.h \
 ogdf/fileformats/XmlParser.h ogdf/fileformats/XmlObject.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/GraphAttributes.o -c src/basic/GraphAttributes.cpp

$(saferelease)/src/basic/GraphAttributes.o: src/basic/GraphAttributes.cpp \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/fileformats/GmlParser.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/basic/GraphObserver.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/cluster/ClusterArray.h \
 ogdf/fileformats/XmlParser.h ogdf/fileformats/XmlObject.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/GraphAttributes.o -c src/basic/GraphAttributes.cpp

$(release)/src/basic/GraphAttributes.o: src/basic/GraphAttributes.cpp \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/fileformats/GmlParser.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/basic/GraphObserver.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/cluster/ClusterArray.h \
 ogdf/fileformats/XmlParser.h ogdf/fileformats/XmlObject.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/GraphAttributes.o -c src/basic/GraphAttributes.cpp

$(debug)/src/basic/GraphCopy.o: src/basic/GraphCopy.cpp ogdf/basic/GraphCopy.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/FaceSet.h ogdf/basic/FaceArray.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/GraphCopy.o -c src/basic/GraphCopy.cpp

$(saferelease)/src/basic/GraphCopy.o: src/basic/GraphCopy.cpp ogdf/basic/GraphCopy.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/FaceSet.h ogdf/basic/FaceArray.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/GraphCopy.o -c src/basic/GraphCopy.cpp

$(release)/src/basic/GraphCopy.o: src/basic/GraphCopy.cpp ogdf/basic/GraphCopy.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/FaceSet.h ogdf/basic/FaceArray.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/GraphCopy.o -c src/basic/GraphCopy.cpp

$(debug)/src/basic/GridLayout.o: src/basic/GridLayout.cpp ogdf/basic/GridLayoutMapped.h \
 ogdf/basic/GridLayout.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/geometry.h \
 ogdf/basic/Hashing.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h ogdf/basic/tuples.h \
 ogdf/basic/Stack.h ogdf/basic/UMLGraph.h ogdf/basic/HashArray.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/GridLayout.o -c src/basic/GridLayout.cpp

$(saferelease)/src/basic/GridLayout.o: src/basic/GridLayout.cpp ogdf/basic/GridLayoutMapped.h \
 ogdf/basic/GridLayout.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/geometry.h \
 ogdf/basic/Hashing.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h ogdf/basic/tuples.h \
 ogdf/basic/Stack.h ogdf/basic/UMLGraph.h ogdf/basic/HashArray.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/GridLayout.o -c src/basic/GridLayout.cpp

$(release)/src/basic/GridLayout.o: src/basic/GridLayout.cpp ogdf/basic/GridLayoutMapped.h \
 ogdf/basic/GridLayout.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/geometry.h \
 ogdf/basic/Hashing.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h ogdf/basic/tuples.h \
 ogdf/basic/Stack.h ogdf/basic/UMLGraph.h ogdf/basic/HashArray.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/GridLayout.o -c src/basic/GridLayout.cpp

$(debug)/src/basic/GridLayoutModule.o: src/basic/GridLayoutModule.cpp \
 ogdf/module/GridLayoutModule.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GridLayout.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/GridLayoutModule.o -c src/basic/GridLayoutModule.cpp

$(saferelease)/src/basic/GridLayoutModule.o: src/basic/GridLayoutModule.cpp \
 ogdf/module/GridLayoutModule.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GridLayout.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/GridLayoutModule.o -c src/basic/GridLayoutModule.cpp

$(release)/src/basic/GridLayoutModule.o: src/basic/GridLayoutModule.cpp \
 ogdf/module/GridLayoutModule.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GridLayout.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/GridLayoutModule.o -c src/basic/GridLayoutModule.cpp

$(debug)/src/basic/Hashing.o: src/basic/Hashing.cpp ogdf/basic/Hashing.h ogdf/basic/basic.h \
 ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/Hashing.o -c src/basic/Hashing.cpp

$(saferelease)/src/basic/Hashing.o: src/basic/Hashing.cpp ogdf/basic/Hashing.h ogdf/basic/basic.h \
 ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/Hashing.o -c src/basic/Hashing.cpp

$(release)/src/basic/Hashing.o: src/basic/Hashing.cpp ogdf/basic/Hashing.h ogdf/basic/basic.h \
 ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/Hashing.o -c src/basic/Hashing.cpp

$(debug)/src/basic/Logger.o: src/basic/Logger.cpp ogdf/basic/Logger.h ogdf/basic/basic.h \
 ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/Logger.o -c src/basic/Logger.cpp

$(saferelease)/src/basic/Logger.o: src/basic/Logger.cpp ogdf/basic/Logger.h ogdf/basic/basic.h \
 ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/Logger.o -c src/basic/Logger.cpp

$(release)/src/basic/Logger.o: src/basic/Logger.cpp ogdf/basic/Logger.h ogdf/basic/basic.h \
 ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/Logger.o -c src/basic/Logger.cpp

$(debug)/src/basic/NearestRectangleFinder.o: src/basic/NearestRectangleFinder.cpp \
 ogdf/basic/NearestRectangleFinder.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/geometry.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Hashing.h \
 ogdf/basic/BoundedStack.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/NearestRectangleFinder.o -c src/basic/NearestRectangleFinder.cpp

$(saferelease)/src/basic/NearestRectangleFinder.o: src/basic/NearestRectangleFinder.cpp \
 ogdf/basic/NearestRectangleFinder.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/geometry.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Hashing.h \
 ogdf/basic/BoundedStack.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/NearestRectangleFinder.o -c src/basic/NearestRectangleFinder.cpp

$(release)/src/basic/NearestRectangleFinder.o: src/basic/NearestRectangleFinder.cpp \
 ogdf/basic/NearestRectangleFinder.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/geometry.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Hashing.h \
 ogdf/basic/BoundedStack.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/NearestRectangleFinder.o -c src/basic/NearestRectangleFinder.cpp

$(debug)/src/basic/PoolMemoryAllocator.o: src/basic/PoolMemoryAllocator.cpp \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/PoolMemoryAllocator.o -c src/basic/PoolMemoryAllocator.cpp

$(saferelease)/src/basic/PoolMemoryAllocator.o: src/basic/PoolMemoryAllocator.cpp \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/PoolMemoryAllocator.o -c src/basic/PoolMemoryAllocator.cpp

$(release)/src/basic/PoolMemoryAllocator.o: src/basic/PoolMemoryAllocator.cpp \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/PoolMemoryAllocator.o -c src/basic/PoolMemoryAllocator.cpp

$(debug)/src/basic/PreprocessorLayout.o: src/basic/PreprocessorLayout.cpp \
 ogdf/basic/PreprocessorLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/PreprocessorLayout.o -c src/basic/PreprocessorLayout.cpp

$(saferelease)/src/basic/PreprocessorLayout.o: src/basic/PreprocessorLayout.cpp \
 ogdf/basic/PreprocessorLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/PreprocessorLayout.o -c src/basic/PreprocessorLayout.cpp

$(release)/src/basic/PreprocessorLayout.o: src/basic/PreprocessorLayout.cpp \
 ogdf/basic/PreprocessorLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/PreprocessorLayout.o -c src/basic/PreprocessorLayout.cpp

$(debug)/src/basic/String.o: src/basic/String.cpp ogdf/basic/String.h ogdf/basic/basic.h \
 ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Hashing.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/String.o -c src/basic/String.cpp

$(saferelease)/src/basic/String.o: src/basic/String.cpp ogdf/basic/String.h ogdf/basic/basic.h \
 ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Hashing.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/String.o -c src/basic/String.cpp

$(release)/src/basic/String.o: src/basic/String.cpp ogdf/basic/String.h ogdf/basic/basic.h \
 ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Hashing.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/String.o -c src/basic/String.cpp

$(debug)/src/basic/System.o: src/basic/System.cpp ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/System.o -c src/basic/System.cpp

$(saferelease)/src/basic/System.o: src/basic/System.cpp ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/System.o -c src/basic/System.cpp

$(release)/src/basic/System.o: src/basic/System.cpp ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/System.o -c src/basic/System.cpp

$(debug)/src/basic/UMLGraph.o: src/basic/UMLGraph.cpp ogdf/basic/UMLGraph.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/SList.h ogdf/basic/EdgeComparer.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/misclayout/CircularLayout.h \
 ogdf/module/LayoutModule.h ogdf/internal/energybased/MultilevelGraph.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/UMLGraph.o -c src/basic/UMLGraph.cpp

$(saferelease)/src/basic/UMLGraph.o: src/basic/UMLGraph.cpp ogdf/basic/UMLGraph.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/SList.h ogdf/basic/EdgeComparer.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/misclayout/CircularLayout.h \
 ogdf/module/LayoutModule.h ogdf/internal/energybased/MultilevelGraph.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/UMLGraph.o -c src/basic/UMLGraph.cpp

$(release)/src/basic/UMLGraph.o: src/basic/UMLGraph.cpp ogdf/basic/UMLGraph.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/SList.h ogdf/basic/EdgeComparer.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/misclayout/CircularLayout.h \
 ogdf/module/LayoutModule.h ogdf/internal/energybased/MultilevelGraph.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/UMLGraph.o -c src/basic/UMLGraph.cpp

$(debug)/src/basic/basic.o: src/basic/basic.cpp ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/String.h ogdf/basic/Hashing.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/basic.o -c src/basic/basic.cpp

$(saferelease)/src/basic/basic.o: src/basic/basic.cpp ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/String.h ogdf/basic/Hashing.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/basic.o -c src/basic/basic.cpp

$(release)/src/basic/basic.o: src/basic/basic.cpp ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/String.h ogdf/basic/Hashing.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/basic.o -c src/basic/basic.cpp

$(debug)/src/basic/extended_graph_alg.o: src/basic/extended_graph_alg.cpp \
 ogdf/basic/simple_graph_alg.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/SList.h ogdf/basic/extended_graph_alg.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h \
 ogdf/basic/GraphObserver.h ogdf/basic/BinaryHeap2.h \
 ogdf/basic/HeapBase.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/cluster/ClusterArray.h ogdf/planarity/PlanarModule.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/extended_graph_alg.o -c src/basic/extended_graph_alg.cpp

$(saferelease)/src/basic/extended_graph_alg.o: src/basic/extended_graph_alg.cpp \
 ogdf/basic/simple_graph_alg.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/SList.h ogdf/basic/extended_graph_alg.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h \
 ogdf/basic/GraphObserver.h ogdf/basic/BinaryHeap2.h \
 ogdf/basic/HeapBase.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/cluster/ClusterArray.h ogdf/planarity/PlanarModule.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/extended_graph_alg.o -c src/basic/extended_graph_alg.cpp

$(release)/src/basic/extended_graph_alg.o: src/basic/extended_graph_alg.cpp \
 ogdf/basic/simple_graph_alg.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/SList.h ogdf/basic/extended_graph_alg.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h \
 ogdf/basic/GraphObserver.h ogdf/basic/BinaryHeap2.h \
 ogdf/basic/HeapBase.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/cluster/ClusterArray.h ogdf/planarity/PlanarModule.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/extended_graph_alg.o -c src/basic/extended_graph_alg.cpp

$(debug)/src/basic/geometry.o: src/basic/geometry.cpp ogdf/basic/geometry.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Hashing.h ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/geometry.o -c src/basic/geometry.cpp

$(saferelease)/src/basic/geometry.o: src/basic/geometry.cpp ogdf/basic/geometry.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Hashing.h ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/geometry.o -c src/basic/geometry.cpp

$(release)/src/basic/geometry.o: src/basic/geometry.cpp ogdf/basic/geometry.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Hashing.h ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/geometry.o -c src/basic/geometry.cpp

$(debug)/src/basic/graph_generators.o: src/basic/graph_generators.cpp \
 ogdf/basic/graph_generators.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h \
 ogdf/basic/SList.h ogdf/basic/GraphObserver.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/FaceArray.h \
 ogdf/planarity/PlanarModule.h ogdf/basic/Array2D.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/graph_generators.o -c src/basic/graph_generators.cpp

$(saferelease)/src/basic/graph_generators.o: src/basic/graph_generators.cpp \
 ogdf/basic/graph_generators.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h \
 ogdf/basic/SList.h ogdf/basic/GraphObserver.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/FaceArray.h \
 ogdf/planarity/PlanarModule.h ogdf/basic/Array2D.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/graph_generators.o -c src/basic/graph_generators.cpp

$(release)/src/basic/graph_generators.o: src/basic/graph_generators.cpp \
 ogdf/basic/graph_generators.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h \
 ogdf/basic/SList.h ogdf/basic/GraphObserver.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/FaceArray.h \
 ogdf/planarity/PlanarModule.h ogdf/basic/Array2D.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/graph_generators.o -c src/basic/graph_generators.cpp

$(debug)/src/basic/modules.o: src/basic/modules.cpp ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/module/AcyclicSubgraphModule.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/modules.o -c src/basic/modules.cpp

$(saferelease)/src/basic/modules.o: src/basic/modules.cpp ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/module/AcyclicSubgraphModule.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/modules.o -c src/basic/modules.cpp

$(release)/src/basic/modules.o: src/basic/modules.cpp ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/module/AcyclicSubgraphModule.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/modules.o -c src/basic/modules.cpp

$(debug)/src/basic/random_hierarchy.o: src/basic/random_hierarchy.cpp \
 ogdf/basic/graph_generators.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h \
 ogdf/basic/SList.h ogdf/basic/GraphObserver.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/random_hierarchy.o -c src/basic/random_hierarchy.cpp

$(saferelease)/src/basic/random_hierarchy.o: src/basic/random_hierarchy.cpp \
 ogdf/basic/graph_generators.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h \
 ogdf/basic/SList.h ogdf/basic/GraphObserver.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/random_hierarchy.o -c src/basic/random_hierarchy.cpp

$(release)/src/basic/random_hierarchy.o: src/basic/random_hierarchy.cpp \
 ogdf/basic/graph_generators.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h \
 ogdf/basic/SList.h ogdf/basic/GraphObserver.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/random_hierarchy.o -c src/basic/random_hierarchy.cpp

$(debug)/src/basic/simple_graph_alg.o: src/basic/simple_graph_alg.cpp \
 ogdf/basic/simple_graph_alg.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/SList.h ogdf/basic/Stack.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/tuples.h ogdf/basic/Hashing.h ogdf/basic/BoundedStack.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/simple_graph_alg.o -c src/basic/simple_graph_alg.cpp

$(saferelease)/src/basic/simple_graph_alg.o: src/basic/simple_graph_alg.cpp \
 ogdf/basic/simple_graph_alg.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/SList.h ogdf/basic/Stack.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/tuples.h ogdf/basic/Hashing.h ogdf/basic/BoundedStack.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/simple_graph_alg.o -c src/basic/simple_graph_alg.cpp

$(release)/src/basic/simple_graph_alg.o: src/basic/simple_graph_alg.cpp \
 ogdf/basic/simple_graph_alg.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/SList.h ogdf/basic/Stack.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/tuples.h ogdf/basic/Hashing.h ogdf/basic/BoundedStack.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/simple_graph_alg.o -c src/basic/simple_graph_alg.cpp

$(debug)/src/basic/stNumber.o: src/basic/stNumber.cpp ogdf/basic/simple_graph_alg.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/SList.h ogdf/basic/Stack.h
	mkdir -p $(debug)/src/basic
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/basic/stNumber.o -c src/basic/stNumber.cpp

$(saferelease)/src/basic/stNumber.o: src/basic/stNumber.cpp ogdf/basic/simple_graph_alg.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/SList.h ogdf/basic/Stack.h
	mkdir -p $(saferelease)/src/basic
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/basic/stNumber.o -c src/basic/stNumber.cpp

$(release)/src/basic/stNumber.o: src/basic/stNumber.cpp ogdf/basic/simple_graph_alg.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/SList.h ogdf/basic/Stack.h
	mkdir -p $(release)/src/basic
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/basic/stNumber.o -c src/basic/stNumber.cpp

$(debug)/src/cluster/CPlanarEdgeInserter.o: src/cluster/CPlanarEdgeInserter.cpp \
 ogdf/cluster/CPlanarEdgeInserter.h ogdf/cluster/ClusterPlanRep.h \
 ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/basic/UMLGraph.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/cluster/ClusterArray.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/GraphObserver.h \
 ogdf/basic/Queue.h
	mkdir -p $(debug)/src/cluster
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/cluster/CPlanarEdgeInserter.o -c src/cluster/CPlanarEdgeInserter.cpp

$(saferelease)/src/cluster/CPlanarEdgeInserter.o: src/cluster/CPlanarEdgeInserter.cpp \
 ogdf/cluster/CPlanarEdgeInserter.h ogdf/cluster/ClusterPlanRep.h \
 ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/basic/UMLGraph.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/cluster/ClusterArray.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/GraphObserver.h \
 ogdf/basic/Queue.h
	mkdir -p $(saferelease)/src/cluster
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/cluster/CPlanarEdgeInserter.o -c src/cluster/CPlanarEdgeInserter.cpp

$(release)/src/cluster/CPlanarEdgeInserter.o: src/cluster/CPlanarEdgeInserter.cpp \
 ogdf/cluster/CPlanarEdgeInserter.h ogdf/cluster/ClusterPlanRep.h \
 ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/basic/UMLGraph.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/cluster/ClusterArray.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/GraphObserver.h \
 ogdf/basic/Queue.h
	mkdir -p $(release)/src/cluster
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/cluster/CPlanarEdgeInserter.o -c src/cluster/CPlanarEdgeInserter.cpp

$(debug)/src/cluster/CPlanarSubCLusteredST.o: src/cluster/CPlanarSubCLusteredST.cpp \
 ogdf/internal/cluster/CPlanarSubClusteredST.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/Stack.h \
 ogdf/basic/SList.h ogdf/basic/GraphObserver.h \
 ogdf/cluster/ClusterArray.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/extended_graph_alg.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h
	mkdir -p $(debug)/src/cluster
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/cluster/CPlanarSubCLusteredST.o -c src/cluster/CPlanarSubCLusteredST.cpp

$(saferelease)/src/cluster/CPlanarSubCLusteredST.o: src/cluster/CPlanarSubCLusteredST.cpp \
 ogdf/internal/cluster/CPlanarSubClusteredST.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/Stack.h \
 ogdf/basic/SList.h ogdf/basic/GraphObserver.h \
 ogdf/cluster/ClusterArray.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/extended_graph_alg.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h
	mkdir -p $(saferelease)/src/cluster
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/cluster/CPlanarSubCLusteredST.o -c src/cluster/CPlanarSubCLusteredST.cpp

$(release)/src/cluster/CPlanarSubCLusteredST.o: src/cluster/CPlanarSubCLusteredST.cpp \
 ogdf/internal/cluster/CPlanarSubClusteredST.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/Stack.h \
 ogdf/basic/SList.h ogdf/basic/GraphObserver.h \
 ogdf/cluster/ClusterArray.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/extended_graph_alg.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h
	mkdir -p $(release)/src/cluster
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/cluster/CPlanarSubCLusteredST.o -c src/cluster/CPlanarSubCLusteredST.cpp

$(debug)/src/cluster/CPlanarSubClusteredGraph.o: src/cluster/CPlanarSubClusteredGraph.cpp \
 ogdf/cluster/CPlanarSubClusteredGraph.h ogdf/cluster/ClusterPlanRep.h \
 ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/basic/UMLGraph.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/cluster/ClusterArray.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/GraphObserver.h \
 ogdf/internal/cluster/CPlanarSubClusteredST.h \
 ogdf/cluster/CconnectClusterPlanar.h \
 ogdf/internal/planarity/PlanarPQTree.h ogdf/internal/planarity/PQTree.h \
 ogdf/basic/Queue.h ogdf/internal/planarity/PQNode.h \
 ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/EmbedKey.h
	mkdir -p $(debug)/src/cluster
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/cluster/CPlanarSubClusteredGraph.o -c src/cluster/CPlanarSubClusteredGraph.cpp

$(saferelease)/src/cluster/CPlanarSubClusteredGraph.o: src/cluster/CPlanarSubClusteredGraph.cpp \
 ogdf/cluster/CPlanarSubClusteredGraph.h ogdf/cluster/ClusterPlanRep.h \
 ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/basic/UMLGraph.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/cluster/ClusterArray.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/GraphObserver.h \
 ogdf/internal/cluster/CPlanarSubClusteredST.h \
 ogdf/cluster/CconnectClusterPlanar.h \
 ogdf/internal/planarity/PlanarPQTree.h ogdf/internal/planarity/PQTree.h \
 ogdf/basic/Queue.h ogdf/internal/planarity/PQNode.h \
 ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/EmbedKey.h
	mkdir -p $(saferelease)/src/cluster
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/cluster/CPlanarSubClusteredGraph.o -c src/cluster/CPlanarSubClusteredGraph.cpp

$(release)/src/cluster/CPlanarSubClusteredGraph.o: src/cluster/CPlanarSubClusteredGraph.cpp \
 ogdf/cluster/CPlanarSubClusteredGraph.h ogdf/cluster/ClusterPlanRep.h \
 ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/basic/UMLGraph.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/cluster/ClusterArray.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/GraphObserver.h \
 ogdf/internal/cluster/CPlanarSubClusteredST.h \
 ogdf/cluster/CconnectClusterPlanar.h \
 ogdf/internal/planarity/PlanarPQTree.h ogdf/internal/planarity/PQTree.h \
 ogdf/basic/Queue.h ogdf/internal/planarity/PQNode.h \
 ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/EmbedKey.h
	mkdir -p $(release)/src/cluster
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/cluster/CPlanarSubClusteredGraph.o -c src/cluster/CPlanarSubClusteredGraph.cpp

$(debug)/src/cluster/CconnectClusterPlanar.o: src/cluster/CconnectClusterPlanar.cpp \
 ogdf/cluster/CconnectClusterPlanar.h \
 ogdf/internal/planarity/PlanarPQTree.h ogdf/internal/planarity/PQTree.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Queue.h \
 ogdf/internal/planarity/PQNode.h ogdf/basic/List.h \
 ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h ogdf/basic/Graph.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/EmbedKey.h ogdf/cluster/ClusterArray.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/GraphObserver.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/extended_graph_alg.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(debug)/src/cluster
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/cluster/CconnectClusterPlanar.o -c src/cluster/CconnectClusterPlanar.cpp

$(saferelease)/src/cluster/CconnectClusterPlanar.o: src/cluster/CconnectClusterPlanar.cpp \
 ogdf/cluster/CconnectClusterPlanar.h \
 ogdf/internal/planarity/PlanarPQTree.h ogdf/internal/planarity/PQTree.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Queue.h \
 ogdf/internal/planarity/PQNode.h ogdf/basic/List.h \
 ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h ogdf/basic/Graph.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/EmbedKey.h ogdf/cluster/ClusterArray.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/GraphObserver.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/extended_graph_alg.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(saferelease)/src/cluster
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/cluster/CconnectClusterPlanar.o -c src/cluster/CconnectClusterPlanar.cpp

$(release)/src/cluster/CconnectClusterPlanar.o: src/cluster/CconnectClusterPlanar.cpp \
 ogdf/cluster/CconnectClusterPlanar.h \
 ogdf/internal/planarity/PlanarPQTree.h ogdf/internal/planarity/PQTree.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Queue.h \
 ogdf/internal/planarity/PQNode.h ogdf/basic/List.h \
 ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h ogdf/basic/Graph.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/EmbedKey.h ogdf/cluster/ClusterArray.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/GraphObserver.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/extended_graph_alg.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(release)/src/cluster
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/cluster/CconnectClusterPlanar.o -c src/cluster/CconnectClusterPlanar.cpp

$(debug)/src/cluster/CconnectClusterPlanarEmbed.o: src/cluster/CconnectClusterPlanarEmbed.cpp \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/cluster/CconnectClusterPlanarEmbed.h \
 ogdf/internal/planarity/EmbedPQTree.h ogdf/internal/planarity/PQTree.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h ogdf/basic/Queue.h \
 ogdf/internal/planarity/PQNode.h ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/EmbedIndicator.h \
 ogdf/internal/planarity/EmbedKey.h ogdf/cluster/ClusterArray.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/GraphObserver.h \
 ogdf/internal/cluster/ClusterPQContainer.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/extended_graph_alg.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(debug)/src/cluster
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/cluster/CconnectClusterPlanarEmbed.o -c src/cluster/CconnectClusterPlanarEmbed.cpp

$(saferelease)/src/cluster/CconnectClusterPlanarEmbed.o: src/cluster/CconnectClusterPlanarEmbed.cpp \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/cluster/CconnectClusterPlanarEmbed.h \
 ogdf/internal/planarity/EmbedPQTree.h ogdf/internal/planarity/PQTree.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h ogdf/basic/Queue.h \
 ogdf/internal/planarity/PQNode.h ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/EmbedIndicator.h \
 ogdf/internal/planarity/EmbedKey.h ogdf/cluster/ClusterArray.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/GraphObserver.h \
 ogdf/internal/cluster/ClusterPQContainer.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/extended_graph_alg.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(saferelease)/src/cluster
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/cluster/CconnectClusterPlanarEmbed.o -c src/cluster/CconnectClusterPlanarEmbed.cpp

$(release)/src/cluster/CconnectClusterPlanarEmbed.o: src/cluster/CconnectClusterPlanarEmbed.cpp \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/cluster/CconnectClusterPlanarEmbed.h \
 ogdf/internal/planarity/EmbedPQTree.h ogdf/internal/planarity/PQTree.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h ogdf/basic/Queue.h \
 ogdf/internal/planarity/PQNode.h ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/EmbedIndicator.h \
 ogdf/internal/planarity/EmbedKey.h ogdf/cluster/ClusterArray.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/GraphObserver.h \
 ogdf/internal/cluster/ClusterPQContainer.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/extended_graph_alg.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(release)/src/cluster
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/cluster/CconnectClusterPlanarEmbed.o -c src/cluster/CconnectClusterPlanarEmbed.cpp

$(debug)/src/cluster/ClusterGraph.o: src/cluster/ClusterGraph.cpp ogdf/cluster/ClusterGraph.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h ogdf/basic/GraphObserver.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraphObserver.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/fileformats/GmlParser.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/geometry.h \
 ogdf/cluster/ClusterGraphAttributes.h ogdf/basic/HashArray.h \
 ogdf/basic/AdjEntryArray.h
	mkdir -p $(debug)/src/cluster
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/cluster/ClusterGraph.o -c src/cluster/ClusterGraph.cpp

$(saferelease)/src/cluster/ClusterGraph.o: src/cluster/ClusterGraph.cpp ogdf/cluster/ClusterGraph.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h ogdf/basic/GraphObserver.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraphObserver.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/fileformats/GmlParser.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/geometry.h \
 ogdf/cluster/ClusterGraphAttributes.h ogdf/basic/HashArray.h \
 ogdf/basic/AdjEntryArray.h
	mkdir -p $(saferelease)/src/cluster
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/cluster/ClusterGraph.o -c src/cluster/ClusterGraph.cpp

$(release)/src/cluster/ClusterGraph.o: src/cluster/ClusterGraph.cpp ogdf/cluster/ClusterGraph.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h ogdf/basic/GraphObserver.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraphObserver.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/fileformats/GmlParser.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/geometry.h \
 ogdf/cluster/ClusterGraphAttributes.h ogdf/basic/HashArray.h \
 ogdf/basic/AdjEntryArray.h
	mkdir -p $(release)/src/cluster
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/cluster/ClusterGraph.o -c src/cluster/ClusterGraph.cpp

$(debug)/src/cluster/ClusterGraphAttributes.o: src/cluster/ClusterGraphAttributes.cpp \
 ogdf/cluster/ClusterGraphAttributes.h ogdf/basic/HashArray.h \
 ogdf/basic/Hashing.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/cluster/ClusterArray.h ogdf/basic/Array.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/Stack.h \
 ogdf/basic/SList.h ogdf/basic/GraphObserver.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/geometry.h \
 ogdf/fileformats/GmlParser.h ogdf/fileformats/OgmlParser.h \
 ogdf/fileformats/Ogml.h ogdf/fileformats/DinoXmlParser.h \
 ogdf/fileformats/DinoXmlScanner.h ogdf/fileformats/DinoLineBuffer.h
	mkdir -p $(debug)/src/cluster
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/cluster/ClusterGraphAttributes.o -c src/cluster/ClusterGraphAttributes.cpp

$(saferelease)/src/cluster/ClusterGraphAttributes.o: src/cluster/ClusterGraphAttributes.cpp \
 ogdf/cluster/ClusterGraphAttributes.h ogdf/basic/HashArray.h \
 ogdf/basic/Hashing.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/cluster/ClusterArray.h ogdf/basic/Array.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/Stack.h \
 ogdf/basic/SList.h ogdf/basic/GraphObserver.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/geometry.h \
 ogdf/fileformats/GmlParser.h ogdf/fileformats/OgmlParser.h \
 ogdf/fileformats/Ogml.h ogdf/fileformats/DinoXmlParser.h \
 ogdf/fileformats/DinoXmlScanner.h ogdf/fileformats/DinoLineBuffer.h
	mkdir -p $(saferelease)/src/cluster
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/cluster/ClusterGraphAttributes.o -c src/cluster/ClusterGraphAttributes.cpp

$(release)/src/cluster/ClusterGraphAttributes.o: src/cluster/ClusterGraphAttributes.cpp \
 ogdf/cluster/ClusterGraphAttributes.h ogdf/basic/HashArray.h \
 ogdf/basic/Hashing.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/cluster/ClusterArray.h ogdf/basic/Array.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/Stack.h \
 ogdf/basic/SList.h ogdf/basic/GraphObserver.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/geometry.h \
 ogdf/fileformats/GmlParser.h ogdf/fileformats/OgmlParser.h \
 ogdf/fileformats/Ogml.h ogdf/fileformats/DinoXmlParser.h \
 ogdf/fileformats/DinoXmlScanner.h ogdf/fileformats/DinoLineBuffer.h
	mkdir -p $(release)/src/cluster
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/cluster/ClusterGraphAttributes.o -c src/cluster/ClusterGraphAttributes.cpp

$(debug)/src/cluster/ClusterPlanarizationLayout.o: src/cluster/ClusterPlanarizationLayout.cpp \
 ogdf/cluster/ClusterPlanarizationLayout.h \
 ogdf/module/LayoutClusterPlanRepModule.h ogdf/cluster/ClusterPlanRep.h \
 ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/basic/UMLGraph.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/cluster/ClusterArray.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/GraphObserver.h \
 ogdf/module/CCLayoutPackModule.h ogdf/basic/ModuleOption.h \
 ogdf/cluster/CconnectClusterPlanarEmbed.h \
 ogdf/internal/planarity/EmbedPQTree.h ogdf/internal/planarity/PQTree.h \
 ogdf/basic/Queue.h ogdf/internal/planarity/PQNode.h \
 ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/EmbedIndicator.h \
 ogdf/internal/planarity/EmbedKey.h \
 ogdf/internal/cluster/ClusterPQContainer.h \
 ogdf/cluster/CPlanarSubClusteredGraph.h \
 ogdf/internal/cluster/CPlanarSubClusteredST.h \
 ogdf/cluster/ClusterOrthoLayout.h ogdf/cluster/CPlanarEdgeInserter.h \
 ogdf/packing/TileToRowsCCPacker.h ogdf/basic/extended_graph_alg.h
	mkdir -p $(debug)/src/cluster
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/cluster/ClusterPlanarizationLayout.o -c src/cluster/ClusterPlanarizationLayout.cpp

$(saferelease)/src/cluster/ClusterPlanarizationLayout.o: src/cluster/ClusterPlanarizationLayout.cpp \
 ogdf/cluster/ClusterPlanarizationLayout.h \
 ogdf/module/LayoutClusterPlanRepModule.h ogdf/cluster/ClusterPlanRep.h \
 ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/basic/UMLGraph.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/cluster/ClusterArray.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/GraphObserver.h \
 ogdf/module/CCLayoutPackModule.h ogdf/basic/ModuleOption.h \
 ogdf/cluster/CconnectClusterPlanarEmbed.h \
 ogdf/internal/planarity/EmbedPQTree.h ogdf/internal/planarity/PQTree.h \
 ogdf/basic/Queue.h ogdf/internal/planarity/PQNode.h \
 ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/EmbedIndicator.h \
 ogdf/internal/planarity/EmbedKey.h \
 ogdf/internal/cluster/ClusterPQContainer.h \
 ogdf/cluster/CPlanarSubClusteredGraph.h \
 ogdf/internal/cluster/CPlanarSubClusteredST.h \
 ogdf/cluster/ClusterOrthoLayout.h ogdf/cluster/CPlanarEdgeInserter.h \
 ogdf/packing/TileToRowsCCPacker.h ogdf/basic/extended_graph_alg.h
	mkdir -p $(saferelease)/src/cluster
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/cluster/ClusterPlanarizationLayout.o -c src/cluster/ClusterPlanarizationLayout.cpp

$(release)/src/cluster/ClusterPlanarizationLayout.o: src/cluster/ClusterPlanarizationLayout.cpp \
 ogdf/cluster/ClusterPlanarizationLayout.h \
 ogdf/module/LayoutClusterPlanRepModule.h ogdf/cluster/ClusterPlanRep.h \
 ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/basic/UMLGraph.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/cluster/ClusterArray.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/GraphObserver.h \
 ogdf/module/CCLayoutPackModule.h ogdf/basic/ModuleOption.h \
 ogdf/cluster/CconnectClusterPlanarEmbed.h \
 ogdf/internal/planarity/EmbedPQTree.h ogdf/internal/planarity/PQTree.h \
 ogdf/basic/Queue.h ogdf/internal/planarity/PQNode.h \
 ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/EmbedIndicator.h \
 ogdf/internal/planarity/EmbedKey.h \
 ogdf/internal/cluster/ClusterPQContainer.h \
 ogdf/cluster/CPlanarSubClusteredGraph.h \
 ogdf/internal/cluster/CPlanarSubClusteredST.h \
 ogdf/cluster/ClusterOrthoLayout.h ogdf/cluster/CPlanarEdgeInserter.h \
 ogdf/packing/TileToRowsCCPacker.h ogdf/basic/extended_graph_alg.h
	mkdir -p $(release)/src/cluster
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/cluster/ClusterPlanarizationLayout.o -c src/cluster/ClusterPlanarizationLayout.cpp

$(debug)/src/cluster/Cluster_ChunkConnection.o: src/cluster/Cluster_ChunkConnection.cpp
	mkdir -p $(debug)/src/cluster
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/cluster/Cluster_ChunkConnection.o -c src/cluster/Cluster_ChunkConnection.cpp

$(saferelease)/src/cluster/Cluster_ChunkConnection.o: src/cluster/Cluster_ChunkConnection.cpp
	mkdir -p $(saferelease)/src/cluster
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/cluster/Cluster_ChunkConnection.o -c src/cluster/Cluster_ChunkConnection.cpp

$(release)/src/cluster/Cluster_ChunkConnection.o: src/cluster/Cluster_ChunkConnection.cpp
	mkdir -p $(release)/src/cluster
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/cluster/Cluster_ChunkConnection.o -c src/cluster/Cluster_ChunkConnection.cpp

$(debug)/src/cluster/Cluster_CutConstraint.o: src/cluster/Cluster_CutConstraint.cpp
	mkdir -p $(debug)/src/cluster
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/cluster/Cluster_CutConstraint.o -c src/cluster/Cluster_CutConstraint.cpp

$(saferelease)/src/cluster/Cluster_CutConstraint.o: src/cluster/Cluster_CutConstraint.cpp
	mkdir -p $(saferelease)/src/cluster
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/cluster/Cluster_CutConstraint.o -c src/cluster/Cluster_CutConstraint.cpp

$(release)/src/cluster/Cluster_CutConstraint.o: src/cluster/Cluster_CutConstraint.cpp
	mkdir -p $(release)/src/cluster
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/cluster/Cluster_CutConstraint.o -c src/cluster/Cluster_CutConstraint.cpp

$(debug)/src/cluster/Cluster_EdgeVar.o: src/cluster/Cluster_EdgeVar.cpp
	mkdir -p $(debug)/src/cluster
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/cluster/Cluster_EdgeVar.o -c src/cluster/Cluster_EdgeVar.cpp

$(saferelease)/src/cluster/Cluster_EdgeVar.o: src/cluster/Cluster_EdgeVar.cpp
	mkdir -p $(saferelease)/src/cluster
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/cluster/Cluster_EdgeVar.o -c src/cluster/Cluster_EdgeVar.cpp

$(release)/src/cluster/Cluster_EdgeVar.o: src/cluster/Cluster_EdgeVar.cpp
	mkdir -p $(release)/src/cluster
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/cluster/Cluster_EdgeVar.o -c src/cluster/Cluster_EdgeVar.cpp

$(debug)/src/cluster/Cluster_MaxPlanarEdges.o: src/cluster/Cluster_MaxPlanarEdges.cpp
	mkdir -p $(debug)/src/cluster
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/cluster/Cluster_MaxPlanarEdges.o -c src/cluster/Cluster_MaxPlanarEdges.cpp

$(saferelease)/src/cluster/Cluster_MaxPlanarEdges.o: src/cluster/Cluster_MaxPlanarEdges.cpp
	mkdir -p $(saferelease)/src/cluster
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/cluster/Cluster_MaxPlanarEdges.o -c src/cluster/Cluster_MaxPlanarEdges.cpp

$(release)/src/cluster/Cluster_MaxPlanarEdges.o: src/cluster/Cluster_MaxPlanarEdges.cpp
	mkdir -p $(release)/src/cluster
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/cluster/Cluster_MaxPlanarEdges.o -c src/cluster/Cluster_MaxPlanarEdges.cpp

$(debug)/src/cluster/Clusterer.o: src/cluster/Clusterer.cpp ogdf/graphalg/Clusterer.h \
 ogdf/module/ClustererModule.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h \
 ogdf/basic/SList.h ogdf/basic/GraphObserver.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h
	mkdir -p $(debug)/src/cluster
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/cluster/Clusterer.o -c src/cluster/Clusterer.cpp

$(saferelease)/src/cluster/Clusterer.o: src/cluster/Clusterer.cpp ogdf/graphalg/Clusterer.h \
 ogdf/module/ClustererModule.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h \
 ogdf/basic/SList.h ogdf/basic/GraphObserver.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h
	mkdir -p $(saferelease)/src/cluster
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/cluster/Clusterer.o -c src/cluster/Clusterer.cpp

$(release)/src/cluster/Clusterer.o: src/cluster/Clusterer.cpp ogdf/graphalg/Clusterer.h \
 ogdf/module/ClustererModule.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h \
 ogdf/basic/SList.h ogdf/basic/GraphObserver.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h
	mkdir -p $(release)/src/cluster
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/cluster/Clusterer.o -c src/cluster/Clusterer.cpp

$(debug)/src/cluster/KuratowskiConstraint.o: src/cluster/KuratowskiConstraint.cpp
	mkdir -p $(debug)/src/cluster
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/cluster/KuratowskiConstraint.o -c src/cluster/KuratowskiConstraint.cpp

$(saferelease)/src/cluster/KuratowskiConstraint.o: src/cluster/KuratowskiConstraint.cpp
	mkdir -p $(saferelease)/src/cluster
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/cluster/KuratowskiConstraint.o -c src/cluster/KuratowskiConstraint.cpp

$(release)/src/cluster/KuratowskiConstraint.o: src/cluster/KuratowskiConstraint.cpp
	mkdir -p $(release)/src/cluster
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/cluster/KuratowskiConstraint.o -c src/cluster/KuratowskiConstraint.cpp

$(debug)/src/cluster/MaxCPlanar_Master.o: src/cluster/MaxCPlanar_Master.cpp
	mkdir -p $(debug)/src/cluster
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/cluster/MaxCPlanar_Master.o -c src/cluster/MaxCPlanar_Master.cpp

$(saferelease)/src/cluster/MaxCPlanar_Master.o: src/cluster/MaxCPlanar_Master.cpp
	mkdir -p $(saferelease)/src/cluster
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/cluster/MaxCPlanar_Master.o -c src/cluster/MaxCPlanar_Master.cpp

$(release)/src/cluster/MaxCPlanar_Master.o: src/cluster/MaxCPlanar_Master.cpp
	mkdir -p $(release)/src/cluster
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/cluster/MaxCPlanar_Master.o -c src/cluster/MaxCPlanar_Master.cpp

$(debug)/src/cluster/MaxCPlanar_MinimalClusterConnection.o: \
 src/cluster/MaxCPlanar_MinimalClusterConnection.cpp
	mkdir -p $(debug)/src/cluster
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/cluster/MaxCPlanar_MinimalClusterConnection.o -c src/cluster/MaxCPlanar_MinimalClusterConnection.cpp

$(saferelease)/src/cluster/MaxCPlanar_MinimalClusterConnection.o: \
 src/cluster/MaxCPlanar_MinimalClusterConnection.cpp
	mkdir -p $(saferelease)/src/cluster
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/cluster/MaxCPlanar_MinimalClusterConnection.o -c src/cluster/MaxCPlanar_MinimalClusterConnection.cpp

$(release)/src/cluster/MaxCPlanar_MinimalClusterConnection.o: \
 src/cluster/MaxCPlanar_MinimalClusterConnection.cpp
	mkdir -p $(release)/src/cluster
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/cluster/MaxCPlanar_MinimalClusterConnection.o -c src/cluster/MaxCPlanar_MinimalClusterConnection.cpp

$(debug)/src/cluster/MaxCPlanar_Sub.o: src/cluster/MaxCPlanar_Sub.cpp
	mkdir -p $(debug)/src/cluster
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/cluster/MaxCPlanar_Sub.o -c src/cluster/MaxCPlanar_Sub.cpp

$(saferelease)/src/cluster/MaxCPlanar_Sub.o: src/cluster/MaxCPlanar_Sub.cpp
	mkdir -p $(saferelease)/src/cluster
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/cluster/MaxCPlanar_Sub.o -c src/cluster/MaxCPlanar_Sub.cpp

$(release)/src/cluster/MaxCPlanar_Sub.o: src/cluster/MaxCPlanar_Sub.cpp
	mkdir -p $(release)/src/cluster
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/cluster/MaxCPlanar_Sub.o -c src/cluster/MaxCPlanar_Sub.cpp

$(debug)/src/cluster/MaximumCPlanarSubgraph.o: src/cluster/MaximumCPlanarSubgraph.cpp
	mkdir -p $(debug)/src/cluster
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/cluster/MaximumCPlanarSubgraph.o -c src/cluster/MaximumCPlanarSubgraph.cpp

$(saferelease)/src/cluster/MaximumCPlanarSubgraph.o: src/cluster/MaximumCPlanarSubgraph.cpp
	mkdir -p $(saferelease)/src/cluster
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/cluster/MaximumCPlanarSubgraph.o -c src/cluster/MaximumCPlanarSubgraph.cpp

$(release)/src/cluster/MaximumCPlanarSubgraph.o: src/cluster/MaximumCPlanarSubgraph.cpp
	mkdir -p $(release)/src/cluster
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/cluster/MaximumCPlanarSubgraph.o -c src/cluster/MaximumCPlanarSubgraph.cpp

$(debug)/src/decomposition/BCTree.o: src/decomposition/BCTree.cpp ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/basic/SList.h
	mkdir -p $(debug)/src/decomposition
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/decomposition/BCTree.o -c src/decomposition/BCTree.cpp

$(saferelease)/src/decomposition/BCTree.o: src/decomposition/BCTree.cpp ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/basic/SList.h
	mkdir -p $(saferelease)/src/decomposition
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/decomposition/BCTree.o -c src/decomposition/BCTree.cpp

$(release)/src/decomposition/BCTree.o: src/decomposition/BCTree.cpp ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/basic/SList.h
	mkdir -p $(release)/src/decomposition
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/decomposition/BCTree.o -c src/decomposition/BCTree.cpp

$(debug)/src/decomposition/DynamicBCTree.o: src/decomposition/DynamicBCTree.cpp \
 ogdf/decomposition/DynamicBCTree.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/basic/SList.h
	mkdir -p $(debug)/src/decomposition
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/decomposition/DynamicBCTree.o -c src/decomposition/DynamicBCTree.cpp

$(saferelease)/src/decomposition/DynamicBCTree.o: src/decomposition/DynamicBCTree.cpp \
 ogdf/decomposition/DynamicBCTree.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/basic/SList.h
	mkdir -p $(saferelease)/src/decomposition
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/decomposition/DynamicBCTree.o -c src/decomposition/DynamicBCTree.cpp

$(release)/src/decomposition/DynamicBCTree.o: src/decomposition/DynamicBCTree.cpp \
 ogdf/decomposition/DynamicBCTree.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/basic/SList.h
	mkdir -p $(release)/src/decomposition
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/decomposition/DynamicBCTree.o -c src/decomposition/DynamicBCTree.cpp

$(debug)/src/decomposition/DynamicSPQRForest.o: src/decomposition/DynamicSPQRForest.cpp \
 ogdf/decomposition/DynamicSPQRForest.h \
 ogdf/decomposition/DynamicBCTree.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/basic/SList.h \
 ogdf/decomposition/SPQRTree.h ogdf/decomposition/Skeleton.h \
 ogdf/decomposition/PertinentGraph.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 src/decomposition/../decomposition/TricComp.h
	mkdir -p $(debug)/src/decomposition
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/decomposition/DynamicSPQRForest.o -c src/decomposition/DynamicSPQRForest.cpp

$(saferelease)/src/decomposition/DynamicSPQRForest.o: src/decomposition/DynamicSPQRForest.cpp \
 ogdf/decomposition/DynamicSPQRForest.h \
 ogdf/decomposition/DynamicBCTree.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/basic/SList.h \
 ogdf/decomposition/SPQRTree.h ogdf/decomposition/Skeleton.h \
 ogdf/decomposition/PertinentGraph.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 src/decomposition/../decomposition/TricComp.h
	mkdir -p $(saferelease)/src/decomposition
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/decomposition/DynamicSPQRForest.o -c src/decomposition/DynamicSPQRForest.cpp

$(release)/src/decomposition/DynamicSPQRForest.o: src/decomposition/DynamicSPQRForest.cpp \
 ogdf/decomposition/DynamicSPQRForest.h \
 ogdf/decomposition/DynamicBCTree.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/basic/SList.h \
 ogdf/decomposition/SPQRTree.h ogdf/decomposition/Skeleton.h \
 ogdf/decomposition/PertinentGraph.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 src/decomposition/../decomposition/TricComp.h
	mkdir -p $(release)/src/decomposition
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/decomposition/DynamicSPQRForest.o -c src/decomposition/DynamicSPQRForest.cpp

$(debug)/src/decomposition/DynamicSPQRTree.o: src/decomposition/DynamicSPQRTree.cpp \
 ogdf/decomposition/DynamicSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/decomposition/PertinentGraph.h ogdf/basic/SList.h \
 ogdf/decomposition/DynamicSPQRForest.h \
 ogdf/decomposition/DynamicBCTree.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/decomposition/DynamicSkeleton.h
	mkdir -p $(debug)/src/decomposition
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/decomposition/DynamicSPQRTree.o -c src/decomposition/DynamicSPQRTree.cpp

$(saferelease)/src/decomposition/DynamicSPQRTree.o: src/decomposition/DynamicSPQRTree.cpp \
 ogdf/decomposition/DynamicSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/decomposition/PertinentGraph.h ogdf/basic/SList.h \
 ogdf/decomposition/DynamicSPQRForest.h \
 ogdf/decomposition/DynamicBCTree.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/decomposition/DynamicSkeleton.h
	mkdir -p $(saferelease)/src/decomposition
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/decomposition/DynamicSPQRTree.o -c src/decomposition/DynamicSPQRTree.cpp

$(release)/src/decomposition/DynamicSPQRTree.o: src/decomposition/DynamicSPQRTree.cpp \
 ogdf/decomposition/DynamicSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/decomposition/PertinentGraph.h ogdf/basic/SList.h \
 ogdf/decomposition/DynamicSPQRForest.h \
 ogdf/decomposition/DynamicBCTree.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/decomposition/DynamicSkeleton.h
	mkdir -p $(release)/src/decomposition
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/decomposition/DynamicSPQRTree.o -c src/decomposition/DynamicSPQRTree.cpp

$(debug)/src/decomposition/NonPlanarCore.o: src/decomposition/NonPlanarCore.cpp \
 ogdf/planarity/NonPlanarCore.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/decomposition/StaticSPQRTree.h \
 ogdf/decomposition/SPQRTree.h ogdf/decomposition/Skeleton.h \
 ogdf/decomposition/PertinentGraph.h ogdf/basic/SList.h \
 ogdf/decomposition/StaticSkeleton.h ogdf/planarity/PlanarModule.h \
 ogdf/basic/Queue.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/FaceArray.h
	mkdir -p $(debug)/src/decomposition
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/decomposition/NonPlanarCore.o -c src/decomposition/NonPlanarCore.cpp

$(saferelease)/src/decomposition/NonPlanarCore.o: src/decomposition/NonPlanarCore.cpp \
 ogdf/planarity/NonPlanarCore.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/decomposition/StaticSPQRTree.h \
 ogdf/decomposition/SPQRTree.h ogdf/decomposition/Skeleton.h \
 ogdf/decomposition/PertinentGraph.h ogdf/basic/SList.h \
 ogdf/decomposition/StaticSkeleton.h ogdf/planarity/PlanarModule.h \
 ogdf/basic/Queue.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/FaceArray.h
	mkdir -p $(saferelease)/src/decomposition
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/decomposition/NonPlanarCore.o -c src/decomposition/NonPlanarCore.cpp

$(release)/src/decomposition/NonPlanarCore.o: src/decomposition/NonPlanarCore.cpp \
 ogdf/planarity/NonPlanarCore.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/decomposition/StaticSPQRTree.h \
 ogdf/decomposition/SPQRTree.h ogdf/decomposition/Skeleton.h \
 ogdf/decomposition/PertinentGraph.h ogdf/basic/SList.h \
 ogdf/decomposition/StaticSkeleton.h ogdf/planarity/PlanarModule.h \
 ogdf/basic/Queue.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/FaceArray.h
	mkdir -p $(release)/src/decomposition
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/decomposition/NonPlanarCore.o -c src/decomposition/NonPlanarCore.cpp

$(debug)/src/decomposition/PlanarSPQRTree.o: src/decomposition/PlanarSPQRTree.cpp \
 ogdf/decomposition/PlanarSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/decomposition/PertinentGraph.h ogdf/basic/SList.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(debug)/src/decomposition
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/decomposition/PlanarSPQRTree.o -c src/decomposition/PlanarSPQRTree.cpp

$(saferelease)/src/decomposition/PlanarSPQRTree.o: src/decomposition/PlanarSPQRTree.cpp \
 ogdf/decomposition/PlanarSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/decomposition/PertinentGraph.h ogdf/basic/SList.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(saferelease)/src/decomposition
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/decomposition/PlanarSPQRTree.o -c src/decomposition/PlanarSPQRTree.cpp

$(release)/src/decomposition/PlanarSPQRTree.o: src/decomposition/PlanarSPQRTree.cpp \
 ogdf/decomposition/PlanarSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/decomposition/PertinentGraph.h ogdf/basic/SList.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(release)/src/decomposition
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/decomposition/PlanarSPQRTree.o -c src/decomposition/PlanarSPQRTree.cpp

$(debug)/src/decomposition/StaticSPQRTree.o: src/decomposition/StaticSPQRTree.cpp \
 ogdf/decomposition/StaticSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/decomposition/PertinentGraph.h ogdf/basic/SList.h \
 ogdf/decomposition/StaticSkeleton.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 src/decomposition/TricComp.h ogdf/basic/BoundedStack.h
	mkdir -p $(debug)/src/decomposition
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/decomposition/StaticSPQRTree.o -c src/decomposition/StaticSPQRTree.cpp

$(saferelease)/src/decomposition/StaticSPQRTree.o: src/decomposition/StaticSPQRTree.cpp \
 ogdf/decomposition/StaticSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/decomposition/PertinentGraph.h ogdf/basic/SList.h \
 ogdf/decomposition/StaticSkeleton.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 src/decomposition/TricComp.h ogdf/basic/BoundedStack.h
	mkdir -p $(saferelease)/src/decomposition
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/decomposition/StaticSPQRTree.o -c src/decomposition/StaticSPQRTree.cpp

$(release)/src/decomposition/StaticSPQRTree.o: src/decomposition/StaticSPQRTree.cpp \
 ogdf/decomposition/StaticSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/decomposition/PertinentGraph.h ogdf/basic/SList.h \
 ogdf/decomposition/StaticSkeleton.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 src/decomposition/TricComp.h ogdf/basic/BoundedStack.h
	mkdir -p $(release)/src/decomposition
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/decomposition/StaticSPQRTree.o -c src/decomposition/StaticSPQRTree.cpp

$(debug)/src/decomposition/TricComp.o: src/decomposition/TricComp.cpp src/decomposition/TricComp.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/BoundedStack.h ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/NodeSet.h
	mkdir -p $(debug)/src/decomposition
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/decomposition/TricComp.o -c src/decomposition/TricComp.cpp

$(saferelease)/src/decomposition/TricComp.o: src/decomposition/TricComp.cpp src/decomposition/TricComp.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/BoundedStack.h ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/NodeSet.h
	mkdir -p $(saferelease)/src/decomposition
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/decomposition/TricComp.o -c src/decomposition/TricComp.cpp

$(release)/src/decomposition/TricComp.o: src/decomposition/TricComp.cpp src/decomposition/TricComp.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/BoundedStack.h ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/NodeSet.h
	mkdir -p $(release)/src/decomposition
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/decomposition/TricComp.o -c src/decomposition/TricComp.cpp

$(debug)/src/energybased/AdjacencyOracle.o: src/energybased/AdjacencyOracle.cpp \
 ogdf/internal/energybased/AdjacencyOracle.h \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/basic/Array2D.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/AdjacencyOracle.o -c src/energybased/AdjacencyOracle.cpp

$(saferelease)/src/energybased/AdjacencyOracle.o: src/energybased/AdjacencyOracle.cpp \
 ogdf/internal/energybased/AdjacencyOracle.h \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/basic/Array2D.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/AdjacencyOracle.o -c src/energybased/AdjacencyOracle.cpp

$(release)/src/energybased/AdjacencyOracle.o: src/energybased/AdjacencyOracle.cpp \
 ogdf/internal/energybased/AdjacencyOracle.h \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/basic/Array2D.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/AdjacencyOracle.o -c src/energybased/AdjacencyOracle.cpp

$(debug)/src/energybased/ArrayGraph.o: src/energybased/ArrayGraph.cpp src/energybased/ArrayGraph.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h src/energybased/FastUtils.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/ArrayGraph.o -c src/energybased/ArrayGraph.cpp

$(saferelease)/src/energybased/ArrayGraph.o: src/energybased/ArrayGraph.cpp src/energybased/ArrayGraph.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h src/energybased/FastUtils.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/ArrayGraph.o -c src/energybased/ArrayGraph.cpp

$(release)/src/energybased/ArrayGraph.o: src/energybased/ArrayGraph.cpp src/energybased/ArrayGraph.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h src/energybased/FastUtils.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/ArrayGraph.o -c src/energybased/ArrayGraph.cpp

$(debug)/src/energybased/Attraction.o: src/energybased/Attraction.cpp \
 ogdf/internal/energybased/Attraction.h \
 ogdf/internal/energybased/NodePairEnergy.h \
 ogdf/internal/energybased/AdjacencyOracle.h \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/basic/Array2D.h ogdf/internal/energybased/IntersectionRectangle.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/Attraction.o -c src/energybased/Attraction.cpp

$(saferelease)/src/energybased/Attraction.o: src/energybased/Attraction.cpp \
 ogdf/internal/energybased/Attraction.h \
 ogdf/internal/energybased/NodePairEnergy.h \
 ogdf/internal/energybased/AdjacencyOracle.h \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/basic/Array2D.h ogdf/internal/energybased/IntersectionRectangle.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/Attraction.o -c src/energybased/Attraction.cpp

$(release)/src/energybased/Attraction.o: src/energybased/Attraction.cpp \
 ogdf/internal/energybased/Attraction.h \
 ogdf/internal/energybased/NodePairEnergy.h \
 ogdf/internal/energybased/AdjacencyOracle.h \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/basic/Array2D.h ogdf/internal/energybased/IntersectionRectangle.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/Attraction.o -c src/energybased/Attraction.cpp

$(debug)/src/energybased/CoinTutteLayout.o: src/energybased/CoinTutteLayout.cpp
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/CoinTutteLayout.o -c src/energybased/CoinTutteLayout.cpp

$(saferelease)/src/energybased/CoinTutteLayout.o: src/energybased/CoinTutteLayout.cpp
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/CoinTutteLayout.o -c src/energybased/CoinTutteLayout.cpp

$(release)/src/energybased/CoinTutteLayout.o: src/energybased/CoinTutteLayout.cpp
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/CoinTutteLayout.o -c src/energybased/CoinTutteLayout.cpp

$(debug)/src/energybased/DavidsonHarel.o: src/energybased/DavidsonHarel.cpp \
 ogdf/energybased/DavidsonHarel.h \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/DavidsonHarel.o -c src/energybased/DavidsonHarel.cpp

$(saferelease)/src/energybased/DavidsonHarel.o: src/energybased/DavidsonHarel.cpp \
 ogdf/energybased/DavidsonHarel.h \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/DavidsonHarel.o -c src/energybased/DavidsonHarel.cpp

$(release)/src/energybased/DavidsonHarel.o: src/energybased/DavidsonHarel.cpp \
 ogdf/energybased/DavidsonHarel.h \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/DavidsonHarel.o -c src/energybased/DavidsonHarel.cpp

$(debug)/src/energybased/DavidsonHarelLayout.o: src/energybased/DavidsonHarelLayout.cpp \
 ogdf/energybased/DavidsonHarelLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/energybased/DavidsonHarel.h \
 ogdf/internal/energybased/EnergyFunction.h \
 ogdf/internal/energybased/Repulsion.h \
 ogdf/internal/energybased/NodePairEnergy.h \
 ogdf/internal/energybased/AdjacencyOracle.h ogdf/basic/Array2D.h \
 ogdf/internal/energybased/IntersectionRectangle.h \
 ogdf/internal/energybased/Attraction.h \
 ogdf/internal/energybased/Overlap.h \
 ogdf/internal/energybased/Planarity.h \
 ogdf/internal/energybased/PlanarityGrid.h \
 ogdf/internal/energybased/UniformGrid.h ogdf/basic/SList.h \
 ogdf/basic/HashArray2D.h ogdf/basic/HashArray.h ogdf/basic/tuples.h \
 ogdf/basic/HashIterator2D.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/DavidsonHarelLayout.o -c src/energybased/DavidsonHarelLayout.cpp

$(saferelease)/src/energybased/DavidsonHarelLayout.o: src/energybased/DavidsonHarelLayout.cpp \
 ogdf/energybased/DavidsonHarelLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/energybased/DavidsonHarel.h \
 ogdf/internal/energybased/EnergyFunction.h \
 ogdf/internal/energybased/Repulsion.h \
 ogdf/internal/energybased/NodePairEnergy.h \
 ogdf/internal/energybased/AdjacencyOracle.h ogdf/basic/Array2D.h \
 ogdf/internal/energybased/IntersectionRectangle.h \
 ogdf/internal/energybased/Attraction.h \
 ogdf/internal/energybased/Overlap.h \
 ogdf/internal/energybased/Planarity.h \
 ogdf/internal/energybased/PlanarityGrid.h \
 ogdf/internal/energybased/UniformGrid.h ogdf/basic/SList.h \
 ogdf/basic/HashArray2D.h ogdf/basic/HashArray.h ogdf/basic/tuples.h \
 ogdf/basic/HashIterator2D.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/DavidsonHarelLayout.o -c src/energybased/DavidsonHarelLayout.cpp

$(release)/src/energybased/DavidsonHarelLayout.o: src/energybased/DavidsonHarelLayout.cpp \
 ogdf/energybased/DavidsonHarelLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/energybased/DavidsonHarel.h \
 ogdf/internal/energybased/EnergyFunction.h \
 ogdf/internal/energybased/Repulsion.h \
 ogdf/internal/energybased/NodePairEnergy.h \
 ogdf/internal/energybased/AdjacencyOracle.h ogdf/basic/Array2D.h \
 ogdf/internal/energybased/IntersectionRectangle.h \
 ogdf/internal/energybased/Attraction.h \
 ogdf/internal/energybased/Overlap.h \
 ogdf/internal/energybased/Planarity.h \
 ogdf/internal/energybased/PlanarityGrid.h \
 ogdf/internal/energybased/UniformGrid.h ogdf/basic/SList.h \
 ogdf/basic/HashArray2D.h ogdf/basic/HashArray.h ogdf/basic/tuples.h \
 ogdf/basic/HashIterator2D.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/DavidsonHarelLayout.o -c src/energybased/DavidsonHarelLayout.cpp

$(debug)/src/energybased/EdgeAttributes.o: src/energybased/EdgeAttributes.cpp \
 ogdf/internal/energybased/EdgeAttributes.h ogdf/basic/geometry.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Hashing.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/EdgeAttributes.o -c src/energybased/EdgeAttributes.cpp

$(saferelease)/src/energybased/EdgeAttributes.o: src/energybased/EdgeAttributes.cpp \
 ogdf/internal/energybased/EdgeAttributes.h ogdf/basic/geometry.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Hashing.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/EdgeAttributes.o -c src/energybased/EdgeAttributes.cpp

$(release)/src/energybased/EdgeAttributes.o: src/energybased/EdgeAttributes.cpp \
 ogdf/internal/energybased/EdgeAttributes.h ogdf/basic/geometry.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Hashing.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/EdgeAttributes.o -c src/energybased/EdgeAttributes.cpp

$(debug)/src/energybased/EnergyFunction.o: src/energybased/EnergyFunction.cpp \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/EnergyFunction.o -c src/energybased/EnergyFunction.cpp

$(saferelease)/src/energybased/EnergyFunction.o: src/energybased/EnergyFunction.cpp \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/EnergyFunction.o -c src/energybased/EnergyFunction.cpp

$(release)/src/energybased/EnergyFunction.o: src/energybased/EnergyFunction.cpp \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/EnergyFunction.o -c src/energybased/EnergyFunction.cpp

$(debug)/src/energybased/FMEKernel.o: src/energybased/FMEKernel.cpp src/energybased/FMEKernel.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h src/energybased/FastUtils.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 src/energybased/ArrayGraph.h src/energybased/FMEThread.h \
 ogdf/basic/Thread.h ogdf/basic/Barrier.h src/energybased/ComplexDouble.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/FMEKernel.o -c src/energybased/FMEKernel.cpp

$(saferelease)/src/energybased/FMEKernel.o: src/energybased/FMEKernel.cpp src/energybased/FMEKernel.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h src/energybased/FastUtils.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 src/energybased/ArrayGraph.h src/energybased/FMEThread.h \
 ogdf/basic/Thread.h ogdf/basic/Barrier.h src/energybased/ComplexDouble.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/FMEKernel.o -c src/energybased/FMEKernel.cpp

$(release)/src/energybased/FMEKernel.o: src/energybased/FMEKernel.cpp src/energybased/FMEKernel.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h src/energybased/FastUtils.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 src/energybased/ArrayGraph.h src/energybased/FMEThread.h \
 ogdf/basic/Thread.h ogdf/basic/Barrier.h src/energybased/ComplexDouble.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/FMEKernel.o -c src/energybased/FMEKernel.cpp

$(debug)/src/energybased/FMEMultipoleKernel.o: src/energybased/FMEMultipoleKernel.cpp \
 src/energybased/FMEMultipoleKernel.h src/energybased/FMEKernel.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h src/energybased/FastUtils.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 src/energybased/ArrayGraph.h src/energybased/FMEThread.h \
 ogdf/basic/Thread.h ogdf/basic/Barrier.h src/energybased/FMEFunc.h \
 src/energybased/LinearQuadtree.h src/energybased/FMEFunctional.h \
 src/energybased/LinearQuadtreeExpansion.h \
 src/energybased/LinearQuadtreeBuilder.h src/energybased/WSPD.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/FMEMultipoleKernel.o -c src/energybased/FMEMultipoleKernel.cpp

$(saferelease)/src/energybased/FMEMultipoleKernel.o: src/energybased/FMEMultipoleKernel.cpp \
 src/energybased/FMEMultipoleKernel.h src/energybased/FMEKernel.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h src/energybased/FastUtils.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 src/energybased/ArrayGraph.h src/energybased/FMEThread.h \
 ogdf/basic/Thread.h ogdf/basic/Barrier.h src/energybased/FMEFunc.h \
 src/energybased/LinearQuadtree.h src/energybased/FMEFunctional.h \
 src/energybased/LinearQuadtreeExpansion.h \
 src/energybased/LinearQuadtreeBuilder.h src/energybased/WSPD.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/FMEMultipoleKernel.o -c src/energybased/FMEMultipoleKernel.cpp

$(release)/src/energybased/FMEMultipoleKernel.o: src/energybased/FMEMultipoleKernel.cpp \
 src/energybased/FMEMultipoleKernel.h src/energybased/FMEKernel.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h src/energybased/FastUtils.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 src/energybased/ArrayGraph.h src/energybased/FMEThread.h \
 ogdf/basic/Thread.h ogdf/basic/Barrier.h src/energybased/FMEFunc.h \
 src/energybased/LinearQuadtree.h src/energybased/FMEFunctional.h \
 src/energybased/LinearQuadtreeExpansion.h \
 src/energybased/LinearQuadtreeBuilder.h src/energybased/WSPD.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/FMEMultipoleKernel.o -c src/energybased/FMEMultipoleKernel.cpp

$(debug)/src/energybased/FMEThread.o: src/energybased/FMEThread.cpp src/energybased/FMEThread.h \
 ogdf/basic/Thread.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Barrier.h src/energybased/FastUtils.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/FMEThread.o -c src/energybased/FMEThread.cpp

$(saferelease)/src/energybased/FMEThread.o: src/energybased/FMEThread.cpp src/energybased/FMEThread.h \
 ogdf/basic/Thread.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Barrier.h src/energybased/FastUtils.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/FMEThread.o -c src/energybased/FMEThread.cpp

$(release)/src/energybased/FMEThread.o: src/energybased/FMEThread.cpp src/energybased/FMEThread.h \
 ogdf/basic/Thread.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Barrier.h src/energybased/FastUtils.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/FMEThread.o -c src/energybased/FMEThread.cpp

$(debug)/src/energybased/FMMMLayout.o: src/energybased/FMMMLayout.cpp \
 ogdf/energybased/FMMMLayout.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/basic/Hashing.h ogdf/cluster/ClusterArray.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/basic/GraphObserver.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/geometry.h ogdf/module/LayoutModule.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/internal/energybased/FruchtermanReingold.h \
 ogdf/internal/energybased/NodeAttributes.h \
 ogdf/internal/energybased/EdgeAttributes.h \
 ogdf/internal/energybased/NMM.h ogdf/basic/Array2D.h \
 ogdf/internal/energybased/QuadTreeNM.h \
 ogdf/internal/energybased/QuadTreeNodeNM.h \
 ogdf/internal/energybased/ParticleInfo.h \
 ogdf/internal/energybased/ParticleInfo.h src/energybased/mathExtension.h \
 src/energybased/numexcept.h src/energybased/MAARPacking.h \
 src/energybased/PackingRowInfo.h src/energybased/Rectangle.h \
 src/energybased/Set.h src/energybased/PQueue.h \
 src/energybased/Multilevel.h src/energybased/Edge.h \
 ogdf/basic/simple_graph_alg.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/FMMMLayout.o -c src/energybased/FMMMLayout.cpp

$(saferelease)/src/energybased/FMMMLayout.o: src/energybased/FMMMLayout.cpp \
 ogdf/energybased/FMMMLayout.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/basic/Hashing.h ogdf/cluster/ClusterArray.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/basic/GraphObserver.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/geometry.h ogdf/module/LayoutModule.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/internal/energybased/FruchtermanReingold.h \
 ogdf/internal/energybased/NodeAttributes.h \
 ogdf/internal/energybased/EdgeAttributes.h \
 ogdf/internal/energybased/NMM.h ogdf/basic/Array2D.h \
 ogdf/internal/energybased/QuadTreeNM.h \
 ogdf/internal/energybased/QuadTreeNodeNM.h \
 ogdf/internal/energybased/ParticleInfo.h \
 ogdf/internal/energybased/ParticleInfo.h src/energybased/mathExtension.h \
 src/energybased/numexcept.h src/energybased/MAARPacking.h \
 src/energybased/PackingRowInfo.h src/energybased/Rectangle.h \
 src/energybased/Set.h src/energybased/PQueue.h \
 src/energybased/Multilevel.h src/energybased/Edge.h \
 ogdf/basic/simple_graph_alg.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/FMMMLayout.o -c src/energybased/FMMMLayout.cpp

$(release)/src/energybased/FMMMLayout.o: src/energybased/FMMMLayout.cpp \
 ogdf/energybased/FMMMLayout.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/basic/Hashing.h ogdf/cluster/ClusterArray.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/basic/GraphObserver.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/geometry.h ogdf/module/LayoutModule.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/internal/energybased/FruchtermanReingold.h \
 ogdf/internal/energybased/NodeAttributes.h \
 ogdf/internal/energybased/EdgeAttributes.h \
 ogdf/internal/energybased/NMM.h ogdf/basic/Array2D.h \
 ogdf/internal/energybased/QuadTreeNM.h \
 ogdf/internal/energybased/QuadTreeNodeNM.h \
 ogdf/internal/energybased/ParticleInfo.h \
 ogdf/internal/energybased/ParticleInfo.h src/energybased/mathExtension.h \
 src/energybased/numexcept.h src/energybased/MAARPacking.h \
 src/energybased/PackingRowInfo.h src/energybased/Rectangle.h \
 src/energybased/Set.h src/energybased/PQueue.h \
 src/energybased/Multilevel.h src/energybased/Edge.h \
 ogdf/basic/simple_graph_alg.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/FMMMLayout.o -c src/energybased/FMMMLayout.cpp

$(debug)/src/energybased/FastMultipoleEmbedder.o: src/energybased/FastMultipoleEmbedder.cpp \
 ogdf/energybased/FastMultipoleEmbedder.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h src/energybased/FastUtils.h \
 src/energybased/ArrayGraph.h src/energybased/LinearQuadtree.h \
 src/energybased/FMEFunctional.h \
 src/energybased/LinearQuadtreeExpansion.h src/energybased/FMEThread.h \
 ogdf/basic/Thread.h ogdf/basic/Barrier.h \
 src/energybased/GalaxyMultilevel.h ogdf/basic/tuples.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h \
 src/energybased/FMEMultipoleKernel.h src/energybased/FMEKernel.h \
 src/energybased/FMEFunc.h src/energybased/LinearQuadtreeBuilder.h \
 src/energybased/WSPD.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/FastMultipoleEmbedder.o -c src/energybased/FastMultipoleEmbedder.cpp

$(saferelease)/src/energybased/FastMultipoleEmbedder.o: src/energybased/FastMultipoleEmbedder.cpp \
 ogdf/energybased/FastMultipoleEmbedder.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h src/energybased/FastUtils.h \
 src/energybased/ArrayGraph.h src/energybased/LinearQuadtree.h \
 src/energybased/FMEFunctional.h \
 src/energybased/LinearQuadtreeExpansion.h src/energybased/FMEThread.h \
 ogdf/basic/Thread.h ogdf/basic/Barrier.h \
 src/energybased/GalaxyMultilevel.h ogdf/basic/tuples.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h \
 src/energybased/FMEMultipoleKernel.h src/energybased/FMEKernel.h \
 src/energybased/FMEFunc.h src/energybased/LinearQuadtreeBuilder.h \
 src/energybased/WSPD.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/FastMultipoleEmbedder.o -c src/energybased/FastMultipoleEmbedder.cpp

$(release)/src/energybased/FastMultipoleEmbedder.o: src/energybased/FastMultipoleEmbedder.cpp \
 ogdf/energybased/FastMultipoleEmbedder.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h src/energybased/FastUtils.h \
 src/energybased/ArrayGraph.h src/energybased/LinearQuadtree.h \
 src/energybased/FMEFunctional.h \
 src/energybased/LinearQuadtreeExpansion.h src/energybased/FMEThread.h \
 ogdf/basic/Thread.h ogdf/basic/Barrier.h \
 src/energybased/GalaxyMultilevel.h ogdf/basic/tuples.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h \
 src/energybased/FMEMultipoleKernel.h src/energybased/FMEKernel.h \
 src/energybased/FMEFunc.h src/energybased/LinearQuadtreeBuilder.h \
 src/energybased/WSPD.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/FastMultipoleEmbedder.o -c src/energybased/FastMultipoleEmbedder.cpp

$(debug)/src/energybased/FastUtils.o: src/energybased/FastUtils.cpp src/energybased/FastUtils.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/FastUtils.o -c src/energybased/FastUtils.cpp

$(saferelease)/src/energybased/FastUtils.o: src/energybased/FastUtils.cpp src/energybased/FastUtils.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/FastUtils.o -c src/energybased/FastUtils.cpp

$(release)/src/energybased/FastUtils.o: src/energybased/FastUtils.cpp src/energybased/FastUtils.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/FastUtils.o -c src/energybased/FastUtils.cpp

$(debug)/src/energybased/FruchtermanReingold.o: src/energybased/FruchtermanReingold.cpp \
 ogdf/internal/energybased/FruchtermanReingold.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/basic/geometry.h ogdf/basic/Hashing.h \
 ogdf/internal/energybased/NodeAttributes.h \
 ogdf/internal/energybased/EdgeAttributes.h \
 src/energybased/mathExtension.h src/energybased/numexcept.h \
 ogdf/basic/Array2D.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/FruchtermanReingold.o -c src/energybased/FruchtermanReingold.cpp

$(saferelease)/src/energybased/FruchtermanReingold.o: src/energybased/FruchtermanReingold.cpp \
 ogdf/internal/energybased/FruchtermanReingold.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/basic/geometry.h ogdf/basic/Hashing.h \
 ogdf/internal/energybased/NodeAttributes.h \
 ogdf/internal/energybased/EdgeAttributes.h \
 src/energybased/mathExtension.h src/energybased/numexcept.h \
 ogdf/basic/Array2D.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/FruchtermanReingold.o -c src/energybased/FruchtermanReingold.cpp

$(release)/src/energybased/FruchtermanReingold.o: src/energybased/FruchtermanReingold.cpp \
 ogdf/internal/energybased/FruchtermanReingold.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/basic/geometry.h ogdf/basic/Hashing.h \
 ogdf/internal/energybased/NodeAttributes.h \
 ogdf/internal/energybased/EdgeAttributes.h \
 src/energybased/mathExtension.h src/energybased/numexcept.h \
 ogdf/basic/Array2D.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/FruchtermanReingold.o -c src/energybased/FruchtermanReingold.cpp

$(debug)/src/energybased/GEMLayout.o: src/energybased/GEMLayout.cpp ogdf/energybased/GEMLayout.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h \
 ogdf/basic/GraphCopyAttributes.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/packing/TileToRowsCCPacker.h ogdf/module/CCLayoutPackModule.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/GEMLayout.o -c src/energybased/GEMLayout.cpp

$(saferelease)/src/energybased/GEMLayout.o: src/energybased/GEMLayout.cpp ogdf/energybased/GEMLayout.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h \
 ogdf/basic/GraphCopyAttributes.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/packing/TileToRowsCCPacker.h ogdf/module/CCLayoutPackModule.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/GEMLayout.o -c src/energybased/GEMLayout.cpp

$(release)/src/energybased/GEMLayout.o: src/energybased/GEMLayout.cpp ogdf/energybased/GEMLayout.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h \
 ogdf/basic/GraphCopyAttributes.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/packing/TileToRowsCCPacker.h ogdf/module/CCLayoutPackModule.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/GEMLayout.o -c src/energybased/GEMLayout.cpp

$(debug)/src/energybased/GalaxyMultilevel.o: src/energybased/GalaxyMultilevel.cpp \
 src/energybased/GalaxyMultilevel.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/basic/tuples.h ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h \
 src/energybased/ArrayGraph.h src/energybased/FastUtils.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/GalaxyMultilevel.o -c src/energybased/GalaxyMultilevel.cpp

$(saferelease)/src/energybased/GalaxyMultilevel.o: src/energybased/GalaxyMultilevel.cpp \
 src/energybased/GalaxyMultilevel.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/basic/tuples.h ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h \
 src/energybased/ArrayGraph.h src/energybased/FastUtils.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/GalaxyMultilevel.o -c src/energybased/GalaxyMultilevel.cpp

$(release)/src/energybased/GalaxyMultilevel.o: src/energybased/GalaxyMultilevel.cpp \
 src/energybased/GalaxyMultilevel.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/basic/tuples.h ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h \
 src/energybased/ArrayGraph.h src/energybased/FastUtils.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/GalaxyMultilevel.o -c src/energybased/GalaxyMultilevel.cpp

$(debug)/src/energybased/IntersectionRectangle.o: src/energybased/IntersectionRectangle.cpp \
 ogdf/internal/energybased/IntersectionRectangle.h ogdf/basic/geometry.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Hashing.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/IntersectionRectangle.o -c src/energybased/IntersectionRectangle.cpp

$(saferelease)/src/energybased/IntersectionRectangle.o: src/energybased/IntersectionRectangle.cpp \
 ogdf/internal/energybased/IntersectionRectangle.h ogdf/basic/geometry.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Hashing.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/IntersectionRectangle.o -c src/energybased/IntersectionRectangle.cpp

$(release)/src/energybased/IntersectionRectangle.o: src/energybased/IntersectionRectangle.cpp \
 ogdf/internal/energybased/IntersectionRectangle.h ogdf/basic/geometry.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Hashing.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/IntersectionRectangle.o -c src/energybased/IntersectionRectangle.cpp

$(debug)/src/energybased/LinearQuadtree.o: src/energybased/LinearQuadtree.cpp \
 src/energybased/LinearQuadtree.h src/energybased/FastUtils.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 src/energybased/FMEFunctional.h src/energybased/WSPD.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/LinearQuadtree.o -c src/energybased/LinearQuadtree.cpp

$(saferelease)/src/energybased/LinearQuadtree.o: src/energybased/LinearQuadtree.cpp \
 src/energybased/LinearQuadtree.h src/energybased/FastUtils.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 src/energybased/FMEFunctional.h src/energybased/WSPD.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/LinearQuadtree.o -c src/energybased/LinearQuadtree.cpp

$(release)/src/energybased/LinearQuadtree.o: src/energybased/LinearQuadtree.cpp \
 src/energybased/LinearQuadtree.h src/energybased/FastUtils.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 src/energybased/FMEFunctional.h src/energybased/WSPD.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/LinearQuadtree.o -c src/energybased/LinearQuadtree.cpp

$(debug)/src/energybased/LinearQuadtreeBuilder.o: src/energybased/LinearQuadtreeBuilder.cpp \
 src/energybased/LinearQuadtree.h src/energybased/FastUtils.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 src/energybased/FMEFunctional.h src/energybased/LinearQuadtreeBuilder.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/LinearQuadtreeBuilder.o -c src/energybased/LinearQuadtreeBuilder.cpp

$(saferelease)/src/energybased/LinearQuadtreeBuilder.o: src/energybased/LinearQuadtreeBuilder.cpp \
 src/energybased/LinearQuadtree.h src/energybased/FastUtils.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 src/energybased/FMEFunctional.h src/energybased/LinearQuadtreeBuilder.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/LinearQuadtreeBuilder.o -c src/energybased/LinearQuadtreeBuilder.cpp

$(release)/src/energybased/LinearQuadtreeBuilder.o: src/energybased/LinearQuadtreeBuilder.cpp \
 src/energybased/LinearQuadtree.h src/energybased/FastUtils.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 src/energybased/FMEFunctional.h src/energybased/LinearQuadtreeBuilder.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/LinearQuadtreeBuilder.o -c src/energybased/LinearQuadtreeBuilder.cpp

$(debug)/src/energybased/LinearQuadtreeExpansion.o: src/energybased/LinearQuadtreeExpansion.cpp \
 src/energybased/LinearQuadtreeExpansion.h \
 src/energybased/LinearQuadtree.h src/energybased/FastUtils.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 src/energybased/FMEFunctional.h src/energybased/ComplexDouble.h \
 src/energybased/WSPD.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/LinearQuadtreeExpansion.o -c src/energybased/LinearQuadtreeExpansion.cpp

$(saferelease)/src/energybased/LinearQuadtreeExpansion.o: src/energybased/LinearQuadtreeExpansion.cpp \
 src/energybased/LinearQuadtreeExpansion.h \
 src/energybased/LinearQuadtree.h src/energybased/FastUtils.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 src/energybased/FMEFunctional.h src/energybased/ComplexDouble.h \
 src/energybased/WSPD.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/LinearQuadtreeExpansion.o -c src/energybased/LinearQuadtreeExpansion.cpp

$(release)/src/energybased/LinearQuadtreeExpansion.o: src/energybased/LinearQuadtreeExpansion.cpp \
 src/energybased/LinearQuadtreeExpansion.h \
 src/energybased/LinearQuadtree.h src/energybased/FastUtils.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 src/energybased/FMEFunctional.h src/energybased/ComplexDouble.h \
 src/energybased/WSPD.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/LinearQuadtreeExpansion.o -c src/energybased/LinearQuadtreeExpansion.cpp

$(debug)/src/energybased/MAARPacking.o: src/energybased/MAARPacking.cpp \
 src/energybased/MAARPacking.h src/energybased/PackingRowInfo.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h src/energybased/Rectangle.h ogdf/basic/geometry.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/Hashing.h src/energybased/Set.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/internal/energybased/NodeAttributes.h \
 src/energybased/PQueue.h src/energybased/mathExtension.h \
 src/energybased/numexcept.h ogdf/energybased/FMMMLayout.h \
 ogdf/cluster/ClusterGraphAttributes.h ogdf/basic/HashArray.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h ogdf/basic/GraphObserver.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/module/LayoutModule.h ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/internal/energybased/FruchtermanReingold.h \
 ogdf/internal/energybased/EdgeAttributes.h \
 ogdf/internal/energybased/NMM.h ogdf/basic/Array2D.h \
 ogdf/internal/energybased/QuadTreeNM.h \
 ogdf/internal/energybased/QuadTreeNodeNM.h \
 ogdf/internal/energybased/ParticleInfo.h \
 ogdf/internal/energybased/ParticleInfo.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/MAARPacking.o -c src/energybased/MAARPacking.cpp

$(saferelease)/src/energybased/MAARPacking.o: src/energybased/MAARPacking.cpp \
 src/energybased/MAARPacking.h src/energybased/PackingRowInfo.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h src/energybased/Rectangle.h ogdf/basic/geometry.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/Hashing.h src/energybased/Set.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/internal/energybased/NodeAttributes.h \
 src/energybased/PQueue.h src/energybased/mathExtension.h \
 src/energybased/numexcept.h ogdf/energybased/FMMMLayout.h \
 ogdf/cluster/ClusterGraphAttributes.h ogdf/basic/HashArray.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h ogdf/basic/GraphObserver.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/module/LayoutModule.h ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/internal/energybased/FruchtermanReingold.h \
 ogdf/internal/energybased/EdgeAttributes.h \
 ogdf/internal/energybased/NMM.h ogdf/basic/Array2D.h \
 ogdf/internal/energybased/QuadTreeNM.h \
 ogdf/internal/energybased/QuadTreeNodeNM.h \
 ogdf/internal/energybased/ParticleInfo.h \
 ogdf/internal/energybased/ParticleInfo.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/MAARPacking.o -c src/energybased/MAARPacking.cpp

$(release)/src/energybased/MAARPacking.o: src/energybased/MAARPacking.cpp \
 src/energybased/MAARPacking.h src/energybased/PackingRowInfo.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h src/energybased/Rectangle.h ogdf/basic/geometry.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/Hashing.h src/energybased/Set.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/internal/energybased/NodeAttributes.h \
 src/energybased/PQueue.h src/energybased/mathExtension.h \
 src/energybased/numexcept.h ogdf/energybased/FMMMLayout.h \
 ogdf/cluster/ClusterGraphAttributes.h ogdf/basic/HashArray.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h ogdf/basic/GraphObserver.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/module/LayoutModule.h ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/internal/energybased/FruchtermanReingold.h \
 ogdf/internal/energybased/EdgeAttributes.h \
 ogdf/internal/energybased/NMM.h ogdf/basic/Array2D.h \
 ogdf/internal/energybased/QuadTreeNM.h \
 ogdf/internal/energybased/QuadTreeNodeNM.h \
 ogdf/internal/energybased/ParticleInfo.h \
 ogdf/internal/energybased/ParticleInfo.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/MAARPacking.o -c src/energybased/MAARPacking.cpp

$(debug)/src/energybased/Multilevel.o: src/energybased/Multilevel.cpp src/energybased/Multilevel.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h src/energybased/Edge.h \
 ogdf/internal/energybased/NodeAttributes.h ogdf/basic/geometry.h \
 ogdf/basic/Hashing.h ogdf/internal/energybased/EdgeAttributes.h \
 src/energybased/Set.h src/energybased/Node.h \
 src/energybased/mathExtension.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/SList.h ogdf/energybased/FMMMLayout.h \
 ogdf/cluster/ClusterGraphAttributes.h ogdf/basic/HashArray.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/Stack.h ogdf/basic/GraphObserver.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/module/LayoutModule.h ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/internal/energybased/FruchtermanReingold.h \
 ogdf/internal/energybased/NMM.h ogdf/basic/Array2D.h \
 ogdf/internal/energybased/QuadTreeNM.h \
 ogdf/internal/energybased/QuadTreeNodeNM.h \
 ogdf/internal/energybased/ParticleInfo.h \
 ogdf/internal/energybased/ParticleInfo.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/Multilevel.o -c src/energybased/Multilevel.cpp

$(saferelease)/src/energybased/Multilevel.o: src/energybased/Multilevel.cpp src/energybased/Multilevel.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h src/energybased/Edge.h \
 ogdf/internal/energybased/NodeAttributes.h ogdf/basic/geometry.h \
 ogdf/basic/Hashing.h ogdf/internal/energybased/EdgeAttributes.h \
 src/energybased/Set.h src/energybased/Node.h \
 src/energybased/mathExtension.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/SList.h ogdf/energybased/FMMMLayout.h \
 ogdf/cluster/ClusterGraphAttributes.h ogdf/basic/HashArray.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/Stack.h ogdf/basic/GraphObserver.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/module/LayoutModule.h ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/internal/energybased/FruchtermanReingold.h \
 ogdf/internal/energybased/NMM.h ogdf/basic/Array2D.h \
 ogdf/internal/energybased/QuadTreeNM.h \
 ogdf/internal/energybased/QuadTreeNodeNM.h \
 ogdf/internal/energybased/ParticleInfo.h \
 ogdf/internal/energybased/ParticleInfo.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/Multilevel.o -c src/energybased/Multilevel.cpp

$(release)/src/energybased/Multilevel.o: src/energybased/Multilevel.cpp src/energybased/Multilevel.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h src/energybased/Edge.h \
 ogdf/internal/energybased/NodeAttributes.h ogdf/basic/geometry.h \
 ogdf/basic/Hashing.h ogdf/internal/energybased/EdgeAttributes.h \
 src/energybased/Set.h src/energybased/Node.h \
 src/energybased/mathExtension.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/SList.h ogdf/energybased/FMMMLayout.h \
 ogdf/cluster/ClusterGraphAttributes.h ogdf/basic/HashArray.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/Stack.h ogdf/basic/GraphObserver.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/module/LayoutModule.h ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/internal/energybased/FruchtermanReingold.h \
 ogdf/internal/energybased/NMM.h ogdf/basic/Array2D.h \
 ogdf/internal/energybased/QuadTreeNM.h \
 ogdf/internal/energybased/QuadTreeNodeNM.h \
 ogdf/internal/energybased/ParticleInfo.h \
 ogdf/internal/energybased/ParticleInfo.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/Multilevel.o -c src/energybased/Multilevel.cpp

$(debug)/src/energybased/MultilevelGraph.o: src/energybased/MultilevelGraph.cpp \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/MultilevelGraph.o -c src/energybased/MultilevelGraph.cpp

$(saferelease)/src/energybased/MultilevelGraph.o: src/energybased/MultilevelGraph.cpp \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/MultilevelGraph.o -c src/energybased/MultilevelGraph.cpp

$(release)/src/energybased/MultilevelGraph.o: src/energybased/MultilevelGraph.cpp \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/MultilevelGraph.o -c src/energybased/MultilevelGraph.cpp

$(debug)/src/energybased/NMM.o: src/energybased/NMM.cpp ogdf/internal/energybased/NMM.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Array2D.h ogdf/basic/geometry.h \
 ogdf/basic/Hashing.h ogdf/internal/energybased/NodeAttributes.h \
 ogdf/internal/energybased/EdgeAttributes.h \
 ogdf/internal/energybased/QuadTreeNM.h \
 ogdf/internal/energybased/QuadTreeNodeNM.h \
 ogdf/internal/energybased/ParticleInfo.h \
 ogdf/internal/energybased/ParticleInfo.h \
 ogdf/internal/energybased/FruchtermanReingold.h \
 src/energybased/mathExtension.h src/energybased/numexcept.h \
 ogdf/energybased/FMMMLayout.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/cluster/ClusterArray.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/basic/GraphObserver.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/module/LayoutModule.h \
 ogdf/internal/energybased/MultilevelGraph.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/NMM.o -c src/energybased/NMM.cpp

$(saferelease)/src/energybased/NMM.o: src/energybased/NMM.cpp ogdf/internal/energybased/NMM.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Array2D.h ogdf/basic/geometry.h \
 ogdf/basic/Hashing.h ogdf/internal/energybased/NodeAttributes.h \
 ogdf/internal/energybased/EdgeAttributes.h \
 ogdf/internal/energybased/QuadTreeNM.h \
 ogdf/internal/energybased/QuadTreeNodeNM.h \
 ogdf/internal/energybased/ParticleInfo.h \
 ogdf/internal/energybased/ParticleInfo.h \
 ogdf/internal/energybased/FruchtermanReingold.h \
 src/energybased/mathExtension.h src/energybased/numexcept.h \
 ogdf/energybased/FMMMLayout.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/cluster/ClusterArray.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/basic/GraphObserver.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/module/LayoutModule.h \
 ogdf/internal/energybased/MultilevelGraph.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/NMM.o -c src/energybased/NMM.cpp

$(release)/src/energybased/NMM.o: src/energybased/NMM.cpp ogdf/internal/energybased/NMM.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Array2D.h ogdf/basic/geometry.h \
 ogdf/basic/Hashing.h ogdf/internal/energybased/NodeAttributes.h \
 ogdf/internal/energybased/EdgeAttributes.h \
 ogdf/internal/energybased/QuadTreeNM.h \
 ogdf/internal/energybased/QuadTreeNodeNM.h \
 ogdf/internal/energybased/ParticleInfo.h \
 ogdf/internal/energybased/ParticleInfo.h \
 ogdf/internal/energybased/FruchtermanReingold.h \
 src/energybased/mathExtension.h src/energybased/numexcept.h \
 ogdf/energybased/FMMMLayout.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/cluster/ClusterArray.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/basic/GraphObserver.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/module/LayoutModule.h \
 ogdf/internal/energybased/MultilevelGraph.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/NMM.o -c src/energybased/NMM.cpp

$(debug)/src/energybased/NodeAttributes.o: src/energybased/NodeAttributes.cpp \
 ogdf/internal/energybased/NodeAttributes.h ogdf/basic/geometry.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Hashing.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/NodeAttributes.o -c src/energybased/NodeAttributes.cpp

$(saferelease)/src/energybased/NodeAttributes.o: src/energybased/NodeAttributes.cpp \
 ogdf/internal/energybased/NodeAttributes.h ogdf/basic/geometry.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Hashing.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/NodeAttributes.o -c src/energybased/NodeAttributes.cpp

$(release)/src/energybased/NodeAttributes.o: src/energybased/NodeAttributes.cpp \
 ogdf/internal/energybased/NodeAttributes.h ogdf/basic/geometry.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Hashing.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/NodeAttributes.o -c src/energybased/NodeAttributes.cpp

$(debug)/src/energybased/NodePairEnergy.o: src/energybased/NodePairEnergy.cpp \
 ogdf/internal/energybased/NodePairEnergy.h \
 ogdf/internal/energybased/AdjacencyOracle.h \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/basic/Array2D.h ogdf/internal/energybased/IntersectionRectangle.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/NodePairEnergy.o -c src/energybased/NodePairEnergy.cpp

$(saferelease)/src/energybased/NodePairEnergy.o: src/energybased/NodePairEnergy.cpp \
 ogdf/internal/energybased/NodePairEnergy.h \
 ogdf/internal/energybased/AdjacencyOracle.h \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/basic/Array2D.h ogdf/internal/energybased/IntersectionRectangle.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/NodePairEnergy.o -c src/energybased/NodePairEnergy.cpp

$(release)/src/energybased/NodePairEnergy.o: src/energybased/NodePairEnergy.cpp \
 ogdf/internal/energybased/NodePairEnergy.h \
 ogdf/internal/energybased/AdjacencyOracle.h \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/basic/Array2D.h ogdf/internal/energybased/IntersectionRectangle.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/NodePairEnergy.o -c src/energybased/NodePairEnergy.cpp

$(debug)/src/energybased/Overlap.o: src/energybased/Overlap.cpp \
 ogdf/internal/energybased/Overlap.h \
 ogdf/internal/energybased/NodePairEnergy.h \
 ogdf/internal/energybased/AdjacencyOracle.h \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/basic/Array2D.h ogdf/internal/energybased/IntersectionRectangle.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/Overlap.o -c src/energybased/Overlap.cpp

$(saferelease)/src/energybased/Overlap.o: src/energybased/Overlap.cpp \
 ogdf/internal/energybased/Overlap.h \
 ogdf/internal/energybased/NodePairEnergy.h \
 ogdf/internal/energybased/AdjacencyOracle.h \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/basic/Array2D.h ogdf/internal/energybased/IntersectionRectangle.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/Overlap.o -c src/energybased/Overlap.cpp

$(release)/src/energybased/Overlap.o: src/energybased/Overlap.cpp \
 ogdf/internal/energybased/Overlap.h \
 ogdf/internal/energybased/NodePairEnergy.h \
 ogdf/internal/energybased/AdjacencyOracle.h \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/basic/Array2D.h ogdf/internal/energybased/IntersectionRectangle.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/Overlap.o -c src/energybased/Overlap.cpp

$(debug)/src/energybased/Planarity.o: src/energybased/Planarity.cpp \
 ogdf/internal/energybased/Planarity.h \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/basic/Array2D.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/Planarity.o -c src/energybased/Planarity.cpp

$(saferelease)/src/energybased/Planarity.o: src/energybased/Planarity.cpp \
 ogdf/internal/energybased/Planarity.h \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/basic/Array2D.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/Planarity.o -c src/energybased/Planarity.cpp

$(release)/src/energybased/Planarity.o: src/energybased/Planarity.cpp \
 ogdf/internal/energybased/Planarity.h \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/basic/Array2D.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/Planarity.o -c src/energybased/Planarity.cpp

$(debug)/src/energybased/PlanarityGrid.o: src/energybased/PlanarityGrid.cpp \
 ogdf/internal/energybased/PlanarityGrid.h \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/UniformGrid.h ogdf/basic/SList.h \
 ogdf/basic/Array2D.h ogdf/basic/HashArray2D.h ogdf/basic/HashArray.h \
 ogdf/basic/tuples.h ogdf/basic/HashIterator2D.h \
 ogdf/internal/energybased/IntersectionRectangle.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/PlanarityGrid.o -c src/energybased/PlanarityGrid.cpp

$(saferelease)/src/energybased/PlanarityGrid.o: src/energybased/PlanarityGrid.cpp \
 ogdf/internal/energybased/PlanarityGrid.h \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/UniformGrid.h ogdf/basic/SList.h \
 ogdf/basic/Array2D.h ogdf/basic/HashArray2D.h ogdf/basic/HashArray.h \
 ogdf/basic/tuples.h ogdf/basic/HashIterator2D.h \
 ogdf/internal/energybased/IntersectionRectangle.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/PlanarityGrid.o -c src/energybased/PlanarityGrid.cpp

$(release)/src/energybased/PlanarityGrid.o: src/energybased/PlanarityGrid.cpp \
 ogdf/internal/energybased/PlanarityGrid.h \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/UniformGrid.h ogdf/basic/SList.h \
 ogdf/basic/Array2D.h ogdf/basic/HashArray2D.h ogdf/basic/HashArray.h \
 ogdf/basic/tuples.h ogdf/basic/HashIterator2D.h \
 ogdf/internal/energybased/IntersectionRectangle.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/PlanarityGrid.o -c src/energybased/PlanarityGrid.cpp

$(debug)/src/energybased/QuadTreeNM.o: src/energybased/QuadTreeNM.cpp \
 ogdf/internal/energybased/QuadTreeNM.h \
 ogdf/internal/energybased/QuadTreeNodeNM.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/basic/geometry.h ogdf/basic/Hashing.h \
 ogdf/internal/energybased/ParticleInfo.h \
 ogdf/internal/energybased/ParticleInfo.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/QuadTreeNM.o -c src/energybased/QuadTreeNM.cpp

$(saferelease)/src/energybased/QuadTreeNM.o: src/energybased/QuadTreeNM.cpp \
 ogdf/internal/energybased/QuadTreeNM.h \
 ogdf/internal/energybased/QuadTreeNodeNM.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/basic/geometry.h ogdf/basic/Hashing.h \
 ogdf/internal/energybased/ParticleInfo.h \
 ogdf/internal/energybased/ParticleInfo.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/QuadTreeNM.o -c src/energybased/QuadTreeNM.cpp

$(release)/src/energybased/QuadTreeNM.o: src/energybased/QuadTreeNM.cpp \
 ogdf/internal/energybased/QuadTreeNM.h \
 ogdf/internal/energybased/QuadTreeNodeNM.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/basic/geometry.h ogdf/basic/Hashing.h \
 ogdf/internal/energybased/ParticleInfo.h \
 ogdf/internal/energybased/ParticleInfo.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/QuadTreeNM.o -c src/energybased/QuadTreeNM.cpp

$(debug)/src/energybased/QuadTreeNodeNM.o: src/energybased/QuadTreeNodeNM.cpp \
 ogdf/internal/energybased/QuadTreeNodeNM.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/basic/geometry.h ogdf/basic/Hashing.h \
 ogdf/internal/energybased/ParticleInfo.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/QuadTreeNodeNM.o -c src/energybased/QuadTreeNodeNM.cpp

$(saferelease)/src/energybased/QuadTreeNodeNM.o: src/energybased/QuadTreeNodeNM.cpp \
 ogdf/internal/energybased/QuadTreeNodeNM.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/basic/geometry.h ogdf/basic/Hashing.h \
 ogdf/internal/energybased/ParticleInfo.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/QuadTreeNodeNM.o -c src/energybased/QuadTreeNodeNM.cpp

$(release)/src/energybased/QuadTreeNodeNM.o: src/energybased/QuadTreeNodeNM.cpp \
 ogdf/internal/energybased/QuadTreeNodeNM.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/basic/geometry.h ogdf/basic/Hashing.h \
 ogdf/internal/energybased/ParticleInfo.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/QuadTreeNodeNM.o -c src/energybased/QuadTreeNodeNM.cpp

$(debug)/src/energybased/Repulsion.o: src/energybased/Repulsion.cpp \
 ogdf/internal/energybased/Repulsion.h \
 ogdf/internal/energybased/NodePairEnergy.h \
 ogdf/internal/energybased/AdjacencyOracle.h \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/basic/Array2D.h ogdf/internal/energybased/IntersectionRectangle.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/Repulsion.o -c src/energybased/Repulsion.cpp

$(saferelease)/src/energybased/Repulsion.o: src/energybased/Repulsion.cpp \
 ogdf/internal/energybased/Repulsion.h \
 ogdf/internal/energybased/NodePairEnergy.h \
 ogdf/internal/energybased/AdjacencyOracle.h \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/basic/Array2D.h ogdf/internal/energybased/IntersectionRectangle.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/Repulsion.o -c src/energybased/Repulsion.cpp

$(release)/src/energybased/Repulsion.o: src/energybased/Repulsion.cpp \
 ogdf/internal/energybased/Repulsion.h \
 ogdf/internal/energybased/NodePairEnergy.h \
 ogdf/internal/energybased/AdjacencyOracle.h \
 ogdf/internal/energybased/EnergyFunction.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/basic/Array2D.h ogdf/internal/energybased/IntersectionRectangle.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/Repulsion.o -c src/energybased/Repulsion.cpp

$(debug)/src/energybased/Set.o: src/energybased/Set.cpp src/energybased/Set.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/NodeAttributes.h ogdf/basic/geometry.h \
 ogdf/basic/Hashing.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/Set.o -c src/energybased/Set.cpp

$(saferelease)/src/energybased/Set.o: src/energybased/Set.cpp src/energybased/Set.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/NodeAttributes.h ogdf/basic/geometry.h \
 ogdf/basic/Hashing.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/Set.o -c src/energybased/Set.cpp

$(release)/src/energybased/Set.o: src/energybased/Set.cpp src/energybased/Set.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/NodeAttributes.h ogdf/basic/geometry.h \
 ogdf/basic/Hashing.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/Set.o -c src/energybased/Set.cpp

$(debug)/src/energybased/SpringEmbedderFR.o: src/energybased/SpringEmbedderFR.cpp \
 ogdf/energybased/SpringEmbedderFR.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/Array2D.h \
 ogdf/packing/TileToRowsCCPacker.h ogdf/module/CCLayoutPackModule.h \
 ogdf/basic/GraphCopyAttributes.h ogdf/basic/GraphCopy.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/SpringEmbedderFR.o -c src/energybased/SpringEmbedderFR.cpp

$(saferelease)/src/energybased/SpringEmbedderFR.o: src/energybased/SpringEmbedderFR.cpp \
 ogdf/energybased/SpringEmbedderFR.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/Array2D.h \
 ogdf/packing/TileToRowsCCPacker.h ogdf/module/CCLayoutPackModule.h \
 ogdf/basic/GraphCopyAttributes.h ogdf/basic/GraphCopy.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/SpringEmbedderFR.o -c src/energybased/SpringEmbedderFR.cpp

$(release)/src/energybased/SpringEmbedderFR.o: src/energybased/SpringEmbedderFR.cpp \
 ogdf/energybased/SpringEmbedderFR.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/Array2D.h \
 ogdf/packing/TileToRowsCCPacker.h ogdf/module/CCLayoutPackModule.h \
 ogdf/basic/GraphCopyAttributes.h ogdf/basic/GraphCopy.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/SpringEmbedderFR.o -c src/energybased/SpringEmbedderFR.cpp

$(debug)/src/energybased/SpringEmbedderFRExact.o: src/energybased/SpringEmbedderFRExact.cpp \
 ogdf/energybased/SpringEmbedderFRExact.h ogdf/module/ForceLayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/module/LayoutModule.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/SList.h \
 ogdf/packing/TileToRowsCCPacker.h ogdf/module/CCLayoutPackModule.h \
 ogdf/basic/GraphCopyAttributes.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/simple_graph_alg.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/SpringEmbedderFRExact.o -c src/energybased/SpringEmbedderFRExact.cpp

$(saferelease)/src/energybased/SpringEmbedderFRExact.o: src/energybased/SpringEmbedderFRExact.cpp \
 ogdf/energybased/SpringEmbedderFRExact.h ogdf/module/ForceLayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/module/LayoutModule.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/SList.h \
 ogdf/packing/TileToRowsCCPacker.h ogdf/module/CCLayoutPackModule.h \
 ogdf/basic/GraphCopyAttributes.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/simple_graph_alg.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/SpringEmbedderFRExact.o -c src/energybased/SpringEmbedderFRExact.cpp

$(release)/src/energybased/SpringEmbedderFRExact.o: src/energybased/SpringEmbedderFRExact.cpp \
 ogdf/energybased/SpringEmbedderFRExact.h ogdf/module/ForceLayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/module/LayoutModule.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/SList.h \
 ogdf/packing/TileToRowsCCPacker.h ogdf/module/CCLayoutPackModule.h \
 ogdf/basic/GraphCopyAttributes.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/simple_graph_alg.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/SpringEmbedderFRExact.o -c src/energybased/SpringEmbedderFRExact.cpp

$(debug)/src/energybased/SpringEmbedderKK.o: src/energybased/SpringEmbedderKK.cpp \
 ogdf/energybased/SpringEmbedderKK.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/Array2D.h \
 ogdf/basic/tuples.h ogdf/basic/SList.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/SpringEmbedderKK.o -c src/energybased/SpringEmbedderKK.cpp

$(saferelease)/src/energybased/SpringEmbedderKK.o: src/energybased/SpringEmbedderKK.cpp \
 ogdf/energybased/SpringEmbedderKK.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/Array2D.h \
 ogdf/basic/tuples.h ogdf/basic/SList.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/SpringEmbedderKK.o -c src/energybased/SpringEmbedderKK.cpp

$(release)/src/energybased/SpringEmbedderKK.o: src/energybased/SpringEmbedderKK.cpp \
 ogdf/energybased/SpringEmbedderKK.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/Array2D.h \
 ogdf/basic/tuples.h ogdf/basic/SList.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/SpringEmbedderKK.o -c src/energybased/SpringEmbedderKK.cpp

$(debug)/src/energybased/StressMajorizationSimple.o: src/energybased/StressMajorizationSimple.cpp \
 ogdf/energybased/StressMajorizationSimple.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/Array2D.h \
 ogdf/basic/tuples.h ogdf/energybased/FMMMLayout.h \
 ogdf/cluster/ClusterGraphAttributes.h ogdf/basic/HashArray.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h ogdf/basic/GraphObserver.h \
 ogdf/internal/energybased/FruchtermanReingold.h \
 ogdf/internal/energybased/NodeAttributes.h \
 ogdf/internal/energybased/EdgeAttributes.h \
 ogdf/internal/energybased/NMM.h ogdf/internal/energybased/QuadTreeNM.h \
 ogdf/internal/energybased/QuadTreeNodeNM.h \
 ogdf/internal/energybased/ParticleInfo.h \
 ogdf/internal/energybased/ParticleInfo.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/StressMajorizationSimple.o -c src/energybased/StressMajorizationSimple.cpp

$(saferelease)/src/energybased/StressMajorizationSimple.o: src/energybased/StressMajorizationSimple.cpp \
 ogdf/energybased/StressMajorizationSimple.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/Array2D.h \
 ogdf/basic/tuples.h ogdf/energybased/FMMMLayout.h \
 ogdf/cluster/ClusterGraphAttributes.h ogdf/basic/HashArray.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h ogdf/basic/GraphObserver.h \
 ogdf/internal/energybased/FruchtermanReingold.h \
 ogdf/internal/energybased/NodeAttributes.h \
 ogdf/internal/energybased/EdgeAttributes.h \
 ogdf/internal/energybased/NMM.h ogdf/internal/energybased/QuadTreeNM.h \
 ogdf/internal/energybased/QuadTreeNodeNM.h \
 ogdf/internal/energybased/ParticleInfo.h \
 ogdf/internal/energybased/ParticleInfo.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/StressMajorizationSimple.o -c src/energybased/StressMajorizationSimple.cpp

$(release)/src/energybased/StressMajorizationSimple.o: src/energybased/StressMajorizationSimple.cpp \
 ogdf/energybased/StressMajorizationSimple.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/Array2D.h \
 ogdf/basic/tuples.h ogdf/energybased/FMMMLayout.h \
 ogdf/cluster/ClusterGraphAttributes.h ogdf/basic/HashArray.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h ogdf/basic/GraphObserver.h \
 ogdf/internal/energybased/FruchtermanReingold.h \
 ogdf/internal/energybased/NodeAttributes.h \
 ogdf/internal/energybased/EdgeAttributes.h \
 ogdf/internal/energybased/NMM.h ogdf/internal/energybased/QuadTreeNM.h \
 ogdf/internal/energybased/QuadTreeNodeNM.h \
 ogdf/internal/energybased/ParticleInfo.h \
 ogdf/internal/energybased/ParticleInfo.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/StressMajorizationSimple.o -c src/energybased/StressMajorizationSimple.cpp

$(debug)/src/energybased/UniformGrid.o: src/energybased/UniformGrid.cpp \
 ogdf/internal/energybased/UniformGrid.h ogdf/basic/geometry.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Hashing.h ogdf/basic/SList.h ogdf/basic/Array2D.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/HashArray2D.h ogdf/basic/HashArray.h ogdf/basic/tuples.h \
 ogdf/basic/HashIterator2D.h \
 ogdf/internal/energybased/IntersectionRectangle.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/UniformGrid.o -c src/energybased/UniformGrid.cpp

$(saferelease)/src/energybased/UniformGrid.o: src/energybased/UniformGrid.cpp \
 ogdf/internal/energybased/UniformGrid.h ogdf/basic/geometry.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Hashing.h ogdf/basic/SList.h ogdf/basic/Array2D.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/HashArray2D.h ogdf/basic/HashArray.h ogdf/basic/tuples.h \
 ogdf/basic/HashIterator2D.h \
 ogdf/internal/energybased/IntersectionRectangle.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/UniformGrid.o -c src/energybased/UniformGrid.cpp

$(release)/src/energybased/UniformGrid.o: src/energybased/UniformGrid.cpp \
 ogdf/internal/energybased/UniformGrid.h ogdf/basic/geometry.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Hashing.h ogdf/basic/SList.h ogdf/basic/Array2D.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/HashArray2D.h ogdf/basic/HashArray.h ogdf/basic/tuples.h \
 ogdf/basic/HashIterator2D.h \
 ogdf/internal/energybased/IntersectionRectangle.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/UniformGrid.o -c src/energybased/UniformGrid.cpp

$(debug)/src/energybased/WSPD.o: src/energybased/WSPD.cpp src/energybased/WSPD.h \
 src/energybased/LinearQuadtree.h src/energybased/FastUtils.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 src/energybased/FMEFunctional.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/WSPD.o -c src/energybased/WSPD.cpp

$(saferelease)/src/energybased/WSPD.o: src/energybased/WSPD.cpp src/energybased/WSPD.h \
 src/energybased/LinearQuadtree.h src/energybased/FastUtils.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 src/energybased/FMEFunctional.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/WSPD.o -c src/energybased/WSPD.cpp

$(release)/src/energybased/WSPD.o: src/energybased/WSPD.cpp src/energybased/WSPD.h \
 src/energybased/LinearQuadtree.h src/energybased/FastUtils.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 src/energybased/FMEFunctional.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/WSPD.o -c src/energybased/WSPD.cpp

$(debug)/src/energybased/multilevelmixer/BarycenterPlacer.o: src/energybased/multilevelmixer/BarycenterPlacer.cpp \
 ogdf/energybased/multilevelmixer/BarycenterPlacer.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(debug)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/multilevelmixer/BarycenterPlacer.o -c src/energybased/multilevelmixer/BarycenterPlacer.cpp

$(saferelease)/src/energybased/multilevelmixer/BarycenterPlacer.o: src/energybased/multilevelmixer/BarycenterPlacer.cpp \
 ogdf/energybased/multilevelmixer/BarycenterPlacer.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(saferelease)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/multilevelmixer/BarycenterPlacer.o -c src/energybased/multilevelmixer/BarycenterPlacer.cpp

$(release)/src/energybased/multilevelmixer/BarycenterPlacer.o: src/energybased/multilevelmixer/BarycenterPlacer.cpp \
 ogdf/energybased/multilevelmixer/BarycenterPlacer.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(release)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/multilevelmixer/BarycenterPlacer.o -c src/energybased/multilevelmixer/BarycenterPlacer.cpp

$(debug)/src/energybased/multilevelmixer/CirclePlacer.o: src/energybased/multilevelmixer/CirclePlacer.cpp \
 ogdf/energybased/multilevelmixer/CirclePlacer.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/energybased/multilevelmixer/BarycenterPlacer.h
	mkdir -p $(debug)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/multilevelmixer/CirclePlacer.o -c src/energybased/multilevelmixer/CirclePlacer.cpp

$(saferelease)/src/energybased/multilevelmixer/CirclePlacer.o: src/energybased/multilevelmixer/CirclePlacer.cpp \
 ogdf/energybased/multilevelmixer/CirclePlacer.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/energybased/multilevelmixer/BarycenterPlacer.h
	mkdir -p $(saferelease)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/multilevelmixer/CirclePlacer.o -c src/energybased/multilevelmixer/CirclePlacer.cpp

$(release)/src/energybased/multilevelmixer/CirclePlacer.o: src/energybased/multilevelmixer/CirclePlacer.cpp \
 ogdf/energybased/multilevelmixer/CirclePlacer.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/energybased/multilevelmixer/BarycenterPlacer.h
	mkdir -p $(release)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/multilevelmixer/CirclePlacer.o -c src/energybased/multilevelmixer/CirclePlacer.cpp

$(debug)/src/energybased/multilevelmixer/EdgeCoverMerger.o: src/energybased/multilevelmixer/EdgeCoverMerger.cpp \
 ogdf/energybased/multilevelmixer/EdgeCoverMerger.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(debug)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/multilevelmixer/EdgeCoverMerger.o -c src/energybased/multilevelmixer/EdgeCoverMerger.cpp

$(saferelease)/src/energybased/multilevelmixer/EdgeCoverMerger.o: src/energybased/multilevelmixer/EdgeCoverMerger.cpp \
 ogdf/energybased/multilevelmixer/EdgeCoverMerger.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(saferelease)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/multilevelmixer/EdgeCoverMerger.o -c src/energybased/multilevelmixer/EdgeCoverMerger.cpp

$(release)/src/energybased/multilevelmixer/EdgeCoverMerger.o: src/energybased/multilevelmixer/EdgeCoverMerger.cpp \
 ogdf/energybased/multilevelmixer/EdgeCoverMerger.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(release)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/multilevelmixer/EdgeCoverMerger.o -c src/energybased/multilevelmixer/EdgeCoverMerger.cpp

$(debug)/src/energybased/multilevelmixer/IndependentSetMerger.o: \
 src/energybased/multilevelmixer/IndependentSetMerger.cpp \
 ogdf/energybased/multilevelmixer/IndependentSetMerger.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(debug)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/multilevelmixer/IndependentSetMerger.o -c src/energybased/multilevelmixer/IndependentSetMerger.cpp

$(saferelease)/src/energybased/multilevelmixer/IndependentSetMerger.o: \
 src/energybased/multilevelmixer/IndependentSetMerger.cpp \
 ogdf/energybased/multilevelmixer/IndependentSetMerger.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(saferelease)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/multilevelmixer/IndependentSetMerger.o -c src/energybased/multilevelmixer/IndependentSetMerger.cpp

$(release)/src/energybased/multilevelmixer/IndependentSetMerger.o: \
 src/energybased/multilevelmixer/IndependentSetMerger.cpp \
 ogdf/energybased/multilevelmixer/IndependentSetMerger.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(release)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/multilevelmixer/IndependentSetMerger.o -c src/energybased/multilevelmixer/IndependentSetMerger.cpp

$(debug)/src/energybased/multilevelmixer/LocalBiconnectedMerger.o: \
 src/energybased/multilevelmixer/LocalBiconnectedMerger.cpp \
 ogdf/energybased/multilevelmixer/LocalBiconnectedMerger.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/basic/HashArray.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/basic/SList.h
	mkdir -p $(debug)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/multilevelmixer/LocalBiconnectedMerger.o -c src/energybased/multilevelmixer/LocalBiconnectedMerger.cpp

$(saferelease)/src/energybased/multilevelmixer/LocalBiconnectedMerger.o: \
 src/energybased/multilevelmixer/LocalBiconnectedMerger.cpp \
 ogdf/energybased/multilevelmixer/LocalBiconnectedMerger.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/basic/HashArray.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/basic/SList.h
	mkdir -p $(saferelease)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/multilevelmixer/LocalBiconnectedMerger.o -c src/energybased/multilevelmixer/LocalBiconnectedMerger.cpp

$(release)/src/energybased/multilevelmixer/LocalBiconnectedMerger.o: \
 src/energybased/multilevelmixer/LocalBiconnectedMerger.cpp \
 ogdf/energybased/multilevelmixer/LocalBiconnectedMerger.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/basic/HashArray.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/basic/SList.h
	mkdir -p $(release)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/multilevelmixer/LocalBiconnectedMerger.o -c src/energybased/multilevelmixer/LocalBiconnectedMerger.cpp

$(debug)/src/energybased/multilevelmixer/MMMExampleFastLayout.o: \
 src/energybased/multilevelmixer/MMMExampleFastLayout.cpp \
 ogdf/energybased/multilevelmixer/MMMExampleFastLayout.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/basic/PreprocessorLayout.h ogdf/packing/ComponentSplitterLayout.h \
 ogdf/module/CCLayoutPackModule.h ogdf/packing/TileToRowsCCPacker.h \
 ogdf/energybased/multilevelmixer/ModularMultilevelMixerLayout.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h \
 ogdf/energybased/multilevelmixer/ScalingLayout.h \
 ogdf/energybased/FastMultipoleEmbedder.h \
 ogdf/energybased/multilevelmixer/SolarMerger.h \
 ogdf/energybased/multilevelmixer/SolarPlacer.h
	mkdir -p $(debug)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/multilevelmixer/MMMExampleFastLayout.o -c src/energybased/multilevelmixer/MMMExampleFastLayout.cpp

$(saferelease)/src/energybased/multilevelmixer/MMMExampleFastLayout.o: \
 src/energybased/multilevelmixer/MMMExampleFastLayout.cpp \
 ogdf/energybased/multilevelmixer/MMMExampleFastLayout.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/basic/PreprocessorLayout.h ogdf/packing/ComponentSplitterLayout.h \
 ogdf/module/CCLayoutPackModule.h ogdf/packing/TileToRowsCCPacker.h \
 ogdf/energybased/multilevelmixer/ModularMultilevelMixerLayout.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h \
 ogdf/energybased/multilevelmixer/ScalingLayout.h \
 ogdf/energybased/FastMultipoleEmbedder.h \
 ogdf/energybased/multilevelmixer/SolarMerger.h \
 ogdf/energybased/multilevelmixer/SolarPlacer.h
	mkdir -p $(saferelease)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/multilevelmixer/MMMExampleFastLayout.o -c src/energybased/multilevelmixer/MMMExampleFastLayout.cpp

$(release)/src/energybased/multilevelmixer/MMMExampleFastLayout.o: \
 src/energybased/multilevelmixer/MMMExampleFastLayout.cpp \
 ogdf/energybased/multilevelmixer/MMMExampleFastLayout.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/basic/PreprocessorLayout.h ogdf/packing/ComponentSplitterLayout.h \
 ogdf/module/CCLayoutPackModule.h ogdf/packing/TileToRowsCCPacker.h \
 ogdf/energybased/multilevelmixer/ModularMultilevelMixerLayout.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h \
 ogdf/energybased/multilevelmixer/ScalingLayout.h \
 ogdf/energybased/FastMultipoleEmbedder.h \
 ogdf/energybased/multilevelmixer/SolarMerger.h \
 ogdf/energybased/multilevelmixer/SolarPlacer.h
	mkdir -p $(release)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/multilevelmixer/MMMExampleFastLayout.o -c src/energybased/multilevelmixer/MMMExampleFastLayout.cpp

$(debug)/src/energybased/multilevelmixer/MMMExampleNiceLayout.o: \
 src/energybased/multilevelmixer/MMMExampleNiceLayout.cpp \
 ogdf/energybased/multilevelmixer/MMMExampleNiceLayout.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/basic/PreprocessorLayout.h ogdf/packing/ComponentSplitterLayout.h \
 ogdf/module/CCLayoutPackModule.h ogdf/packing/TileToRowsCCPacker.h \
 ogdf/energybased/multilevelmixer/ModularMultilevelMixerLayout.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h \
 ogdf/energybased/multilevelmixer/ScalingLayout.h \
 ogdf/energybased/FastMultipoleEmbedder.h \
 ogdf/energybased/multilevelmixer/EdgeCoverMerger.h \
 ogdf/energybased/multilevelmixer/BarycenterPlacer.h
	mkdir -p $(debug)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/multilevelmixer/MMMExampleNiceLayout.o -c src/energybased/multilevelmixer/MMMExampleNiceLayout.cpp

$(saferelease)/src/energybased/multilevelmixer/MMMExampleNiceLayout.o: \
 src/energybased/multilevelmixer/MMMExampleNiceLayout.cpp \
 ogdf/energybased/multilevelmixer/MMMExampleNiceLayout.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/basic/PreprocessorLayout.h ogdf/packing/ComponentSplitterLayout.h \
 ogdf/module/CCLayoutPackModule.h ogdf/packing/TileToRowsCCPacker.h \
 ogdf/energybased/multilevelmixer/ModularMultilevelMixerLayout.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h \
 ogdf/energybased/multilevelmixer/ScalingLayout.h \
 ogdf/energybased/FastMultipoleEmbedder.h \
 ogdf/energybased/multilevelmixer/EdgeCoverMerger.h \
 ogdf/energybased/multilevelmixer/BarycenterPlacer.h
	mkdir -p $(saferelease)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/multilevelmixer/MMMExampleNiceLayout.o -c src/energybased/multilevelmixer/MMMExampleNiceLayout.cpp

$(release)/src/energybased/multilevelmixer/MMMExampleNiceLayout.o: \
 src/energybased/multilevelmixer/MMMExampleNiceLayout.cpp \
 ogdf/energybased/multilevelmixer/MMMExampleNiceLayout.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/basic/PreprocessorLayout.h ogdf/packing/ComponentSplitterLayout.h \
 ogdf/module/CCLayoutPackModule.h ogdf/packing/TileToRowsCCPacker.h \
 ogdf/energybased/multilevelmixer/ModularMultilevelMixerLayout.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h \
 ogdf/energybased/multilevelmixer/ScalingLayout.h \
 ogdf/energybased/FastMultipoleEmbedder.h \
 ogdf/energybased/multilevelmixer/EdgeCoverMerger.h \
 ogdf/energybased/multilevelmixer/BarycenterPlacer.h
	mkdir -p $(release)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/multilevelmixer/MMMExampleNiceLayout.o -c src/energybased/multilevelmixer/MMMExampleNiceLayout.cpp

$(debug)/src/energybased/multilevelmixer/MMMExampleNoTwistLayout.o: \
 src/energybased/multilevelmixer/MMMExampleNoTwistLayout.cpp \
 ogdf/energybased/multilevelmixer/MMMExampleNoTwistLayout.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/basic/PreprocessorLayout.h ogdf/packing/ComponentSplitterLayout.h \
 ogdf/module/CCLayoutPackModule.h ogdf/packing/TileToRowsCCPacker.h \
 ogdf/energybased/multilevelmixer/ModularMultilevelMixerLayout.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h \
 ogdf/energybased/multilevelmixer/ScalingLayout.h \
 ogdf/energybased/FastMultipoleEmbedder.h \
 ogdf/energybased/multilevelmixer/LocalBiconnectedMerger.h \
 ogdf/basic/HashArray.h \
 ogdf/energybased/multilevelmixer/BarycenterPlacer.h
	mkdir -p $(debug)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/multilevelmixer/MMMExampleNoTwistLayout.o -c src/energybased/multilevelmixer/MMMExampleNoTwistLayout.cpp

$(saferelease)/src/energybased/multilevelmixer/MMMExampleNoTwistLayout.o: \
 src/energybased/multilevelmixer/MMMExampleNoTwistLayout.cpp \
 ogdf/energybased/multilevelmixer/MMMExampleNoTwistLayout.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/basic/PreprocessorLayout.h ogdf/packing/ComponentSplitterLayout.h \
 ogdf/module/CCLayoutPackModule.h ogdf/packing/TileToRowsCCPacker.h \
 ogdf/energybased/multilevelmixer/ModularMultilevelMixerLayout.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h \
 ogdf/energybased/multilevelmixer/ScalingLayout.h \
 ogdf/energybased/FastMultipoleEmbedder.h \
 ogdf/energybased/multilevelmixer/LocalBiconnectedMerger.h \
 ogdf/basic/HashArray.h \
 ogdf/energybased/multilevelmixer/BarycenterPlacer.h
	mkdir -p $(saferelease)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/multilevelmixer/MMMExampleNoTwistLayout.o -c src/energybased/multilevelmixer/MMMExampleNoTwistLayout.cpp

$(release)/src/energybased/multilevelmixer/MMMExampleNoTwistLayout.o: \
 src/energybased/multilevelmixer/MMMExampleNoTwistLayout.cpp \
 ogdf/energybased/multilevelmixer/MMMExampleNoTwistLayout.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/basic/PreprocessorLayout.h ogdf/packing/ComponentSplitterLayout.h \
 ogdf/module/CCLayoutPackModule.h ogdf/packing/TileToRowsCCPacker.h \
 ogdf/energybased/multilevelmixer/ModularMultilevelMixerLayout.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h \
 ogdf/energybased/multilevelmixer/ScalingLayout.h \
 ogdf/energybased/FastMultipoleEmbedder.h \
 ogdf/energybased/multilevelmixer/LocalBiconnectedMerger.h \
 ogdf/basic/HashArray.h \
 ogdf/energybased/multilevelmixer/BarycenterPlacer.h
	mkdir -p $(release)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/multilevelmixer/MMMExampleNoTwistLayout.o -c src/energybased/multilevelmixer/MMMExampleNoTwistLayout.cpp

$(debug)/src/energybased/multilevelmixer/MatchingMerger.o: src/energybased/multilevelmixer/MatchingMerger.cpp \
 ogdf/energybased/multilevelmixer/MatchingMerger.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(debug)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/multilevelmixer/MatchingMerger.o -c src/energybased/multilevelmixer/MatchingMerger.cpp

$(saferelease)/src/energybased/multilevelmixer/MatchingMerger.o: src/energybased/multilevelmixer/MatchingMerger.cpp \
 ogdf/energybased/multilevelmixer/MatchingMerger.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(saferelease)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/multilevelmixer/MatchingMerger.o -c src/energybased/multilevelmixer/MatchingMerger.cpp

$(release)/src/energybased/multilevelmixer/MatchingMerger.o: src/energybased/multilevelmixer/MatchingMerger.cpp \
 ogdf/energybased/multilevelmixer/MatchingMerger.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(release)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/multilevelmixer/MatchingMerger.o -c src/energybased/multilevelmixer/MatchingMerger.cpp

$(debug)/src/energybased/multilevelmixer/MedianPlacer.o: src/energybased/multilevelmixer/MedianPlacer.cpp \
 ogdf/energybased/multilevelmixer/MedianPlacer.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(debug)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/multilevelmixer/MedianPlacer.o -c src/energybased/multilevelmixer/MedianPlacer.cpp

$(saferelease)/src/energybased/multilevelmixer/MedianPlacer.o: src/energybased/multilevelmixer/MedianPlacer.cpp \
 ogdf/energybased/multilevelmixer/MedianPlacer.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(saferelease)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/multilevelmixer/MedianPlacer.o -c src/energybased/multilevelmixer/MedianPlacer.cpp

$(release)/src/energybased/multilevelmixer/MedianPlacer.o: src/energybased/multilevelmixer/MedianPlacer.cpp \
 ogdf/energybased/multilevelmixer/MedianPlacer.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(release)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/multilevelmixer/MedianPlacer.o -c src/energybased/multilevelmixer/MedianPlacer.cpp

$(debug)/src/energybased/multilevelmixer/MixedForceLayout.o: src/energybased/multilevelmixer/MixedForceLayout.cpp \
 ogdf/energybased/multilevelmixer/MixedForceLayout.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/energybased/SpringEmbedderFR.h ogdf/basic/Array2D.h \
 ogdf/energybased/FastMultipoleEmbedder.h
	mkdir -p $(debug)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/multilevelmixer/MixedForceLayout.o -c src/energybased/multilevelmixer/MixedForceLayout.cpp

$(saferelease)/src/energybased/multilevelmixer/MixedForceLayout.o: src/energybased/multilevelmixer/MixedForceLayout.cpp \
 ogdf/energybased/multilevelmixer/MixedForceLayout.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/energybased/SpringEmbedderFR.h ogdf/basic/Array2D.h \
 ogdf/energybased/FastMultipoleEmbedder.h
	mkdir -p $(saferelease)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/multilevelmixer/MixedForceLayout.o -c src/energybased/multilevelmixer/MixedForceLayout.cpp

$(release)/src/energybased/multilevelmixer/MixedForceLayout.o: src/energybased/multilevelmixer/MixedForceLayout.cpp \
 ogdf/energybased/multilevelmixer/MixedForceLayout.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/energybased/SpringEmbedderFR.h ogdf/basic/Array2D.h \
 ogdf/energybased/FastMultipoleEmbedder.h
	mkdir -p $(release)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/multilevelmixer/MixedForceLayout.o -c src/energybased/multilevelmixer/MixedForceLayout.cpp

$(debug)/src/energybased/multilevelmixer/ModularMultilevelMixerLayout.o: \
 src/energybased/multilevelmixer/ModularMultilevelMixerLayout.cpp \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h \
 ogdf/energybased/multilevelmixer/ModularMultilevelMixerLayout.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h
	mkdir -p $(debug)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/multilevelmixer/ModularMultilevelMixerLayout.o -c src/energybased/multilevelmixer/ModularMultilevelMixerLayout.cpp

$(saferelease)/src/energybased/multilevelmixer/ModularMultilevelMixerLayout.o: \
 src/energybased/multilevelmixer/ModularMultilevelMixerLayout.cpp \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h \
 ogdf/energybased/multilevelmixer/ModularMultilevelMixerLayout.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h
	mkdir -p $(saferelease)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/multilevelmixer/ModularMultilevelMixerLayout.o -c src/energybased/multilevelmixer/ModularMultilevelMixerLayout.cpp

$(release)/src/energybased/multilevelmixer/ModularMultilevelMixerLayout.o: \
 src/energybased/multilevelmixer/ModularMultilevelMixerLayout.cpp \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h \
 ogdf/energybased/multilevelmixer/ModularMultilevelMixerLayout.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h
	mkdir -p $(release)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/multilevelmixer/ModularMultilevelMixerLayout.o -c src/energybased/multilevelmixer/ModularMultilevelMixerLayout.cpp

$(debug)/src/energybased/multilevelmixer/RandomMerger.o: src/energybased/multilevelmixer/RandomMerger.cpp \
 ogdf/energybased/multilevelmixer/RandomMerger.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(debug)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/multilevelmixer/RandomMerger.o -c src/energybased/multilevelmixer/RandomMerger.cpp

$(saferelease)/src/energybased/multilevelmixer/RandomMerger.o: src/energybased/multilevelmixer/RandomMerger.cpp \
 ogdf/energybased/multilevelmixer/RandomMerger.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(saferelease)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/multilevelmixer/RandomMerger.o -c src/energybased/multilevelmixer/RandomMerger.cpp

$(release)/src/energybased/multilevelmixer/RandomMerger.o: src/energybased/multilevelmixer/RandomMerger.cpp \
 ogdf/energybased/multilevelmixer/RandomMerger.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(release)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/multilevelmixer/RandomMerger.o -c src/energybased/multilevelmixer/RandomMerger.cpp

$(debug)/src/energybased/multilevelmixer/RandomPlacer.o: src/energybased/multilevelmixer/RandomPlacer.cpp \
 ogdf/energybased/multilevelmixer/RandomPlacer.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(debug)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/multilevelmixer/RandomPlacer.o -c src/energybased/multilevelmixer/RandomPlacer.cpp

$(saferelease)/src/energybased/multilevelmixer/RandomPlacer.o: src/energybased/multilevelmixer/RandomPlacer.cpp \
 ogdf/energybased/multilevelmixer/RandomPlacer.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(saferelease)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/multilevelmixer/RandomPlacer.o -c src/energybased/multilevelmixer/RandomPlacer.cpp

$(release)/src/energybased/multilevelmixer/RandomPlacer.o: src/energybased/multilevelmixer/RandomPlacer.cpp \
 ogdf/energybased/multilevelmixer/RandomPlacer.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(release)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/multilevelmixer/RandomPlacer.o -c src/energybased/multilevelmixer/RandomPlacer.cpp

$(debug)/src/energybased/multilevelmixer/ScalingLayout.o: src/energybased/multilevelmixer/ScalingLayout.cpp \
 ogdf/energybased/multilevelmixer/ScalingLayout.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/energybased/multilevelmixer/ModularMultilevelMixerLayout.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h
	mkdir -p $(debug)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/multilevelmixer/ScalingLayout.o -c src/energybased/multilevelmixer/ScalingLayout.cpp

$(saferelease)/src/energybased/multilevelmixer/ScalingLayout.o: src/energybased/multilevelmixer/ScalingLayout.cpp \
 ogdf/energybased/multilevelmixer/ScalingLayout.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/energybased/multilevelmixer/ModularMultilevelMixerLayout.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h
	mkdir -p $(saferelease)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/multilevelmixer/ScalingLayout.o -c src/energybased/multilevelmixer/ScalingLayout.cpp

$(release)/src/energybased/multilevelmixer/ScalingLayout.o: src/energybased/multilevelmixer/ScalingLayout.cpp \
 ogdf/energybased/multilevelmixer/ScalingLayout.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/energybased/multilevelmixer/ModularMultilevelMixerLayout.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h
	mkdir -p $(release)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/multilevelmixer/ScalingLayout.o -c src/energybased/multilevelmixer/ScalingLayout.cpp

$(debug)/src/energybased/multilevelmixer/SolarMerger.o: src/energybased/multilevelmixer/SolarMerger.cpp \
 ogdf/energybased/multilevelmixer/SolarMerger.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(debug)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/multilevelmixer/SolarMerger.o -c src/energybased/multilevelmixer/SolarMerger.cpp

$(saferelease)/src/energybased/multilevelmixer/SolarMerger.o: src/energybased/multilevelmixer/SolarMerger.cpp \
 ogdf/energybased/multilevelmixer/SolarMerger.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(saferelease)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/multilevelmixer/SolarMerger.o -c src/energybased/multilevelmixer/SolarMerger.cpp

$(release)/src/energybased/multilevelmixer/SolarMerger.o: src/energybased/multilevelmixer/SolarMerger.cpp \
 ogdf/energybased/multilevelmixer/SolarMerger.h \
 ogdf/energybased/multilevelmixer/MultilevelBuilder.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(release)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/multilevelmixer/SolarMerger.o -c src/energybased/multilevelmixer/SolarMerger.cpp

$(debug)/src/energybased/multilevelmixer/SolarPlacer.o: src/energybased/multilevelmixer/SolarPlacer.cpp \
 ogdf/energybased/multilevelmixer/SolarPlacer.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(debug)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/multilevelmixer/SolarPlacer.o -c src/energybased/multilevelmixer/SolarPlacer.cpp

$(saferelease)/src/energybased/multilevelmixer/SolarPlacer.o: src/energybased/multilevelmixer/SolarPlacer.cpp \
 ogdf/energybased/multilevelmixer/SolarPlacer.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(saferelease)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/multilevelmixer/SolarPlacer.o -c src/energybased/multilevelmixer/SolarPlacer.cpp

$(release)/src/energybased/multilevelmixer/SolarPlacer.o: src/energybased/multilevelmixer/SolarPlacer.cpp \
 ogdf/energybased/multilevelmixer/SolarPlacer.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(release)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/multilevelmixer/SolarPlacer.o -c src/energybased/multilevelmixer/SolarPlacer.cpp

$(debug)/src/energybased/multilevelmixer/ZeroPlacer.o: src/energybased/multilevelmixer/ZeroPlacer.cpp \
 ogdf/energybased/multilevelmixer/ZeroPlacer.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(debug)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/multilevelmixer/ZeroPlacer.o -c src/energybased/multilevelmixer/ZeroPlacer.cpp

$(saferelease)/src/energybased/multilevelmixer/ZeroPlacer.o: src/energybased/multilevelmixer/ZeroPlacer.cpp \
 ogdf/energybased/multilevelmixer/ZeroPlacer.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(saferelease)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/multilevelmixer/ZeroPlacer.o -c src/energybased/multilevelmixer/ZeroPlacer.cpp

$(release)/src/energybased/multilevelmixer/ZeroPlacer.o: src/energybased/multilevelmixer/ZeroPlacer.cpp \
 ogdf/energybased/multilevelmixer/ZeroPlacer.h \
 ogdf/energybased/multilevelmixer/InitialPlacer.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(release)/src/energybased/multilevelmixer
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/multilevelmixer/ZeroPlacer.o -c src/energybased/multilevelmixer/ZeroPlacer.cpp

$(debug)/src/energybased/numexcept.o: src/energybased/numexcept.cpp src/energybased/numexcept.h \
 ogdf/basic/geometry.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Hashing.h \
 src/energybased/mathExtension.h
	mkdir -p $(debug)/src/energybased
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/energybased/numexcept.o -c src/energybased/numexcept.cpp

$(saferelease)/src/energybased/numexcept.o: src/energybased/numexcept.cpp src/energybased/numexcept.h \
 ogdf/basic/geometry.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Hashing.h \
 src/energybased/mathExtension.h
	mkdir -p $(saferelease)/src/energybased
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/energybased/numexcept.o -c src/energybased/numexcept.cpp

$(release)/src/energybased/numexcept.o: src/energybased/numexcept.cpp src/energybased/numexcept.h \
 ogdf/basic/geometry.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Hashing.h \
 src/energybased/mathExtension.h
	mkdir -p $(release)/src/energybased
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/energybased/numexcept.o -c src/energybased/numexcept.cpp

$(debug)/src/external/coin.o: src/external/coin.cpp
	mkdir -p $(debug)/src/external
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/external/coin.o -c src/external/coin.cpp

$(saferelease)/src/external/coin.o: src/external/coin.cpp
	mkdir -p $(saferelease)/src/external
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/external/coin.o -c src/external/coin.cpp

$(release)/src/external/coin.o: src/external/coin.cpp
	mkdir -p $(release)/src/external
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/external/coin.o -c src/external/coin.cpp

$(debug)/src/fileformats/DinoLineBuffer.o: src/fileformats/DinoLineBuffer.cpp \
 ogdf/fileformats/DinoLineBuffer.h ogdf/basic/basic.h \
 ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/fileformats/DinoTools.h ogdf/basic/Array.h
	mkdir -p $(debug)/src/fileformats
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/fileformats/DinoLineBuffer.o -c src/fileformats/DinoLineBuffer.cpp

$(saferelease)/src/fileformats/DinoLineBuffer.o: src/fileformats/DinoLineBuffer.cpp \
 ogdf/fileformats/DinoLineBuffer.h ogdf/basic/basic.h \
 ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/fileformats/DinoTools.h ogdf/basic/Array.h
	mkdir -p $(saferelease)/src/fileformats
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/fileformats/DinoLineBuffer.o -c src/fileformats/DinoLineBuffer.cpp

$(release)/src/fileformats/DinoLineBuffer.o: src/fileformats/DinoLineBuffer.cpp \
 ogdf/fileformats/DinoLineBuffer.h ogdf/basic/basic.h \
 ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/fileformats/DinoTools.h ogdf/basic/Array.h
	mkdir -p $(release)/src/fileformats
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/fileformats/DinoLineBuffer.o -c src/fileformats/DinoLineBuffer.cpp

$(debug)/src/fileformats/DinoTools.o: src/fileformats/DinoTools.cpp ogdf/fileformats/DinoTools.h \
 ogdf/basic/String.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Hashing.h ogdf/basic/Array.h
	mkdir -p $(debug)/src/fileformats
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/fileformats/DinoTools.o -c src/fileformats/DinoTools.cpp

$(saferelease)/src/fileformats/DinoTools.o: src/fileformats/DinoTools.cpp ogdf/fileformats/DinoTools.h \
 ogdf/basic/String.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Hashing.h ogdf/basic/Array.h
	mkdir -p $(saferelease)/src/fileformats
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/fileformats/DinoTools.o -c src/fileformats/DinoTools.cpp

$(release)/src/fileformats/DinoTools.o: src/fileformats/DinoTools.cpp ogdf/fileformats/DinoTools.h \
 ogdf/basic/String.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Hashing.h ogdf/basic/Array.h
	mkdir -p $(release)/src/fileformats
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/fileformats/DinoTools.o -c src/fileformats/DinoTools.cpp

$(debug)/src/fileformats/DinoUmlDiagramGraph.o: src/fileformats/DinoUmlDiagramGraph.cpp \
 ogdf/fileformats/DinoUmlDiagramGraph.h \
 ogdf/fileformats/DinoUmlModelGraph.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/SList.h
	mkdir -p $(debug)/src/fileformats
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/fileformats/DinoUmlDiagramGraph.o -c src/fileformats/DinoUmlDiagramGraph.cpp

$(saferelease)/src/fileformats/DinoUmlDiagramGraph.o: src/fileformats/DinoUmlDiagramGraph.cpp \
 ogdf/fileformats/DinoUmlDiagramGraph.h \
 ogdf/fileformats/DinoUmlModelGraph.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/SList.h
	mkdir -p $(saferelease)/src/fileformats
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/fileformats/DinoUmlDiagramGraph.o -c src/fileformats/DinoUmlDiagramGraph.cpp

$(release)/src/fileformats/DinoUmlDiagramGraph.o: src/fileformats/DinoUmlDiagramGraph.cpp \
 ogdf/fileformats/DinoUmlDiagramGraph.h \
 ogdf/fileformats/DinoUmlModelGraph.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/SList.h
	mkdir -p $(release)/src/fileformats
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/fileformats/DinoUmlDiagramGraph.o -c src/fileformats/DinoUmlDiagramGraph.cpp

$(debug)/src/fileformats/DinoUmlModelGraph.o: src/fileformats/DinoUmlModelGraph.cpp \
 ogdf/fileformats/DinoUmlModelGraph.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h
	mkdir -p $(debug)/src/fileformats
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/fileformats/DinoUmlModelGraph.o -c src/fileformats/DinoUmlModelGraph.cpp

$(saferelease)/src/fileformats/DinoUmlModelGraph.o: src/fileformats/DinoUmlModelGraph.cpp \
 ogdf/fileformats/DinoUmlModelGraph.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h
	mkdir -p $(saferelease)/src/fileformats
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/fileformats/DinoUmlModelGraph.o -c src/fileformats/DinoUmlModelGraph.cpp

$(release)/src/fileformats/DinoUmlModelGraph.o: src/fileformats/DinoUmlModelGraph.cpp \
 ogdf/fileformats/DinoUmlModelGraph.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h
	mkdir -p $(release)/src/fileformats
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/fileformats/DinoUmlModelGraph.o -c src/fileformats/DinoUmlModelGraph.cpp

$(debug)/src/fileformats/DinoUmlToGraphConverter.o: src/fileformats/DinoUmlToGraphConverter.cpp \
 ogdf/fileformats/DinoUmlToGraphConverter.h \
 ogdf/fileformats/DinoXmlParser.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/geometry.h ogdf/fileformats/DinoXmlScanner.h \
 ogdf/fileformats/DinoLineBuffer.h ogdf/fileformats/DinoUmlModelGraph.h \
 ogdf/fileformats/DinoUmlDiagramGraph.h ogdf/basic/UMLGraph.h \
 ogdf/basic/AdjEntryArray.h ogdf/fileformats/DinoTools.h
	mkdir -p $(debug)/src/fileformats
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/fileformats/DinoUmlToGraphConverter.o -c src/fileformats/DinoUmlToGraphConverter.cpp

$(saferelease)/src/fileformats/DinoUmlToGraphConverter.o: src/fileformats/DinoUmlToGraphConverter.cpp \
 ogdf/fileformats/DinoUmlToGraphConverter.h \
 ogdf/fileformats/DinoXmlParser.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/geometry.h ogdf/fileformats/DinoXmlScanner.h \
 ogdf/fileformats/DinoLineBuffer.h ogdf/fileformats/DinoUmlModelGraph.h \
 ogdf/fileformats/DinoUmlDiagramGraph.h ogdf/basic/UMLGraph.h \
 ogdf/basic/AdjEntryArray.h ogdf/fileformats/DinoTools.h
	mkdir -p $(saferelease)/src/fileformats
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/fileformats/DinoUmlToGraphConverter.o -c src/fileformats/DinoUmlToGraphConverter.cpp

$(release)/src/fileformats/DinoUmlToGraphConverter.o: src/fileformats/DinoUmlToGraphConverter.cpp \
 ogdf/fileformats/DinoUmlToGraphConverter.h \
 ogdf/fileformats/DinoXmlParser.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/geometry.h ogdf/fileformats/DinoXmlScanner.h \
 ogdf/fileformats/DinoLineBuffer.h ogdf/fileformats/DinoUmlModelGraph.h \
 ogdf/fileformats/DinoUmlDiagramGraph.h ogdf/basic/UMLGraph.h \
 ogdf/basic/AdjEntryArray.h ogdf/fileformats/DinoTools.h
	mkdir -p $(release)/src/fileformats
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/fileformats/DinoUmlToGraphConverter.o -c src/fileformats/DinoUmlToGraphConverter.cpp

$(debug)/src/fileformats/DinoXmlParser.o: src/fileformats/DinoXmlParser.cpp \
 ogdf/fileformats/DinoXmlParser.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/geometry.h ogdf/fileformats/DinoXmlScanner.h \
 ogdf/fileformats/DinoLineBuffer.h ogdf/fileformats/DinoTools.h
	mkdir -p $(debug)/src/fileformats
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/fileformats/DinoXmlParser.o -c src/fileformats/DinoXmlParser.cpp

$(saferelease)/src/fileformats/DinoXmlParser.o: src/fileformats/DinoXmlParser.cpp \
 ogdf/fileformats/DinoXmlParser.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/geometry.h ogdf/fileformats/DinoXmlScanner.h \
 ogdf/fileformats/DinoLineBuffer.h ogdf/fileformats/DinoTools.h
	mkdir -p $(saferelease)/src/fileformats
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/fileformats/DinoXmlParser.o -c src/fileformats/DinoXmlParser.cpp

$(release)/src/fileformats/DinoXmlParser.o: src/fileformats/DinoXmlParser.cpp \
 ogdf/fileformats/DinoXmlParser.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/geometry.h ogdf/fileformats/DinoXmlScanner.h \
 ogdf/fileformats/DinoLineBuffer.h ogdf/fileformats/DinoTools.h
	mkdir -p $(release)/src/fileformats
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/fileformats/DinoXmlParser.o -c src/fileformats/DinoXmlParser.cpp

$(debug)/src/fileformats/DinoXmlScanner.o: src/fileformats/DinoXmlScanner.cpp \
 ogdf/fileformats/DinoXmlScanner.h ogdf/fileformats/DinoLineBuffer.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h
	mkdir -p $(debug)/src/fileformats
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/fileformats/DinoXmlScanner.o -c src/fileformats/DinoXmlScanner.cpp

$(saferelease)/src/fileformats/DinoXmlScanner.o: src/fileformats/DinoXmlScanner.cpp \
 ogdf/fileformats/DinoXmlScanner.h ogdf/fileformats/DinoLineBuffer.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h
	mkdir -p $(saferelease)/src/fileformats
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/fileformats/DinoXmlScanner.o -c src/fileformats/DinoXmlScanner.cpp

$(release)/src/fileformats/DinoXmlScanner.o: src/fileformats/DinoXmlScanner.cpp \
 ogdf/fileformats/DinoXmlScanner.h ogdf/fileformats/DinoLineBuffer.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h
	mkdir -p $(release)/src/fileformats
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/fileformats/DinoXmlScanner.o -c src/fileformats/DinoXmlScanner.cpp

$(debug)/src/fileformats/GmlParser.o: src/fileformats/GmlParser.cpp ogdf/fileformats/GmlParser.h \
 ogdf/basic/Hashing.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/String.h ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/geometry.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/basic/GraphObserver.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/cluster/ClusterArray.h
	mkdir -p $(debug)/src/fileformats
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/fileformats/GmlParser.o -c src/fileformats/GmlParser.cpp

$(saferelease)/src/fileformats/GmlParser.o: src/fileformats/GmlParser.cpp ogdf/fileformats/GmlParser.h \
 ogdf/basic/Hashing.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/String.h ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/geometry.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/basic/GraphObserver.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/cluster/ClusterArray.h
	mkdir -p $(saferelease)/src/fileformats
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/fileformats/GmlParser.o -c src/fileformats/GmlParser.cpp

$(release)/src/fileformats/GmlParser.o: src/fileformats/GmlParser.cpp ogdf/fileformats/GmlParser.h \
 ogdf/basic/Hashing.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/String.h ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/geometry.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/basic/GraphObserver.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/cluster/ClusterArray.h
	mkdir -p $(release)/src/fileformats
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/fileformats/GmlParser.o -c src/fileformats/GmlParser.cpp

$(debug)/src/fileformats/OgmlParser.o: src/fileformats/OgmlParser.cpp \
 ogdf/fileformats/OgmlParser.h ogdf/fileformats/Ogml.h \
 ogdf/basic/String.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Hashing.h ogdf/fileformats/DinoXmlParser.h ogdf/basic/Stack.h \
 ogdf/basic/SList.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h ogdf/basic/Graph.h \
 ogdf/basic/EdgeArray.h ogdf/basic/geometry.h \
 ogdf/fileformats/DinoXmlScanner.h ogdf/fileformats/DinoLineBuffer.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/GraphObserver.h \
 ogdf/cluster/ClusterGraphAttributes.h ogdf/basic/HashArray.h \
 ogdf/cluster/ClusterArray.h
	mkdir -p $(debug)/src/fileformats
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/fileformats/OgmlParser.o -c src/fileformats/OgmlParser.cpp

$(saferelease)/src/fileformats/OgmlParser.o: src/fileformats/OgmlParser.cpp \
 ogdf/fileformats/OgmlParser.h ogdf/fileformats/Ogml.h \
 ogdf/basic/String.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Hashing.h ogdf/fileformats/DinoXmlParser.h ogdf/basic/Stack.h \
 ogdf/basic/SList.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h ogdf/basic/Graph.h \
 ogdf/basic/EdgeArray.h ogdf/basic/geometry.h \
 ogdf/fileformats/DinoXmlScanner.h ogdf/fileformats/DinoLineBuffer.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/GraphObserver.h \
 ogdf/cluster/ClusterGraphAttributes.h ogdf/basic/HashArray.h \
 ogdf/cluster/ClusterArray.h
	mkdir -p $(saferelease)/src/fileformats
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/fileformats/OgmlParser.o -c src/fileformats/OgmlParser.cpp

$(release)/src/fileformats/OgmlParser.o: src/fileformats/OgmlParser.cpp \
 ogdf/fileformats/OgmlParser.h ogdf/fileformats/Ogml.h \
 ogdf/basic/String.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Hashing.h ogdf/fileformats/DinoXmlParser.h ogdf/basic/Stack.h \
 ogdf/basic/SList.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h ogdf/basic/Graph.h \
 ogdf/basic/EdgeArray.h ogdf/basic/geometry.h \
 ogdf/fileformats/DinoXmlScanner.h ogdf/fileformats/DinoLineBuffer.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/GraphObserver.h \
 ogdf/cluster/ClusterGraphAttributes.h ogdf/basic/HashArray.h \
 ogdf/cluster/ClusterArray.h
	mkdir -p $(release)/src/fileformats
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/fileformats/OgmlParser.o -c src/fileformats/OgmlParser.cpp

$(debug)/src/fileformats/XmlParser.o: src/fileformats/XmlParser.cpp ogdf/fileformats/XmlParser.h \
 ogdf/basic/Hashing.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/String.h ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/geometry.h \
 ogdf/fileformats/XmlObject.h ogdf/basic/SList.h
	mkdir -p $(debug)/src/fileformats
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/fileformats/XmlParser.o -c src/fileformats/XmlParser.cpp

$(saferelease)/src/fileformats/XmlParser.o: src/fileformats/XmlParser.cpp ogdf/fileformats/XmlParser.h \
 ogdf/basic/Hashing.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/String.h ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/geometry.h \
 ogdf/fileformats/XmlObject.h ogdf/basic/SList.h
	mkdir -p $(saferelease)/src/fileformats
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/fileformats/XmlParser.o -c src/fileformats/XmlParser.cpp

$(release)/src/fileformats/XmlParser.o: src/fileformats/XmlParser.cpp ogdf/fileformats/XmlParser.h \
 ogdf/basic/Hashing.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/String.h ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/geometry.h \
 ogdf/fileformats/XmlObject.h ogdf/basic/SList.h
	mkdir -p $(release)/src/fileformats
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/fileformats/XmlParser.o -c src/fileformats/XmlParser.cpp

$(debug)/src/fileformats/simple_graph_load.o: src/fileformats/simple_graph_load.cpp \
 ogdf/fileformats/simple_graph_load.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Logger.h ogdf/basic/HashArray.h ogdf/basic/Hashing.h \
 ogdf/basic/String.h
	mkdir -p $(debug)/src/fileformats
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/fileformats/simple_graph_load.o -c src/fileformats/simple_graph_load.cpp

$(saferelease)/src/fileformats/simple_graph_load.o: src/fileformats/simple_graph_load.cpp \
 ogdf/fileformats/simple_graph_load.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Logger.h ogdf/basic/HashArray.h ogdf/basic/Hashing.h \
 ogdf/basic/String.h
	mkdir -p $(saferelease)/src/fileformats
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/fileformats/simple_graph_load.o -c src/fileformats/simple_graph_load.cpp

$(release)/src/fileformats/simple_graph_load.o: src/fileformats/simple_graph_load.cpp \
 ogdf/fileformats/simple_graph_load.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Logger.h ogdf/basic/HashArray.h ogdf/basic/Hashing.h \
 ogdf/basic/String.h
	mkdir -p $(release)/src/fileformats
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/fileformats/simple_graph_load.o -c src/fileformats/simple_graph_load.cpp

$(debug)/src/graphalg/ConvexHull.o: src/graphalg/ConvexHull.cpp ogdf/graphalg/ConvexHull.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h
	mkdir -p $(debug)/src/graphalg
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/graphalg/ConvexHull.o -c src/graphalg/ConvexHull.cpp

$(saferelease)/src/graphalg/ConvexHull.o: src/graphalg/ConvexHull.cpp ogdf/graphalg/ConvexHull.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h
	mkdir -p $(saferelease)/src/graphalg
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/graphalg/ConvexHull.o -c src/graphalg/ConvexHull.cpp

$(release)/src/graphalg/ConvexHull.o: src/graphalg/ConvexHull.cpp ogdf/graphalg/ConvexHull.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h
	mkdir -p $(release)/src/graphalg
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/graphalg/ConvexHull.o -c src/graphalg/ConvexHull.cpp

$(debug)/src/graphalg/MinCostFlowModule.o: src/graphalg/MinCostFlowModule.cpp \
 ogdf/module/MinCostFlowModule.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/graph_generators.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/basic/GraphObserver.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(debug)/src/graphalg
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/graphalg/MinCostFlowModule.o -c src/graphalg/MinCostFlowModule.cpp

$(saferelease)/src/graphalg/MinCostFlowModule.o: src/graphalg/MinCostFlowModule.cpp \
 ogdf/module/MinCostFlowModule.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/graph_generators.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/basic/GraphObserver.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(saferelease)/src/graphalg
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/graphalg/MinCostFlowModule.o -c src/graphalg/MinCostFlowModule.cpp

$(release)/src/graphalg/MinCostFlowModule.o: src/graphalg/MinCostFlowModule.cpp \
 ogdf/module/MinCostFlowModule.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/graph_generators.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/basic/GraphObserver.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(release)/src/graphalg
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/graphalg/MinCostFlowModule.o -c src/graphalg/MinCostFlowModule.cpp

$(debug)/src/graphalg/MinCostFlowReinelt.o: src/graphalg/MinCostFlowReinelt.cpp \
 ogdf/graphalg/MinCostFlowReinelt.h ogdf/module/MinCostFlowModule.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h
	mkdir -p $(debug)/src/graphalg
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/graphalg/MinCostFlowReinelt.o -c src/graphalg/MinCostFlowReinelt.cpp

$(saferelease)/src/graphalg/MinCostFlowReinelt.o: src/graphalg/MinCostFlowReinelt.cpp \
 ogdf/graphalg/MinCostFlowReinelt.h ogdf/module/MinCostFlowModule.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h
	mkdir -p $(saferelease)/src/graphalg
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/graphalg/MinCostFlowReinelt.o -c src/graphalg/MinCostFlowReinelt.cpp

$(release)/src/graphalg/MinCostFlowReinelt.o: src/graphalg/MinCostFlowReinelt.cpp \
 ogdf/graphalg/MinCostFlowReinelt.h ogdf/module/MinCostFlowModule.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h
	mkdir -p $(release)/src/graphalg
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/graphalg/MinCostFlowReinelt.o -c src/graphalg/MinCostFlowReinelt.cpp

$(debug)/src/graphalg/MinimumCut.o: src/graphalg/MinimumCut.cpp ogdf/basic/BinaryHeap.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/graphalg/MinimumCut.h ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/basic/GraphCopy.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(debug)/src/graphalg
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/graphalg/MinimumCut.o -c src/graphalg/MinimumCut.cpp

$(saferelease)/src/graphalg/MinimumCut.o: src/graphalg/MinimumCut.cpp ogdf/basic/BinaryHeap.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/graphalg/MinimumCut.h ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/basic/GraphCopy.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(saferelease)/src/graphalg
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/graphalg/MinimumCut.o -c src/graphalg/MinimumCut.cpp

$(release)/src/graphalg/MinimumCut.o: src/graphalg/MinimumCut.cpp ogdf/basic/BinaryHeap.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/graphalg/MinimumCut.h ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/basic/GraphCopy.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(release)/src/graphalg
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/graphalg/MinimumCut.o -c src/graphalg/MinimumCut.cpp

$(debug)/src/graphalg/ShortestPathsWithBFM.o: src/graphalg/ShortestPathsWithBFM.cpp \
 ogdf/graphalg/ShortestPathWithBFM.h ogdf/module/ShortestPathModule.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h
	mkdir -p $(debug)/src/graphalg
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/graphalg/ShortestPathsWithBFM.o -c src/graphalg/ShortestPathsWithBFM.cpp

$(saferelease)/src/graphalg/ShortestPathsWithBFM.o: src/graphalg/ShortestPathsWithBFM.cpp \
 ogdf/graphalg/ShortestPathWithBFM.h ogdf/module/ShortestPathModule.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h
	mkdir -p $(saferelease)/src/graphalg
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/graphalg/ShortestPathsWithBFM.o -c src/graphalg/ShortestPathsWithBFM.cpp

$(release)/src/graphalg/ShortestPathsWithBFM.o: src/graphalg/ShortestPathsWithBFM.cpp \
 ogdf/graphalg/ShortestPathWithBFM.h ogdf/module/ShortestPathModule.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h
	mkdir -p $(release)/src/graphalg
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/graphalg/ShortestPathsWithBFM.o -c src/graphalg/ShortestPathsWithBFM.cpp

$(debug)/src/graphalg/mcf_front_reinelt.o: src/graphalg/mcf_front_reinelt.cpp \
 ogdf/graphalg/MinCostFlowReinelt.h ogdf/module/MinCostFlowModule.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h
	mkdir -p $(debug)/src/graphalg
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/graphalg/mcf_front_reinelt.o -c src/graphalg/mcf_front_reinelt.cpp

$(saferelease)/src/graphalg/mcf_front_reinelt.o: src/graphalg/mcf_front_reinelt.cpp \
 ogdf/graphalg/MinCostFlowReinelt.h ogdf/module/MinCostFlowModule.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h
	mkdir -p $(saferelease)/src/graphalg
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/graphalg/mcf_front_reinelt.o -c src/graphalg/mcf_front_reinelt.cpp

$(release)/src/graphalg/mcf_front_reinelt.o: src/graphalg/mcf_front_reinelt.cpp \
 ogdf/graphalg/MinCostFlowReinelt.h ogdf/module/MinCostFlowModule.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h
	mkdir -p $(release)/src/graphalg
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/graphalg/mcf_front_reinelt.o -c src/graphalg/mcf_front_reinelt.cpp

$(debug)/src/incremental/SimpleIncNodeInserter.o: src/incremental/SimpleIncNodeInserter.cpp \
 ogdf/planarity/SimpleIncNodeInserter.h ogdf/planarity/PlanRepInc.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/planarity/PlanRepUML.h \
 ogdf/basic/UMLGraph.h ogdf/basic/GraphObserver.h ogdf/basic/Array2D.h \
 ogdf/basic/IncNodeInserter.h ogdf/basic/Queue.h
	mkdir -p $(debug)/src/incremental
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/incremental/SimpleIncNodeInserter.o -c src/incremental/SimpleIncNodeInserter.cpp

$(saferelease)/src/incremental/SimpleIncNodeInserter.o: src/incremental/SimpleIncNodeInserter.cpp \
 ogdf/planarity/SimpleIncNodeInserter.h ogdf/planarity/PlanRepInc.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/planarity/PlanRepUML.h \
 ogdf/basic/UMLGraph.h ogdf/basic/GraphObserver.h ogdf/basic/Array2D.h \
 ogdf/basic/IncNodeInserter.h ogdf/basic/Queue.h
	mkdir -p $(saferelease)/src/incremental
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/incremental/SimpleIncNodeInserter.o -c src/incremental/SimpleIncNodeInserter.cpp

$(release)/src/incremental/SimpleIncNodeInserter.o: src/incremental/SimpleIncNodeInserter.cpp \
 ogdf/planarity/SimpleIncNodeInserter.h ogdf/planarity/PlanRepInc.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/planarity/PlanRepUML.h \
 ogdf/basic/UMLGraph.h ogdf/basic/GraphObserver.h ogdf/basic/Array2D.h \
 ogdf/basic/IncNodeInserter.h ogdf/basic/Queue.h
	mkdir -p $(release)/src/incremental
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/incremental/SimpleIncNodeInserter.o -c src/incremental/SimpleIncNodeInserter.cpp

$(debug)/src/labeling/ELabelPosSimple.o: src/labeling/ELabelPosSimple.cpp \
 ogdf/labeling/ELabelPosSimple.h ogdf/labeling/ELabelInterface.h \
 ogdf/orthogonal/OrthoLayout.h ogdf/module/LayoutPlanRepModule.h \
 ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/basic/UMLGraph.h ogdf/basic/GridLayout.h \
 ogdf/basic/GridLayoutMapped.h
	mkdir -p $(debug)/src/labeling
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/labeling/ELabelPosSimple.o -c src/labeling/ELabelPosSimple.cpp

$(saferelease)/src/labeling/ELabelPosSimple.o: src/labeling/ELabelPosSimple.cpp \
 ogdf/labeling/ELabelPosSimple.h ogdf/labeling/ELabelInterface.h \
 ogdf/orthogonal/OrthoLayout.h ogdf/module/LayoutPlanRepModule.h \
 ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/basic/UMLGraph.h ogdf/basic/GridLayout.h \
 ogdf/basic/GridLayoutMapped.h
	mkdir -p $(saferelease)/src/labeling
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/labeling/ELabelPosSimple.o -c src/labeling/ELabelPosSimple.cpp

$(release)/src/labeling/ELabelPosSimple.o: src/labeling/ELabelPosSimple.cpp \
 ogdf/labeling/ELabelPosSimple.h ogdf/labeling/ELabelInterface.h \
 ogdf/orthogonal/OrthoLayout.h ogdf/module/LayoutPlanRepModule.h \
 ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/basic/UMLGraph.h ogdf/basic/GridLayout.h \
 ogdf/basic/GridLayoutMapped.h
	mkdir -p $(release)/src/labeling
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/labeling/ELabelPosSimple.o -c src/labeling/ELabelPosSimple.cpp

$(debug)/src/layered/CrossingsMatrix.o: src/layered/CrossingsMatrix.cpp \
 ogdf/layered/CrossingsMatrix.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/Array2D.h ogdf/layered/Hierarchy.h ogdf/layered/Level.h \
 ogdf/basic/SList.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h
	mkdir -p $(debug)/src/layered
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/layered/CrossingsMatrix.o -c src/layered/CrossingsMatrix.cpp

$(saferelease)/src/layered/CrossingsMatrix.o: src/layered/CrossingsMatrix.cpp \
 ogdf/layered/CrossingsMatrix.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/Array2D.h ogdf/layered/Hierarchy.h ogdf/layered/Level.h \
 ogdf/basic/SList.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h
	mkdir -p $(saferelease)/src/layered
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/layered/CrossingsMatrix.o -c src/layered/CrossingsMatrix.cpp

$(release)/src/layered/CrossingsMatrix.o: src/layered/CrossingsMatrix.cpp \
 ogdf/layered/CrossingsMatrix.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/Array2D.h ogdf/layered/Hierarchy.h ogdf/layered/Level.h \
 ogdf/basic/SList.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h
	mkdir -p $(release)/src/layered
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/layered/CrossingsMatrix.o -c src/layered/CrossingsMatrix.cpp

$(debug)/src/layered/FastHierarchyLayout.o: src/layered/FastHierarchyLayout.cpp \
 ogdf/layered/FastHierarchyLayout.h ogdf/module/HierarchyLayoutModule.h \
 ogdf/layered/Hierarchy.h ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/layered/Level.h \
 ogdf/basic/SList.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/GraphCopyAttributes.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/geometry.h
	mkdir -p $(debug)/src/layered
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/layered/FastHierarchyLayout.o -c src/layered/FastHierarchyLayout.cpp

$(saferelease)/src/layered/FastHierarchyLayout.o: src/layered/FastHierarchyLayout.cpp \
 ogdf/layered/FastHierarchyLayout.h ogdf/module/HierarchyLayoutModule.h \
 ogdf/layered/Hierarchy.h ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/layered/Level.h \
 ogdf/basic/SList.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/GraphCopyAttributes.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/geometry.h
	mkdir -p $(saferelease)/src/layered
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/layered/FastHierarchyLayout.o -c src/layered/FastHierarchyLayout.cpp

$(release)/src/layered/FastHierarchyLayout.o: src/layered/FastHierarchyLayout.cpp \
 ogdf/layered/FastHierarchyLayout.h ogdf/module/HierarchyLayoutModule.h \
 ogdf/layered/Hierarchy.h ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/layered/Level.h \
 ogdf/basic/SList.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/GraphCopyAttributes.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/geometry.h
	mkdir -p $(release)/src/layered
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/layered/FastHierarchyLayout.o -c src/layered/FastHierarchyLayout.cpp

$(debug)/src/layered/HierarchyLayoutModule.o: src/layered/HierarchyLayoutModule.cpp \
 ogdf/module/HierarchyLayoutModule.h ogdf/layered/Hierarchy.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/layered/Level.h ogdf/basic/SList.h ogdf/basic/tuples.h \
 ogdf/basic/Hashing.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/GraphCopyAttributes.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/geometry.h ogdf/basic/Queue.h
	mkdir -p $(debug)/src/layered
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/layered/HierarchyLayoutModule.o -c src/layered/HierarchyLayoutModule.cpp

$(saferelease)/src/layered/HierarchyLayoutModule.o: src/layered/HierarchyLayoutModule.cpp \
 ogdf/module/HierarchyLayoutModule.h ogdf/layered/Hierarchy.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/layered/Level.h ogdf/basic/SList.h ogdf/basic/tuples.h \
 ogdf/basic/Hashing.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/GraphCopyAttributes.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/geometry.h ogdf/basic/Queue.h
	mkdir -p $(saferelease)/src/layered
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/layered/HierarchyLayoutModule.o -c src/layered/HierarchyLayoutModule.cpp

$(release)/src/layered/HierarchyLayoutModule.o: src/layered/HierarchyLayoutModule.cpp \
 ogdf/module/HierarchyLayoutModule.h ogdf/layered/Hierarchy.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/layered/Level.h ogdf/basic/SList.h ogdf/basic/tuples.h \
 ogdf/basic/Hashing.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/GraphCopyAttributes.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/geometry.h ogdf/basic/Queue.h
	mkdir -p $(release)/src/layered
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/layered/HierarchyLayoutModule.o -c src/layered/HierarchyLayoutModule.cpp

$(debug)/src/layered/OptimalHierarchyClusterLayout.o: \
 src/layered/OptimalHierarchyClusterLayout.cpp \
 ogdf/layered/OptimalHierarchyClusterLayout.h \
 ogdf/module/HierarchyClusterLayoutModule.h \
 ogdf/cluster/ClusterGraphCopyAttributes.h \
 ogdf/layered/ExtendedNestingGraph.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h ogdf/basic/GraphObserver.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/basic/Hashing.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/geometry.h ogdf/basic/tuples.h \
 ogdf/lpsolver/LPSolver.h ogdf/basic/Array2D.h
	mkdir -p $(debug)/src/layered
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/layered/OptimalHierarchyClusterLayout.o -c src/layered/OptimalHierarchyClusterLayout.cpp

$(saferelease)/src/layered/OptimalHierarchyClusterLayout.o: \
 src/layered/OptimalHierarchyClusterLayout.cpp \
 ogdf/layered/OptimalHierarchyClusterLayout.h \
 ogdf/module/HierarchyClusterLayoutModule.h \
 ogdf/cluster/ClusterGraphCopyAttributes.h \
 ogdf/layered/ExtendedNestingGraph.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h ogdf/basic/GraphObserver.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/basic/Hashing.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/geometry.h ogdf/basic/tuples.h \
 ogdf/lpsolver/LPSolver.h ogdf/basic/Array2D.h
	mkdir -p $(saferelease)/src/layered
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/layered/OptimalHierarchyClusterLayout.o -c src/layered/OptimalHierarchyClusterLayout.cpp

$(release)/src/layered/OptimalHierarchyClusterLayout.o: \
 src/layered/OptimalHierarchyClusterLayout.cpp \
 ogdf/layered/OptimalHierarchyClusterLayout.h \
 ogdf/module/HierarchyClusterLayoutModule.h \
 ogdf/cluster/ClusterGraphCopyAttributes.h \
 ogdf/layered/ExtendedNestingGraph.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h ogdf/basic/GraphObserver.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/basic/Hashing.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/geometry.h ogdf/basic/tuples.h \
 ogdf/lpsolver/LPSolver.h ogdf/basic/Array2D.h
	mkdir -p $(release)/src/layered
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/layered/OptimalHierarchyClusterLayout.o -c src/layered/OptimalHierarchyClusterLayout.cpp

$(debug)/src/layered/OptimalHierarchyLayout.o: src/layered/OptimalHierarchyLayout.cpp \
 ogdf/layered/OptimalHierarchyLayout.h \
 ogdf/module/HierarchyLayoutModule.h ogdf/layered/Hierarchy.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/layered/Level.h ogdf/basic/SList.h ogdf/basic/tuples.h \
 ogdf/basic/Hashing.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/GraphCopyAttributes.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/geometry.h ogdf/lpsolver/LPSolver.h
	mkdir -p $(debug)/src/layered
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/layered/OptimalHierarchyLayout.o -c src/layered/OptimalHierarchyLayout.cpp

$(saferelease)/src/layered/OptimalHierarchyLayout.o: src/layered/OptimalHierarchyLayout.cpp \
 ogdf/layered/OptimalHierarchyLayout.h \
 ogdf/module/HierarchyLayoutModule.h ogdf/layered/Hierarchy.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/layered/Level.h ogdf/basic/SList.h ogdf/basic/tuples.h \
 ogdf/basic/Hashing.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/GraphCopyAttributes.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/geometry.h ogdf/lpsolver/LPSolver.h
	mkdir -p $(saferelease)/src/layered
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/layered/OptimalHierarchyLayout.o -c src/layered/OptimalHierarchyLayout.cpp

$(release)/src/layered/OptimalHierarchyLayout.o: src/layered/OptimalHierarchyLayout.cpp \
 ogdf/layered/OptimalHierarchyLayout.h \
 ogdf/module/HierarchyLayoutModule.h ogdf/layered/Hierarchy.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/layered/Level.h ogdf/basic/SList.h ogdf/basic/tuples.h \
 ogdf/basic/Hashing.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/GraphCopyAttributes.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/geometry.h ogdf/lpsolver/LPSolver.h
	mkdir -p $(release)/src/layered
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/layered/OptimalHierarchyLayout.o -c src/layered/OptimalHierarchyLayout.cpp

$(debug)/src/layered/OptimalRanking.o: src/layered/OptimalRanking.cpp \
 ogdf/layered/OptimalRanking.h ogdf/module/RankingModule.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/module/AcyclicSubgraphModule.h \
 ogdf/basic/ModuleOption.h ogdf/layered/DfsAcyclicSubgraph.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h \
 ogdf/graphalg/MinCostFlowReinelt.h ogdf/module/MinCostFlowModule.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h
	mkdir -p $(debug)/src/layered
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/layered/OptimalRanking.o -c src/layered/OptimalRanking.cpp

$(saferelease)/src/layered/OptimalRanking.o: src/layered/OptimalRanking.cpp \
 ogdf/layered/OptimalRanking.h ogdf/module/RankingModule.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/module/AcyclicSubgraphModule.h \
 ogdf/basic/ModuleOption.h ogdf/layered/DfsAcyclicSubgraph.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h \
 ogdf/graphalg/MinCostFlowReinelt.h ogdf/module/MinCostFlowModule.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h
	mkdir -p $(saferelease)/src/layered
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/layered/OptimalRanking.o -c src/layered/OptimalRanking.cpp

$(release)/src/layered/OptimalRanking.o: src/layered/OptimalRanking.cpp \
 ogdf/layered/OptimalRanking.h ogdf/module/RankingModule.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/module/AcyclicSubgraphModule.h \
 ogdf/basic/ModuleOption.h ogdf/layered/DfsAcyclicSubgraph.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h \
 ogdf/graphalg/MinCostFlowReinelt.h ogdf/module/MinCostFlowModule.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h
	mkdir -p $(release)/src/layered
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/layered/OptimalRanking.o -c src/layered/OptimalRanking.cpp

$(debug)/src/layered/SplitHeuristic.o: src/layered/SplitHeuristic.cpp \
 ogdf/layered/SplitHeuristic.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/layered/CrossingsMatrix.h ogdf/basic/Array2D.h \
 ogdf/layered/Hierarchy.h ogdf/layered/Level.h ogdf/basic/SList.h \
 ogdf/basic/tuples.h ogdf/basic/Hashing.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/simultaneous/TwoLayerCrossMinSimDraw.h \
 ogdf/module/TwoLayerCrossMin.h
	mkdir -p $(debug)/src/layered
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/layered/SplitHeuristic.o -c src/layered/SplitHeuristic.cpp

$(saferelease)/src/layered/SplitHeuristic.o: src/layered/SplitHeuristic.cpp \
 ogdf/layered/SplitHeuristic.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/layered/CrossingsMatrix.h ogdf/basic/Array2D.h \
 ogdf/layered/Hierarchy.h ogdf/layered/Level.h ogdf/basic/SList.h \
 ogdf/basic/tuples.h ogdf/basic/Hashing.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/simultaneous/TwoLayerCrossMinSimDraw.h \
 ogdf/module/TwoLayerCrossMin.h
	mkdir -p $(saferelease)/src/layered
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/layered/SplitHeuristic.o -c src/layered/SplitHeuristic.cpp

$(release)/src/layered/SplitHeuristic.o: src/layered/SplitHeuristic.cpp \
 ogdf/layered/SplitHeuristic.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/layered/CrossingsMatrix.h ogdf/basic/Array2D.h \
 ogdf/layered/Hierarchy.h ogdf/layered/Level.h ogdf/basic/SList.h \
 ogdf/basic/tuples.h ogdf/basic/Hashing.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/simultaneous/TwoLayerCrossMinSimDraw.h \
 ogdf/module/TwoLayerCrossMin.h
	mkdir -p $(release)/src/layered
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/layered/SplitHeuristic.o -c src/layered/SplitHeuristic.cpp

$(debug)/src/layered/acyclic_subgraph.o: src/layered/acyclic_subgraph.cpp \
 ogdf/layered/DfsAcyclicSubgraph.h ogdf/module/AcyclicSubgraphModule.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/layered/GreedyCycleRemoval.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/basic/Queue.h
	mkdir -p $(debug)/src/layered
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/layered/acyclic_subgraph.o -c src/layered/acyclic_subgraph.cpp

$(saferelease)/src/layered/acyclic_subgraph.o: src/layered/acyclic_subgraph.cpp \
 ogdf/layered/DfsAcyclicSubgraph.h ogdf/module/AcyclicSubgraphModule.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/layered/GreedyCycleRemoval.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/basic/Queue.h
	mkdir -p $(saferelease)/src/layered
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/layered/acyclic_subgraph.o -c src/layered/acyclic_subgraph.cpp

$(release)/src/layered/acyclic_subgraph.o: src/layered/acyclic_subgraph.cpp \
 ogdf/layered/DfsAcyclicSubgraph.h ogdf/module/AcyclicSubgraphModule.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/layered/GreedyCycleRemoval.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/basic/Queue.h
	mkdir -p $(release)/src/layered
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/layered/acyclic_subgraph.o -c src/layered/acyclic_subgraph.cpp

$(debug)/src/layered/heuristics.o: src/layered/heuristics.cpp \
 ogdf/layered/BarycenterHeuristic.h ogdf/module/TwoLayerCrossMin.h \
 ogdf/layered/Hierarchy.h ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/layered/Level.h \
 ogdf/basic/SList.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/layered/MedianHeuristic.h
	mkdir -p $(debug)/src/layered
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/layered/heuristics.o -c src/layered/heuristics.cpp

$(saferelease)/src/layered/heuristics.o: src/layered/heuristics.cpp \
 ogdf/layered/BarycenterHeuristic.h ogdf/module/TwoLayerCrossMin.h \
 ogdf/layered/Hierarchy.h ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/layered/Level.h \
 ogdf/basic/SList.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/layered/MedianHeuristic.h
	mkdir -p $(saferelease)/src/layered
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/layered/heuristics.o -c src/layered/heuristics.cpp

$(release)/src/layered/heuristics.o: src/layered/heuristics.cpp \
 ogdf/layered/BarycenterHeuristic.h ogdf/module/TwoLayerCrossMin.h \
 ogdf/layered/Hierarchy.h ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/layered/Level.h \
 ogdf/basic/SList.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/layered/MedianHeuristic.h
	mkdir -p $(release)/src/layered
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/layered/heuristics.o -c src/layered/heuristics.cpp

$(debug)/src/layered/ranking.o: src/layered/ranking.cpp ogdf/layered/LongestPathRanking.h \
 ogdf/module/RankingModule.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/module/AcyclicSubgraphModule.h \
 ogdf/basic/ModuleOption.h ogdf/basic/SList.h ogdf/basic/tuples.h \
 ogdf/basic/Hashing.h ogdf/layered/DfsAcyclicSubgraph.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/geometry.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/Queue.h
	mkdir -p $(debug)/src/layered
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/layered/ranking.o -c src/layered/ranking.cpp

$(saferelease)/src/layered/ranking.o: src/layered/ranking.cpp ogdf/layered/LongestPathRanking.h \
 ogdf/module/RankingModule.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/module/AcyclicSubgraphModule.h \
 ogdf/basic/ModuleOption.h ogdf/basic/SList.h ogdf/basic/tuples.h \
 ogdf/basic/Hashing.h ogdf/layered/DfsAcyclicSubgraph.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/geometry.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/Queue.h
	mkdir -p $(saferelease)/src/layered
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/layered/ranking.o -c src/layered/ranking.cpp

$(release)/src/layered/ranking.o: src/layered/ranking.cpp ogdf/layered/LongestPathRanking.h \
 ogdf/module/RankingModule.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/module/AcyclicSubgraphModule.h \
 ogdf/basic/ModuleOption.h ogdf/basic/SList.h ogdf/basic/tuples.h \
 ogdf/basic/Hashing.h ogdf/layered/DfsAcyclicSubgraph.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/geometry.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/Queue.h
	mkdir -p $(release)/src/layered
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/layered/ranking.o -c src/layered/ranking.cpp

$(debug)/src/layered/sugiyama-cluster.o: src/layered/sugiyama-cluster.cpp \
 ogdf/layered/SugiyamaLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/module/RankingModule.h \
 ogdf/simultaneous/TwoLayerCrossMinSimDraw.h \
 ogdf/module/TwoLayerCrossMin.h ogdf/layered/Hierarchy.h \
 ogdf/layered/Level.h ogdf/basic/SList.h ogdf/basic/tuples.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/module/HierarchyLayoutModule.h \
 ogdf/basic/GraphCopyAttributes.h \
 ogdf/module/HierarchyClusterLayoutModule.h \
 ogdf/cluster/ClusterGraphCopyAttributes.h \
 ogdf/layered/ExtendedNestingGraph.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/Stack.h ogdf/basic/GraphObserver.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/module/CCLayoutPackModule.h \
 ogdf/basic/ModuleOption.h ogdf/basic/simple_graph_alg.h \
 ogdf/layered/OptimalRanking.h ogdf/module/AcyclicSubgraphModule.h \
 ogdf/basic/Queue.h ogdf/basic/Array2D.h ogdf/cluster/ClusterSet.h
	mkdir -p $(debug)/src/layered
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/layered/sugiyama-cluster.o -c src/layered/sugiyama-cluster.cpp

$(saferelease)/src/layered/sugiyama-cluster.o: src/layered/sugiyama-cluster.cpp \
 ogdf/layered/SugiyamaLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/module/RankingModule.h \
 ogdf/simultaneous/TwoLayerCrossMinSimDraw.h \
 ogdf/module/TwoLayerCrossMin.h ogdf/layered/Hierarchy.h \
 ogdf/layered/Level.h ogdf/basic/SList.h ogdf/basic/tuples.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/module/HierarchyLayoutModule.h \
 ogdf/basic/GraphCopyAttributes.h \
 ogdf/module/HierarchyClusterLayoutModule.h \
 ogdf/cluster/ClusterGraphCopyAttributes.h \
 ogdf/layered/ExtendedNestingGraph.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/Stack.h ogdf/basic/GraphObserver.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/module/CCLayoutPackModule.h \
 ogdf/basic/ModuleOption.h ogdf/basic/simple_graph_alg.h \
 ogdf/layered/OptimalRanking.h ogdf/module/AcyclicSubgraphModule.h \
 ogdf/basic/Queue.h ogdf/basic/Array2D.h ogdf/cluster/ClusterSet.h
	mkdir -p $(saferelease)/src/layered
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/layered/sugiyama-cluster.o -c src/layered/sugiyama-cluster.cpp

$(release)/src/layered/sugiyama-cluster.o: src/layered/sugiyama-cluster.cpp \
 ogdf/layered/SugiyamaLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/module/RankingModule.h \
 ogdf/simultaneous/TwoLayerCrossMinSimDraw.h \
 ogdf/module/TwoLayerCrossMin.h ogdf/layered/Hierarchy.h \
 ogdf/layered/Level.h ogdf/basic/SList.h ogdf/basic/tuples.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/module/HierarchyLayoutModule.h \
 ogdf/basic/GraphCopyAttributes.h \
 ogdf/module/HierarchyClusterLayoutModule.h \
 ogdf/cluster/ClusterGraphCopyAttributes.h \
 ogdf/layered/ExtendedNestingGraph.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/Stack.h ogdf/basic/GraphObserver.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/module/CCLayoutPackModule.h \
 ogdf/basic/ModuleOption.h ogdf/basic/simple_graph_alg.h \
 ogdf/layered/OptimalRanking.h ogdf/module/AcyclicSubgraphModule.h \
 ogdf/basic/Queue.h ogdf/basic/Array2D.h ogdf/cluster/ClusterSet.h
	mkdir -p $(release)/src/layered
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/layered/sugiyama-cluster.o -c src/layered/sugiyama-cluster.cpp

$(debug)/src/layered/sugiyama.o: src/layered/sugiyama.cpp ogdf/layered/Hierarchy.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/layered/Level.h ogdf/basic/SList.h ogdf/basic/tuples.h \
 ogdf/basic/Hashing.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/layered/SugiyamaLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/module/RankingModule.h \
 ogdf/simultaneous/TwoLayerCrossMinSimDraw.h \
 ogdf/module/TwoLayerCrossMin.h ogdf/module/HierarchyLayoutModule.h \
 ogdf/basic/GraphCopyAttributes.h \
 ogdf/module/HierarchyClusterLayoutModule.h \
 ogdf/cluster/ClusterGraphCopyAttributes.h \
 ogdf/layered/ExtendedNestingGraph.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/Stack.h ogdf/basic/GraphObserver.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/module/CCLayoutPackModule.h \
 ogdf/basic/ModuleOption.h ogdf/layered/LongestPathRanking.h \
 ogdf/module/AcyclicSubgraphModule.h ogdf/layered/BarycenterHeuristic.h \
 ogdf/layered/SplitHeuristic.h ogdf/layered/CrossingsMatrix.h \
 ogdf/basic/Array2D.h ogdf/layered/FastHierarchyLayout.h \
 ogdf/layered/OptimalHierarchyClusterLayout.h \
 ogdf/packing/TileToRowsCCPacker.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(debug)/src/layered
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/layered/sugiyama.o -c src/layered/sugiyama.cpp

$(saferelease)/src/layered/sugiyama.o: src/layered/sugiyama.cpp ogdf/layered/Hierarchy.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/layered/Level.h ogdf/basic/SList.h ogdf/basic/tuples.h \
 ogdf/basic/Hashing.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/layered/SugiyamaLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/module/RankingModule.h \
 ogdf/simultaneous/TwoLayerCrossMinSimDraw.h \
 ogdf/module/TwoLayerCrossMin.h ogdf/module/HierarchyLayoutModule.h \
 ogdf/basic/GraphCopyAttributes.h \
 ogdf/module/HierarchyClusterLayoutModule.h \
 ogdf/cluster/ClusterGraphCopyAttributes.h \
 ogdf/layered/ExtendedNestingGraph.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/Stack.h ogdf/basic/GraphObserver.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/module/CCLayoutPackModule.h \
 ogdf/basic/ModuleOption.h ogdf/layered/LongestPathRanking.h \
 ogdf/module/AcyclicSubgraphModule.h ogdf/layered/BarycenterHeuristic.h \
 ogdf/layered/SplitHeuristic.h ogdf/layered/CrossingsMatrix.h \
 ogdf/basic/Array2D.h ogdf/layered/FastHierarchyLayout.h \
 ogdf/layered/OptimalHierarchyClusterLayout.h \
 ogdf/packing/TileToRowsCCPacker.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(saferelease)/src/layered
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/layered/sugiyama.o -c src/layered/sugiyama.cpp

$(release)/src/layered/sugiyama.o: src/layered/sugiyama.cpp ogdf/layered/Hierarchy.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/layered/Level.h ogdf/basic/SList.h ogdf/basic/tuples.h \
 ogdf/basic/Hashing.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/layered/SugiyamaLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/module/RankingModule.h \
 ogdf/simultaneous/TwoLayerCrossMinSimDraw.h \
 ogdf/module/TwoLayerCrossMin.h ogdf/module/HierarchyLayoutModule.h \
 ogdf/basic/GraphCopyAttributes.h \
 ogdf/module/HierarchyClusterLayoutModule.h \
 ogdf/cluster/ClusterGraphCopyAttributes.h \
 ogdf/layered/ExtendedNestingGraph.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/Stack.h ogdf/basic/GraphObserver.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/module/CCLayoutPackModule.h \
 ogdf/basic/ModuleOption.h ogdf/layered/LongestPathRanking.h \
 ogdf/module/AcyclicSubgraphModule.h ogdf/layered/BarycenterHeuristic.h \
 ogdf/layered/SplitHeuristic.h ogdf/layered/CrossingsMatrix.h \
 ogdf/basic/Array2D.h ogdf/layered/FastHierarchyLayout.h \
 ogdf/layered/OptimalHierarchyClusterLayout.h \
 ogdf/packing/TileToRowsCCPacker.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(release)/src/layered
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/layered/sugiyama.o -c src/layered/sugiyama.cpp

$(debug)/src/lpsolver/LPSolver_coin.o: src/lpsolver/LPSolver_coin.cpp
	mkdir -p $(debug)/src/lpsolver
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/lpsolver/LPSolver_coin.o -c src/lpsolver/LPSolver_coin.cpp

$(saferelease)/src/lpsolver/LPSolver_coin.o: src/lpsolver/LPSolver_coin.cpp
	mkdir -p $(saferelease)/src/lpsolver
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/lpsolver/LPSolver_coin.o -c src/lpsolver/LPSolver_coin.cpp

$(release)/src/lpsolver/LPSolver_coin.o: src/lpsolver/LPSolver_coin.cpp
	mkdir -p $(release)/src/lpsolver
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/lpsolver/LPSolver_coin.o -c src/lpsolver/LPSolver_coin.cpp

$(debug)/src/misclayout/BalloonLayout.o: src/misclayout/BalloonLayout.cpp \
 ogdf/misclayout/BalloonLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h ogdf/basic/Queue.h \
 ogdf/basic/Stack.h
	mkdir -p $(debug)/src/misclayout
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/misclayout/BalloonLayout.o -c src/misclayout/BalloonLayout.cpp

$(saferelease)/src/misclayout/BalloonLayout.o: src/misclayout/BalloonLayout.cpp \
 ogdf/misclayout/BalloonLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h ogdf/basic/Queue.h \
 ogdf/basic/Stack.h
	mkdir -p $(saferelease)/src/misclayout
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/misclayout/BalloonLayout.o -c src/misclayout/BalloonLayout.cpp

$(release)/src/misclayout/BalloonLayout.o: src/misclayout/BalloonLayout.cpp \
 ogdf/misclayout/BalloonLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h ogdf/basic/Queue.h \
 ogdf/basic/Stack.h
	mkdir -p $(release)/src/misclayout
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/misclayout/BalloonLayout.o -c src/misclayout/BalloonLayout.cpp

$(debug)/src/misclayout/CircularLayout.o: src/misclayout/CircularLayout.cpp \
 ogdf/misclayout/CircularLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h ogdf/basic/Queue.h \
 ogdf/basic/tuples.h ogdf/basic/GraphCopyAttributes.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/packing/TileToRowsCCPacker.h \
 ogdf/module/CCLayoutPackModule.h
	mkdir -p $(debug)/src/misclayout
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/misclayout/CircularLayout.o -c src/misclayout/CircularLayout.cpp

$(saferelease)/src/misclayout/CircularLayout.o: src/misclayout/CircularLayout.cpp \
 ogdf/misclayout/CircularLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h ogdf/basic/Queue.h \
 ogdf/basic/tuples.h ogdf/basic/GraphCopyAttributes.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/packing/TileToRowsCCPacker.h \
 ogdf/module/CCLayoutPackModule.h
	mkdir -p $(saferelease)/src/misclayout
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/misclayout/CircularLayout.o -c src/misclayout/CircularLayout.cpp

$(release)/src/misclayout/CircularLayout.o: src/misclayout/CircularLayout.cpp \
 ogdf/misclayout/CircularLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/SList.h ogdf/basic/Queue.h \
 ogdf/basic/tuples.h ogdf/basic/GraphCopyAttributes.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/packing/TileToRowsCCPacker.h \
 ogdf/module/CCLayoutPackModule.h
	mkdir -p $(release)/src/misclayout
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/misclayout/CircularLayout.o -c src/misclayout/CircularLayout.cpp

$(debug)/src/orthogonal/ClusterOrthoLayout.o: src/orthogonal/ClusterOrthoLayout.cpp \
 ogdf/cluster/ClusterOrthoLayout.h \
 ogdf/module/LayoutClusterPlanRepModule.h ogdf/cluster/ClusterPlanRep.h \
 ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/basic/UMLGraph.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/cluster/ClusterArray.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/GraphObserver.h \
 ogdf/cluster/CPlanarEdgeInserter.h \
 ogdf/cluster/CconnectClusterPlanarEmbed.h \
 ogdf/internal/planarity/EmbedPQTree.h ogdf/internal/planarity/PQTree.h \
 ogdf/basic/Queue.h ogdf/internal/planarity/PQNode.h \
 ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/EmbedIndicator.h \
 ogdf/internal/planarity/EmbedKey.h \
 ogdf/internal/cluster/ClusterPQContainer.h \
 ogdf/orthogonal/LongestPathCompaction.h \
 ogdf/internal/orthogonal/RoutingChannel.h ogdf/basic/GridLayoutMapped.h \
 ogdf/basic/GridLayout.h ogdf/orthogonal/FlowCompaction.h \
 ogdf/orthogonal/MinimumEdgeDistances.h ogdf/orthogonal/EdgeRouter.h \
 ogdf/orthogonal/OrthoLayout.h ogdf/module/LayoutPlanRepModule.h \
 ogdf/internal/orthogonal/NodeInfo.h ogdf/cluster/ClusterOrthoShaper.h
	mkdir -p $(debug)/src/orthogonal
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/orthogonal/ClusterOrthoLayout.o -c src/orthogonal/ClusterOrthoLayout.cpp

$(saferelease)/src/orthogonal/ClusterOrthoLayout.o: src/orthogonal/ClusterOrthoLayout.cpp \
 ogdf/cluster/ClusterOrthoLayout.h \
 ogdf/module/LayoutClusterPlanRepModule.h ogdf/cluster/ClusterPlanRep.h \
 ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/basic/UMLGraph.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/cluster/ClusterArray.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/GraphObserver.h \
 ogdf/cluster/CPlanarEdgeInserter.h \
 ogdf/cluster/CconnectClusterPlanarEmbed.h \
 ogdf/internal/planarity/EmbedPQTree.h ogdf/internal/planarity/PQTree.h \
 ogdf/basic/Queue.h ogdf/internal/planarity/PQNode.h \
 ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/EmbedIndicator.h \
 ogdf/internal/planarity/EmbedKey.h \
 ogdf/internal/cluster/ClusterPQContainer.h \
 ogdf/orthogonal/LongestPathCompaction.h \
 ogdf/internal/orthogonal/RoutingChannel.h ogdf/basic/GridLayoutMapped.h \
 ogdf/basic/GridLayout.h ogdf/orthogonal/FlowCompaction.h \
 ogdf/orthogonal/MinimumEdgeDistances.h ogdf/orthogonal/EdgeRouter.h \
 ogdf/orthogonal/OrthoLayout.h ogdf/module/LayoutPlanRepModule.h \
 ogdf/internal/orthogonal/NodeInfo.h ogdf/cluster/ClusterOrthoShaper.h
	mkdir -p $(saferelease)/src/orthogonal
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/orthogonal/ClusterOrthoLayout.o -c src/orthogonal/ClusterOrthoLayout.cpp

$(release)/src/orthogonal/ClusterOrthoLayout.o: src/orthogonal/ClusterOrthoLayout.cpp \
 ogdf/cluster/ClusterOrthoLayout.h \
 ogdf/module/LayoutClusterPlanRepModule.h ogdf/cluster/ClusterPlanRep.h \
 ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/basic/UMLGraph.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/cluster/ClusterArray.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/GraphObserver.h \
 ogdf/cluster/CPlanarEdgeInserter.h \
 ogdf/cluster/CconnectClusterPlanarEmbed.h \
 ogdf/internal/planarity/EmbedPQTree.h ogdf/internal/planarity/PQTree.h \
 ogdf/basic/Queue.h ogdf/internal/planarity/PQNode.h \
 ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/EmbedIndicator.h \
 ogdf/internal/planarity/EmbedKey.h \
 ogdf/internal/cluster/ClusterPQContainer.h \
 ogdf/orthogonal/LongestPathCompaction.h \
 ogdf/internal/orthogonal/RoutingChannel.h ogdf/basic/GridLayoutMapped.h \
 ogdf/basic/GridLayout.h ogdf/orthogonal/FlowCompaction.h \
 ogdf/orthogonal/MinimumEdgeDistances.h ogdf/orthogonal/EdgeRouter.h \
 ogdf/orthogonal/OrthoLayout.h ogdf/module/LayoutPlanRepModule.h \
 ogdf/internal/orthogonal/NodeInfo.h ogdf/cluster/ClusterOrthoShaper.h
	mkdir -p $(release)/src/orthogonal
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/orthogonal/ClusterOrthoLayout.o -c src/orthogonal/ClusterOrthoLayout.cpp

$(debug)/src/orthogonal/ClusterOrthoShaper.o: src/orthogonal/ClusterOrthoShaper.cpp \
 ogdf/cluster/ClusterOrthoShaper.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/Stack.h ogdf/cluster/ClusterPlanRep.h \
 ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/geometry.h ogdf/basic/UMLGraph.h \
 ogdf/cluster/ClusterGraphAttributes.h ogdf/basic/HashArray.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/GraphObserver.h ogdf/graphalg/MinCostFlowReinelt.h \
 ogdf/module/MinCostFlowModule.h
	mkdir -p $(debug)/src/orthogonal
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/orthogonal/ClusterOrthoShaper.o -c src/orthogonal/ClusterOrthoShaper.cpp

$(saferelease)/src/orthogonal/ClusterOrthoShaper.o: src/orthogonal/ClusterOrthoShaper.cpp \
 ogdf/cluster/ClusterOrthoShaper.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/Stack.h ogdf/cluster/ClusterPlanRep.h \
 ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/geometry.h ogdf/basic/UMLGraph.h \
 ogdf/cluster/ClusterGraphAttributes.h ogdf/basic/HashArray.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/GraphObserver.h ogdf/graphalg/MinCostFlowReinelt.h \
 ogdf/module/MinCostFlowModule.h
	mkdir -p $(saferelease)/src/orthogonal
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/orthogonal/ClusterOrthoShaper.o -c src/orthogonal/ClusterOrthoShaper.cpp

$(release)/src/orthogonal/ClusterOrthoShaper.o: src/orthogonal/ClusterOrthoShaper.cpp \
 ogdf/cluster/ClusterOrthoShaper.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/Stack.h ogdf/cluster/ClusterPlanRep.h \
 ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/geometry.h ogdf/basic/UMLGraph.h \
 ogdf/cluster/ClusterGraphAttributes.h ogdf/basic/HashArray.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/GraphObserver.h ogdf/graphalg/MinCostFlowReinelt.h \
 ogdf/module/MinCostFlowModule.h
	mkdir -p $(release)/src/orthogonal
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/orthogonal/ClusterOrthoShaper.o -c src/orthogonal/ClusterOrthoShaper.cpp

$(debug)/src/orthogonal/CompactionConstraintGraph.o: src/orthogonal/CompactionConstraintGraph.cpp \
 ogdf/orthogonal/CompactionConstraintGraph.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/Stack.h ogdf/internal/orthogonal/RoutingChannel.h \
 ogdf/orthogonal/MinimumEdgeDistances.h ogdf/planarity/PlanRep.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/geometry.h ogdf/basic/simple_graph_alg.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(debug)/src/orthogonal
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/orthogonal/CompactionConstraintGraph.o -c src/orthogonal/CompactionConstraintGraph.cpp

$(saferelease)/src/orthogonal/CompactionConstraintGraph.o: src/orthogonal/CompactionConstraintGraph.cpp \
 ogdf/orthogonal/CompactionConstraintGraph.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/Stack.h ogdf/internal/orthogonal/RoutingChannel.h \
 ogdf/orthogonal/MinimumEdgeDistances.h ogdf/planarity/PlanRep.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/geometry.h ogdf/basic/simple_graph_alg.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(saferelease)/src/orthogonal
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/orthogonal/CompactionConstraintGraph.o -c src/orthogonal/CompactionConstraintGraph.cpp

$(release)/src/orthogonal/CompactionConstraintGraph.o: src/orthogonal/CompactionConstraintGraph.cpp \
 ogdf/orthogonal/CompactionConstraintGraph.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/Stack.h ogdf/internal/orthogonal/RoutingChannel.h \
 ogdf/orthogonal/MinimumEdgeDistances.h ogdf/planarity/PlanRep.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/geometry.h ogdf/basic/simple_graph_alg.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(release)/src/orthogonal
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/orthogonal/CompactionConstraintGraph.o -c src/orthogonal/CompactionConstraintGraph.cpp

$(debug)/src/orthogonal/EdgeRouter.o: src/orthogonal/EdgeRouter.cpp ogdf/orthogonal/EdgeRouter.h \
 ogdf/internal/orthogonal/RoutingChannel.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/Stack.h ogdf/orthogonal/MinimumEdgeDistances.h \
 ogdf/orthogonal/OrthoLayout.h ogdf/module/LayoutPlanRepModule.h \
 ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/geometry.h ogdf/basic/UMLGraph.h ogdf/basic/GridLayout.h \
 ogdf/basic/GridLayoutMapped.h ogdf/internal/orthogonal/NodeInfo.h
	mkdir -p $(debug)/src/orthogonal
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/orthogonal/EdgeRouter.o -c src/orthogonal/EdgeRouter.cpp

$(saferelease)/src/orthogonal/EdgeRouter.o: src/orthogonal/EdgeRouter.cpp ogdf/orthogonal/EdgeRouter.h \
 ogdf/internal/orthogonal/RoutingChannel.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/Stack.h ogdf/orthogonal/MinimumEdgeDistances.h \
 ogdf/orthogonal/OrthoLayout.h ogdf/module/LayoutPlanRepModule.h \
 ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/geometry.h ogdf/basic/UMLGraph.h ogdf/basic/GridLayout.h \
 ogdf/basic/GridLayoutMapped.h ogdf/internal/orthogonal/NodeInfo.h
	mkdir -p $(saferelease)/src/orthogonal
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/orthogonal/EdgeRouter.o -c src/orthogonal/EdgeRouter.cpp

$(release)/src/orthogonal/EdgeRouter.o: src/orthogonal/EdgeRouter.cpp ogdf/orthogonal/EdgeRouter.h \
 ogdf/internal/orthogonal/RoutingChannel.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/Stack.h ogdf/orthogonal/MinimumEdgeDistances.h \
 ogdf/orthogonal/OrthoLayout.h ogdf/module/LayoutPlanRepModule.h \
 ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/geometry.h ogdf/basic/UMLGraph.h ogdf/basic/GridLayout.h \
 ogdf/basic/GridLayoutMapped.h ogdf/internal/orthogonal/NodeInfo.h
	mkdir -p $(release)/src/orthogonal
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/orthogonal/EdgeRouter.o -c src/orthogonal/EdgeRouter.cpp

$(debug)/src/orthogonal/FlowCompaction.o: src/orthogonal/FlowCompaction.cpp \
 ogdf/orthogonal/FlowCompaction.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/Stack.h ogdf/planarity/PlanRep.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/geometry.h ogdf/internal/orthogonal/RoutingChannel.h \
 ogdf/orthogonal/MinimumEdgeDistances.h ogdf/basic/GridLayoutMapped.h \
 ogdf/basic/GridLayout.h ogdf/orthogonal/CompactionConstraintGraph.h \
 ogdf/graphalg/MinCostFlowReinelt.h ogdf/module/MinCostFlowModule.h \
 ogdf/basic/simple_graph_alg.h ogdf/planarity/PlanRepUML.h \
 ogdf/basic/UMLGraph.h
	mkdir -p $(debug)/src/orthogonal
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/orthogonal/FlowCompaction.o -c src/orthogonal/FlowCompaction.cpp

$(saferelease)/src/orthogonal/FlowCompaction.o: src/orthogonal/FlowCompaction.cpp \
 ogdf/orthogonal/FlowCompaction.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/Stack.h ogdf/planarity/PlanRep.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/geometry.h ogdf/internal/orthogonal/RoutingChannel.h \
 ogdf/orthogonal/MinimumEdgeDistances.h ogdf/basic/GridLayoutMapped.h \
 ogdf/basic/GridLayout.h ogdf/orthogonal/CompactionConstraintGraph.h \
 ogdf/graphalg/MinCostFlowReinelt.h ogdf/module/MinCostFlowModule.h \
 ogdf/basic/simple_graph_alg.h ogdf/planarity/PlanRepUML.h \
 ogdf/basic/UMLGraph.h
	mkdir -p $(saferelease)/src/orthogonal
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/orthogonal/FlowCompaction.o -c src/orthogonal/FlowCompaction.cpp

$(release)/src/orthogonal/FlowCompaction.o: src/orthogonal/FlowCompaction.cpp \
 ogdf/orthogonal/FlowCompaction.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/Stack.h ogdf/planarity/PlanRep.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/geometry.h ogdf/internal/orthogonal/RoutingChannel.h \
 ogdf/orthogonal/MinimumEdgeDistances.h ogdf/basic/GridLayoutMapped.h \
 ogdf/basic/GridLayout.h ogdf/orthogonal/CompactionConstraintGraph.h \
 ogdf/graphalg/MinCostFlowReinelt.h ogdf/module/MinCostFlowModule.h \
 ogdf/basic/simple_graph_alg.h ogdf/planarity/PlanRepUML.h \
 ogdf/basic/UMLGraph.h
	mkdir -p $(release)/src/orthogonal
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/orthogonal/FlowCompaction.o -c src/orthogonal/FlowCompaction.cpp

$(debug)/src/orthogonal/LongestPathCompaction.o: src/orthogonal/LongestPathCompaction.cpp \
 ogdf/orthogonal/LongestPathCompaction.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/Stack.h ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/geometry.h ogdf/basic/UMLGraph.h \
 ogdf/internal/orthogonal/RoutingChannel.h ogdf/basic/GridLayoutMapped.h \
 ogdf/basic/GridLayout.h ogdf/orthogonal/CompactionConstraintGraph.h \
 ogdf/orthogonal/MinimumEdgeDistances.h
	mkdir -p $(debug)/src/orthogonal
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/orthogonal/LongestPathCompaction.o -c src/orthogonal/LongestPathCompaction.cpp

$(saferelease)/src/orthogonal/LongestPathCompaction.o: src/orthogonal/LongestPathCompaction.cpp \
 ogdf/orthogonal/LongestPathCompaction.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/Stack.h ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/geometry.h ogdf/basic/UMLGraph.h \
 ogdf/internal/orthogonal/RoutingChannel.h ogdf/basic/GridLayoutMapped.h \
 ogdf/basic/GridLayout.h ogdf/orthogonal/CompactionConstraintGraph.h \
 ogdf/orthogonal/MinimumEdgeDistances.h
	mkdir -p $(saferelease)/src/orthogonal
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/orthogonal/LongestPathCompaction.o -c src/orthogonal/LongestPathCompaction.cpp

$(release)/src/orthogonal/LongestPathCompaction.o: src/orthogonal/LongestPathCompaction.cpp \
 ogdf/orthogonal/LongestPathCompaction.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/Stack.h ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/geometry.h ogdf/basic/UMLGraph.h \
 ogdf/internal/orthogonal/RoutingChannel.h ogdf/basic/GridLayoutMapped.h \
 ogdf/basic/GridLayout.h ogdf/orthogonal/CompactionConstraintGraph.h \
 ogdf/orthogonal/MinimumEdgeDistances.h
	mkdir -p $(release)/src/orthogonal
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/orthogonal/LongestPathCompaction.o -c src/orthogonal/LongestPathCompaction.cpp

$(debug)/src/orthogonal/NodeInfo.o: src/orthogonal/NodeInfo.cpp \
 ogdf/internal/orthogonal/NodeInfo.h \
 ogdf/internal/orthogonal/RoutingChannel.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/Stack.h ogdf/orthogonal/MinimumEdgeDistances.h \
 ogdf/planarity/PlanRep.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/geometry.h \
 ogdf/basic/GridLayout.h
	mkdir -p $(debug)/src/orthogonal
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/orthogonal/NodeInfo.o -c src/orthogonal/NodeInfo.cpp

$(saferelease)/src/orthogonal/NodeInfo.o: src/orthogonal/NodeInfo.cpp \
 ogdf/internal/orthogonal/NodeInfo.h \
 ogdf/internal/orthogonal/RoutingChannel.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/Stack.h ogdf/orthogonal/MinimumEdgeDistances.h \
 ogdf/planarity/PlanRep.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/geometry.h \
 ogdf/basic/GridLayout.h
	mkdir -p $(saferelease)/src/orthogonal
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/orthogonal/NodeInfo.o -c src/orthogonal/NodeInfo.cpp

$(release)/src/orthogonal/NodeInfo.o: src/orthogonal/NodeInfo.cpp \
 ogdf/internal/orthogonal/NodeInfo.h \
 ogdf/internal/orthogonal/RoutingChannel.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/Stack.h ogdf/orthogonal/MinimumEdgeDistances.h \
 ogdf/planarity/PlanRep.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/geometry.h \
 ogdf/basic/GridLayout.h
	mkdir -p $(release)/src/orthogonal
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/orthogonal/NodeInfo.o -c src/orthogonal/NodeInfo.cpp

$(debug)/src/orthogonal/OrthoLayout.o: src/orthogonal/OrthoLayout.cpp \
 ogdf/orthogonal/OrthoLayout.h ogdf/module/LayoutPlanRepModule.h \
 ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/basic/UMLGraph.h ogdf/orthogonal/LongestPathCompaction.h \
 ogdf/internal/orthogonal/RoutingChannel.h ogdf/basic/GridLayoutMapped.h \
 ogdf/basic/GridLayout.h ogdf/orthogonal/FlowCompaction.h \
 ogdf/orthogonal/MinimumEdgeDistances.h ogdf/orthogonal/EdgeRouter.h \
 ogdf/internal/orthogonal/NodeInfo.h ogdf/orthogonal/OrthoShaper.h
	mkdir -p $(debug)/src/orthogonal
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/orthogonal/OrthoLayout.o -c src/orthogonal/OrthoLayout.cpp

$(saferelease)/src/orthogonal/OrthoLayout.o: src/orthogonal/OrthoLayout.cpp \
 ogdf/orthogonal/OrthoLayout.h ogdf/module/LayoutPlanRepModule.h \
 ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/basic/UMLGraph.h ogdf/orthogonal/LongestPathCompaction.h \
 ogdf/internal/orthogonal/RoutingChannel.h ogdf/basic/GridLayoutMapped.h \
 ogdf/basic/GridLayout.h ogdf/orthogonal/FlowCompaction.h \
 ogdf/orthogonal/MinimumEdgeDistances.h ogdf/orthogonal/EdgeRouter.h \
 ogdf/internal/orthogonal/NodeInfo.h ogdf/orthogonal/OrthoShaper.h
	mkdir -p $(saferelease)/src/orthogonal
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/orthogonal/OrthoLayout.o -c src/orthogonal/OrthoLayout.cpp

$(release)/src/orthogonal/OrthoLayout.o: src/orthogonal/OrthoLayout.cpp \
 ogdf/orthogonal/OrthoLayout.h ogdf/module/LayoutPlanRepModule.h \
 ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/basic/UMLGraph.h ogdf/orthogonal/LongestPathCompaction.h \
 ogdf/internal/orthogonal/RoutingChannel.h ogdf/basic/GridLayoutMapped.h \
 ogdf/basic/GridLayout.h ogdf/orthogonal/FlowCompaction.h \
 ogdf/orthogonal/MinimumEdgeDistances.h ogdf/orthogonal/EdgeRouter.h \
 ogdf/internal/orthogonal/NodeInfo.h ogdf/orthogonal/OrthoShaper.h
	mkdir -p $(release)/src/orthogonal
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/orthogonal/OrthoLayout.o -c src/orthogonal/OrthoLayout.cpp

$(debug)/src/orthogonal/OrthoRep.o: src/orthogonal/OrthoRep.cpp ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/Stack.h ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/geometry.h ogdf/basic/UMLGraph.h
	mkdir -p $(debug)/src/orthogonal
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/orthogonal/OrthoRep.o -c src/orthogonal/OrthoRep.cpp

$(saferelease)/src/orthogonal/OrthoRep.o: src/orthogonal/OrthoRep.cpp ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/Stack.h ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/geometry.h ogdf/basic/UMLGraph.h
	mkdir -p $(saferelease)/src/orthogonal
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/orthogonal/OrthoRep.o -c src/orthogonal/OrthoRep.cpp

$(release)/src/orthogonal/OrthoRep.o: src/orthogonal/OrthoRep.cpp ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/Stack.h ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/geometry.h ogdf/basic/UMLGraph.h
	mkdir -p $(release)/src/orthogonal
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/orthogonal/OrthoRep.o -c src/orthogonal/OrthoRep.cpp

$(debug)/src/orthogonal/OrthoShaper.o: src/orthogonal/OrthoShaper.cpp \
 ogdf/orthogonal/OrthoShaper.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/Stack.h ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/geometry.h ogdf/basic/UMLGraph.h \
 ogdf/graphalg/MinCostFlowReinelt.h ogdf/module/MinCostFlowModule.h
	mkdir -p $(debug)/src/orthogonal
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/orthogonal/OrthoShaper.o -c src/orthogonal/OrthoShaper.cpp

$(saferelease)/src/orthogonal/OrthoShaper.o: src/orthogonal/OrthoShaper.cpp \
 ogdf/orthogonal/OrthoShaper.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/Stack.h ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/geometry.h ogdf/basic/UMLGraph.h \
 ogdf/graphalg/MinCostFlowReinelt.h ogdf/module/MinCostFlowModule.h
	mkdir -p $(saferelease)/src/orthogonal
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/orthogonal/OrthoShaper.o -c src/orthogonal/OrthoShaper.cpp

$(release)/src/orthogonal/OrthoShaper.o: src/orthogonal/OrthoShaper.cpp \
 ogdf/orthogonal/OrthoShaper.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/Stack.h ogdf/planarity/PlanRepUML.h ogdf/planarity/PlanRep.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/geometry.h ogdf/basic/UMLGraph.h \
 ogdf/graphalg/MinCostFlowReinelt.h ogdf/module/MinCostFlowModule.h
	mkdir -p $(release)/src/orthogonal
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/orthogonal/OrthoShaper.o -c src/orthogonal/OrthoShaper.cpp

$(debug)/src/packing/CCLayoutPackModule.o: src/packing/CCLayoutPackModule.cpp \
 ogdf/module/CCLayoutPackModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(debug)/src/packing
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/packing/CCLayoutPackModule.o -c src/packing/CCLayoutPackModule.cpp

$(saferelease)/src/packing/CCLayoutPackModule.o: src/packing/CCLayoutPackModule.cpp \
 ogdf/module/CCLayoutPackModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(saferelease)/src/packing
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/packing/CCLayoutPackModule.o -c src/packing/CCLayoutPackModule.cpp

$(release)/src/packing/CCLayoutPackModule.o: src/packing/CCLayoutPackModule.cpp \
 ogdf/module/CCLayoutPackModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h
	mkdir -p $(release)/src/packing
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/packing/CCLayoutPackModule.o -c src/packing/CCLayoutPackModule.cpp

$(debug)/src/packing/ComponentSplitterLayout.o: src/packing/ComponentSplitterLayout.cpp \
 ogdf/packing/ComponentSplitterLayout.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/module/CCLayoutPackModule.h \
 ogdf/packing/TileToRowsCCPacker.h ogdf/module/LayoutModule.h \
 ogdf/graphalg/ConvexHull.h
	mkdir -p $(debug)/src/packing
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/packing/ComponentSplitterLayout.o -c src/packing/ComponentSplitterLayout.cpp

$(saferelease)/src/packing/ComponentSplitterLayout.o: src/packing/ComponentSplitterLayout.cpp \
 ogdf/packing/ComponentSplitterLayout.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/module/CCLayoutPackModule.h \
 ogdf/packing/TileToRowsCCPacker.h ogdf/module/LayoutModule.h \
 ogdf/graphalg/ConvexHull.h
	mkdir -p $(saferelease)/src/packing
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/packing/ComponentSplitterLayout.o -c src/packing/ComponentSplitterLayout.cpp

$(release)/src/packing/ComponentSplitterLayout.o: src/packing/ComponentSplitterLayout.cpp \
 ogdf/packing/ComponentSplitterLayout.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/Graph.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/module/CCLayoutPackModule.h \
 ogdf/packing/TileToRowsCCPacker.h ogdf/module/LayoutModule.h \
 ogdf/graphalg/ConvexHull.h
	mkdir -p $(release)/src/packing
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/packing/ComponentSplitterLayout.o -c src/packing/ComponentSplitterLayout.cpp

$(debug)/src/packing/TileToRowsCCPacker.o: src/packing/TileToRowsCCPacker.cpp \
 ogdf/packing/TileToRowsCCPacker.h ogdf/module/CCLayoutPackModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/basic/SList.h
	mkdir -p $(debug)/src/packing
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/packing/TileToRowsCCPacker.o -c src/packing/TileToRowsCCPacker.cpp

$(saferelease)/src/packing/TileToRowsCCPacker.o: src/packing/TileToRowsCCPacker.cpp \
 ogdf/packing/TileToRowsCCPacker.h ogdf/module/CCLayoutPackModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/basic/SList.h
	mkdir -p $(saferelease)/src/packing
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/packing/TileToRowsCCPacker.o -c src/packing/TileToRowsCCPacker.cpp

$(release)/src/packing/TileToRowsCCPacker.o: src/packing/TileToRowsCCPacker.cpp \
 ogdf/packing/TileToRowsCCPacker.h ogdf/module/CCLayoutPackModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/basic/SList.h
	mkdir -p $(release)/src/packing
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/packing/TileToRowsCCPacker.o -c src/packing/TileToRowsCCPacker.cpp

$(debug)/src/planarity/BoyerMyrvold.o: src/planarity/BoyerMyrvold.cpp \
 ogdf/planarity/BoyerMyrvold.h \
 ogdf/internal/planarity/BoyerMyrvoldPlanar.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/planarity/ExtractKuratowskis.h \
 ogdf/internal/planarity/FindKuratowskis.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/KuratowskiSubdivision.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/BoyerMyrvold.o -c src/planarity/BoyerMyrvold.cpp

$(saferelease)/src/planarity/BoyerMyrvold.o: src/planarity/BoyerMyrvold.cpp \
 ogdf/planarity/BoyerMyrvold.h \
 ogdf/internal/planarity/BoyerMyrvoldPlanar.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/planarity/ExtractKuratowskis.h \
 ogdf/internal/planarity/FindKuratowskis.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/KuratowskiSubdivision.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/BoyerMyrvold.o -c src/planarity/BoyerMyrvold.cpp

$(release)/src/planarity/BoyerMyrvold.o: src/planarity/BoyerMyrvold.cpp \
 ogdf/planarity/BoyerMyrvold.h \
 ogdf/internal/planarity/BoyerMyrvoldPlanar.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/planarity/ExtractKuratowskis.h \
 ogdf/internal/planarity/FindKuratowskis.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/KuratowskiSubdivision.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/BoyerMyrvold.o -c src/planarity/BoyerMyrvold.cpp

$(debug)/src/planarity/BoyerMyrvoldInit.o: src/planarity/BoyerMyrvoldInit.cpp \
 ogdf/internal/planarity/BoyerMyrvoldInit.h \
 ogdf/internal/planarity/BoyerMyrvoldPlanar.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/BoyerMyrvoldInit.o -c src/planarity/BoyerMyrvoldInit.cpp

$(saferelease)/src/planarity/BoyerMyrvoldInit.o: src/planarity/BoyerMyrvoldInit.cpp \
 ogdf/internal/planarity/BoyerMyrvoldInit.h \
 ogdf/internal/planarity/BoyerMyrvoldPlanar.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/BoyerMyrvoldInit.o -c src/planarity/BoyerMyrvoldInit.cpp

$(release)/src/planarity/BoyerMyrvoldInit.o: src/planarity/BoyerMyrvoldInit.cpp \
 ogdf/internal/planarity/BoyerMyrvoldInit.h \
 ogdf/internal/planarity/BoyerMyrvoldPlanar.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/BoyerMyrvoldInit.o -c src/planarity/BoyerMyrvoldInit.cpp

$(debug)/src/planarity/BoyerMyrvoldPlanar.o: src/planarity/BoyerMyrvoldPlanar.cpp \
 ogdf/internal/planarity/BoyerMyrvoldPlanar.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/internal/planarity/BoyerMyrvoldInit.h \
 ogdf/internal/planarity/FindKuratowskis.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/BoyerMyrvoldPlanar.o -c src/planarity/BoyerMyrvoldPlanar.cpp

$(saferelease)/src/planarity/BoyerMyrvoldPlanar.o: src/planarity/BoyerMyrvoldPlanar.cpp \
 ogdf/internal/planarity/BoyerMyrvoldPlanar.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/internal/planarity/BoyerMyrvoldInit.h \
 ogdf/internal/planarity/FindKuratowskis.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/BoyerMyrvoldPlanar.o -c src/planarity/BoyerMyrvoldPlanar.cpp

$(release)/src/planarity/BoyerMyrvoldPlanar.o: src/planarity/BoyerMyrvoldPlanar.cpp \
 ogdf/internal/planarity/BoyerMyrvoldPlanar.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/internal/planarity/BoyerMyrvoldInit.h \
 ogdf/internal/planarity/FindKuratowskis.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/BoyerMyrvoldPlanar.o -c src/planarity/BoyerMyrvoldPlanar.cpp

$(debug)/src/planarity/ClusterPlanRep.o: src/planarity/ClusterPlanRep.cpp \
 ogdf/cluster/ClusterPlanRep.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h \
 ogdf/cluster/ClusterGraphAttributes.h ogdf/basic/HashArray.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/GraphObserver.h ogdf/basic/simple_graph_alg.h \
 ogdf/planarity/PlanarModule.h ogdf/basic/GridLayoutMapped.h \
 ogdf/basic/GridLayout.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/ClusterPlanRep.o -c src/planarity/ClusterPlanRep.cpp

$(saferelease)/src/planarity/ClusterPlanRep.o: src/planarity/ClusterPlanRep.cpp \
 ogdf/cluster/ClusterPlanRep.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h \
 ogdf/cluster/ClusterGraphAttributes.h ogdf/basic/HashArray.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/GraphObserver.h ogdf/basic/simple_graph_alg.h \
 ogdf/planarity/PlanarModule.h ogdf/basic/GridLayoutMapped.h \
 ogdf/basic/GridLayout.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/ClusterPlanRep.o -c src/planarity/ClusterPlanRep.cpp

$(release)/src/planarity/ClusterPlanRep.o: src/planarity/ClusterPlanRep.cpp \
 ogdf/cluster/ClusterPlanRep.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h \
 ogdf/cluster/ClusterGraphAttributes.h ogdf/basic/HashArray.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/GraphObserver.h ogdf/basic/simple_graph_alg.h \
 ogdf/planarity/PlanarModule.h ogdf/basic/GridLayoutMapped.h \
 ogdf/basic/GridLayout.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/ClusterPlanRep.o -c src/planarity/ClusterPlanRep.cpp

$(debug)/src/planarity/EdgeInsertionModule.o: src/planarity/EdgeInsertionModule.cpp \
 ogdf/module/EdgeInsertionModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h \
 ogdf/basic/Logger.h ogdf/basic/Module.h ogdf/basic/Timeouter.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/EdgeInsertionModule.o -c src/planarity/EdgeInsertionModule.cpp

$(saferelease)/src/planarity/EdgeInsertionModule.o: src/planarity/EdgeInsertionModule.cpp \
 ogdf/module/EdgeInsertionModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h \
 ogdf/basic/Logger.h ogdf/basic/Module.h ogdf/basic/Timeouter.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/EdgeInsertionModule.o -c src/planarity/EdgeInsertionModule.cpp

$(release)/src/planarity/EdgeInsertionModule.o: src/planarity/EdgeInsertionModule.cpp \
 ogdf/module/EdgeInsertionModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h \
 ogdf/basic/Logger.h ogdf/basic/Module.h ogdf/basic/Timeouter.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/EdgeInsertionModule.o -c src/planarity/EdgeInsertionModule.cpp

$(debug)/src/planarity/EmbedPQTree.o: src/planarity/EmbedPQTree.cpp \
 ogdf/internal/planarity/EmbedPQTree.h ogdf/internal/planarity/PQTree.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Queue.h \
 ogdf/internal/planarity/PQNode.h ogdf/basic/List.h \
 ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h ogdf/basic/Graph.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/EmbedIndicator.h \
 ogdf/internal/planarity/EmbedKey.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/EmbedPQTree.o -c src/planarity/EmbedPQTree.cpp

$(saferelease)/src/planarity/EmbedPQTree.o: src/planarity/EmbedPQTree.cpp \
 ogdf/internal/planarity/EmbedPQTree.h ogdf/internal/planarity/PQTree.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Queue.h \
 ogdf/internal/planarity/PQNode.h ogdf/basic/List.h \
 ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h ogdf/basic/Graph.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/EmbedIndicator.h \
 ogdf/internal/planarity/EmbedKey.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/EmbedPQTree.o -c src/planarity/EmbedPQTree.cpp

$(release)/src/planarity/EmbedPQTree.o: src/planarity/EmbedPQTree.cpp \
 ogdf/internal/planarity/EmbedPQTree.h ogdf/internal/planarity/PQTree.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Queue.h \
 ogdf/internal/planarity/PQNode.h ogdf/basic/List.h \
 ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h ogdf/basic/Graph.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/EmbedIndicator.h \
 ogdf/internal/planarity/EmbedKey.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/EmbedPQTree.o -c src/planarity/EmbedPQTree.cpp

$(debug)/src/planarity/EmbedderMDMFLengthAttribute.o: \
 src/planarity/EmbedderMDMFLengthAttribute.cpp \
 ogdf/internal/planarity/EmbedderMDMFLengthAttribute.h ogdf/basic/basic.h \
 ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/EmbedderMDMFLengthAttribute.o -c src/planarity/EmbedderMDMFLengthAttribute.cpp

$(saferelease)/src/planarity/EmbedderMDMFLengthAttribute.o: \
 src/planarity/EmbedderMDMFLengthAttribute.cpp \
 ogdf/internal/planarity/EmbedderMDMFLengthAttribute.h ogdf/basic/basic.h \
 ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/EmbedderMDMFLengthAttribute.o -c src/planarity/EmbedderMDMFLengthAttribute.cpp

$(release)/src/planarity/EmbedderMDMFLengthAttribute.o: \
 src/planarity/EmbedderMDMFLengthAttribute.cpp \
 ogdf/internal/planarity/EmbedderMDMFLengthAttribute.h ogdf/basic/basic.h \
 ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/EmbedderMDMFLengthAttribute.o -c src/planarity/EmbedderMDMFLengthAttribute.cpp

$(debug)/src/planarity/EmbedderMaxFace.o: src/planarity/EmbedderMaxFace.cpp \
 ogdf/planarity/EmbedderMaxFace.h ogdf/module/EmbedderModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/Module.h \
 ogdf/basic/Timeouter.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/decomposition/StaticSPQRTree.h \
 ogdf/decomposition/SPQRTree.h ogdf/decomposition/Skeleton.h \
 ogdf/decomposition/PertinentGraph.h ogdf/decomposition/StaticSkeleton.h \
 ogdf/internal/planarity/ConnectedSubgraph.h \
 ogdf/internal/planarity/EmbedderMaxFaceBiconnectedGraphs.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/EmbedderMaxFace.o -c src/planarity/EmbedderMaxFace.cpp

$(saferelease)/src/planarity/EmbedderMaxFace.o: src/planarity/EmbedderMaxFace.cpp \
 ogdf/planarity/EmbedderMaxFace.h ogdf/module/EmbedderModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/Module.h \
 ogdf/basic/Timeouter.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/decomposition/StaticSPQRTree.h \
 ogdf/decomposition/SPQRTree.h ogdf/decomposition/Skeleton.h \
 ogdf/decomposition/PertinentGraph.h ogdf/decomposition/StaticSkeleton.h \
 ogdf/internal/planarity/ConnectedSubgraph.h \
 ogdf/internal/planarity/EmbedderMaxFaceBiconnectedGraphs.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/EmbedderMaxFace.o -c src/planarity/EmbedderMaxFace.cpp

$(release)/src/planarity/EmbedderMaxFace.o: src/planarity/EmbedderMaxFace.cpp \
 ogdf/planarity/EmbedderMaxFace.h ogdf/module/EmbedderModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/Module.h \
 ogdf/basic/Timeouter.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/decomposition/StaticSPQRTree.h \
 ogdf/decomposition/SPQRTree.h ogdf/decomposition/Skeleton.h \
 ogdf/decomposition/PertinentGraph.h ogdf/decomposition/StaticSkeleton.h \
 ogdf/internal/planarity/ConnectedSubgraph.h \
 ogdf/internal/planarity/EmbedderMaxFaceBiconnectedGraphs.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/EmbedderMaxFace.o -c src/planarity/EmbedderMaxFace.cpp

$(debug)/src/planarity/EmbedderMaxFaceLayers.o: src/planarity/EmbedderMaxFaceLayers.cpp \
 ogdf/planarity/EmbedderMaxFaceLayers.h ogdf/module/EmbedderModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/Module.h \
 ogdf/basic/Timeouter.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/decomposition/StaticSPQRTree.h \
 ogdf/decomposition/SPQRTree.h ogdf/decomposition/Skeleton.h \
 ogdf/decomposition/PertinentGraph.h ogdf/decomposition/StaticSkeleton.h \
 ogdf/internal/planarity/EmbedderMaxFaceBiconnectedGraphsLayers.h \
 ogdf/planarity/PlanarModule.h ogdf/graphalg/ShortestPathWithBFM.h \
 ogdf/module/ShortestPathModule.h \
 ogdf/internal/planarity/ConnectedSubgraph.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/EmbedderMaxFaceLayers.o -c src/planarity/EmbedderMaxFaceLayers.cpp

$(saferelease)/src/planarity/EmbedderMaxFaceLayers.o: src/planarity/EmbedderMaxFaceLayers.cpp \
 ogdf/planarity/EmbedderMaxFaceLayers.h ogdf/module/EmbedderModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/Module.h \
 ogdf/basic/Timeouter.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/decomposition/StaticSPQRTree.h \
 ogdf/decomposition/SPQRTree.h ogdf/decomposition/Skeleton.h \
 ogdf/decomposition/PertinentGraph.h ogdf/decomposition/StaticSkeleton.h \
 ogdf/internal/planarity/EmbedderMaxFaceBiconnectedGraphsLayers.h \
 ogdf/planarity/PlanarModule.h ogdf/graphalg/ShortestPathWithBFM.h \
 ogdf/module/ShortestPathModule.h \
 ogdf/internal/planarity/ConnectedSubgraph.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/EmbedderMaxFaceLayers.o -c src/planarity/EmbedderMaxFaceLayers.cpp

$(release)/src/planarity/EmbedderMaxFaceLayers.o: src/planarity/EmbedderMaxFaceLayers.cpp \
 ogdf/planarity/EmbedderMaxFaceLayers.h ogdf/module/EmbedderModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/Module.h \
 ogdf/basic/Timeouter.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/decomposition/StaticSPQRTree.h \
 ogdf/decomposition/SPQRTree.h ogdf/decomposition/Skeleton.h \
 ogdf/decomposition/PertinentGraph.h ogdf/decomposition/StaticSkeleton.h \
 ogdf/internal/planarity/EmbedderMaxFaceBiconnectedGraphsLayers.h \
 ogdf/planarity/PlanarModule.h ogdf/graphalg/ShortestPathWithBFM.h \
 ogdf/module/ShortestPathModule.h \
 ogdf/internal/planarity/ConnectedSubgraph.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/EmbedderMaxFaceLayers.o -c src/planarity/EmbedderMaxFaceLayers.cpp

$(debug)/src/planarity/EmbedderMinDepth.o: src/planarity/EmbedderMinDepth.cpp \
 ogdf/planarity/EmbedderMinDepth.h ogdf/module/EmbedderModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/Module.h \
 ogdf/basic/Timeouter.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/decomposition/StaticSPQRTree.h \
 ogdf/decomposition/SPQRTree.h ogdf/decomposition/Skeleton.h \
 ogdf/decomposition/PertinentGraph.h ogdf/decomposition/StaticSkeleton.h \
 ogdf/internal/planarity/EmbedderMaxFaceBiconnectedGraphs.h \
 ogdf/planarity/PlanarModule.h \
 ogdf/internal/planarity/ConnectedSubgraph.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/EmbedderMinDepth.o -c src/planarity/EmbedderMinDepth.cpp

$(saferelease)/src/planarity/EmbedderMinDepth.o: src/planarity/EmbedderMinDepth.cpp \
 ogdf/planarity/EmbedderMinDepth.h ogdf/module/EmbedderModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/Module.h \
 ogdf/basic/Timeouter.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/decomposition/StaticSPQRTree.h \
 ogdf/decomposition/SPQRTree.h ogdf/decomposition/Skeleton.h \
 ogdf/decomposition/PertinentGraph.h ogdf/decomposition/StaticSkeleton.h \
 ogdf/internal/planarity/EmbedderMaxFaceBiconnectedGraphs.h \
 ogdf/planarity/PlanarModule.h \
 ogdf/internal/planarity/ConnectedSubgraph.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/EmbedderMinDepth.o -c src/planarity/EmbedderMinDepth.cpp

$(release)/src/planarity/EmbedderMinDepth.o: src/planarity/EmbedderMinDepth.cpp \
 ogdf/planarity/EmbedderMinDepth.h ogdf/module/EmbedderModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/Module.h \
 ogdf/basic/Timeouter.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/decomposition/StaticSPQRTree.h \
 ogdf/decomposition/SPQRTree.h ogdf/decomposition/Skeleton.h \
 ogdf/decomposition/PertinentGraph.h ogdf/decomposition/StaticSkeleton.h \
 ogdf/internal/planarity/EmbedderMaxFaceBiconnectedGraphs.h \
 ogdf/planarity/PlanarModule.h \
 ogdf/internal/planarity/ConnectedSubgraph.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/EmbedderMinDepth.o -c src/planarity/EmbedderMinDepth.cpp

$(debug)/src/planarity/EmbedderMinDepthMaxFace.o: src/planarity/EmbedderMinDepthMaxFace.cpp \
 ogdf/planarity/EmbedderMinDepthMaxFace.h ogdf/module/EmbedderModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/Module.h \
 ogdf/basic/Timeouter.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h \
 ogdf/internal/planarity/EmbedderMDMFLengthAttribute.h \
 ogdf/internal/planarity/ConnectedSubgraph.h \
 ogdf/internal/planarity/EmbedderMaxFaceBiconnectedGraphs.h \
 ogdf/decomposition/StaticSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/decomposition/PertinentGraph.h \
 ogdf/decomposition/StaticSkeleton.h ogdf/planarity/PlanarModule.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/EmbedderMinDepthMaxFace.o -c src/planarity/EmbedderMinDepthMaxFace.cpp

$(saferelease)/src/planarity/EmbedderMinDepthMaxFace.o: src/planarity/EmbedderMinDepthMaxFace.cpp \
 ogdf/planarity/EmbedderMinDepthMaxFace.h ogdf/module/EmbedderModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/Module.h \
 ogdf/basic/Timeouter.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h \
 ogdf/internal/planarity/EmbedderMDMFLengthAttribute.h \
 ogdf/internal/planarity/ConnectedSubgraph.h \
 ogdf/internal/planarity/EmbedderMaxFaceBiconnectedGraphs.h \
 ogdf/decomposition/StaticSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/decomposition/PertinentGraph.h \
 ogdf/decomposition/StaticSkeleton.h ogdf/planarity/PlanarModule.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/EmbedderMinDepthMaxFace.o -c src/planarity/EmbedderMinDepthMaxFace.cpp

$(release)/src/planarity/EmbedderMinDepthMaxFace.o: src/planarity/EmbedderMinDepthMaxFace.cpp \
 ogdf/planarity/EmbedderMinDepthMaxFace.h ogdf/module/EmbedderModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/Module.h \
 ogdf/basic/Timeouter.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h \
 ogdf/internal/planarity/EmbedderMDMFLengthAttribute.h \
 ogdf/internal/planarity/ConnectedSubgraph.h \
 ogdf/internal/planarity/EmbedderMaxFaceBiconnectedGraphs.h \
 ogdf/decomposition/StaticSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/decomposition/PertinentGraph.h \
 ogdf/decomposition/StaticSkeleton.h ogdf/planarity/PlanarModule.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/EmbedderMinDepthMaxFace.o -c src/planarity/EmbedderMinDepthMaxFace.cpp

$(debug)/src/planarity/EmbedderMinDepthMaxFaceLayers.o: \
 src/planarity/EmbedderMinDepthMaxFaceLayers.cpp \
 ogdf/planarity/EmbedderMinDepthMaxFaceLayers.h \
 ogdf/module/EmbedderModule.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/basic/Module.h ogdf/basic/Timeouter.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h \
 ogdf/internal/planarity/EmbedderMDMFLengthAttribute.h \
 ogdf/internal/planarity/ConnectedSubgraph.h \
 ogdf/internal/planarity/EmbedderMaxFaceBiconnectedGraphsLayers.h \
 ogdf/decomposition/StaticSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/decomposition/PertinentGraph.h \
 ogdf/decomposition/StaticSkeleton.h ogdf/planarity/PlanarModule.h \
 ogdf/graphalg/ShortestPathWithBFM.h ogdf/module/ShortestPathModule.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/EmbedderMinDepthMaxFaceLayers.o -c src/planarity/EmbedderMinDepthMaxFaceLayers.cpp

$(saferelease)/src/planarity/EmbedderMinDepthMaxFaceLayers.o: \
 src/planarity/EmbedderMinDepthMaxFaceLayers.cpp \
 ogdf/planarity/EmbedderMinDepthMaxFaceLayers.h \
 ogdf/module/EmbedderModule.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/basic/Module.h ogdf/basic/Timeouter.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h \
 ogdf/internal/planarity/EmbedderMDMFLengthAttribute.h \
 ogdf/internal/planarity/ConnectedSubgraph.h \
 ogdf/internal/planarity/EmbedderMaxFaceBiconnectedGraphsLayers.h \
 ogdf/decomposition/StaticSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/decomposition/PertinentGraph.h \
 ogdf/decomposition/StaticSkeleton.h ogdf/planarity/PlanarModule.h \
 ogdf/graphalg/ShortestPathWithBFM.h ogdf/module/ShortestPathModule.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/EmbedderMinDepthMaxFaceLayers.o -c src/planarity/EmbedderMinDepthMaxFaceLayers.cpp

$(release)/src/planarity/EmbedderMinDepthMaxFaceLayers.o: \
 src/planarity/EmbedderMinDepthMaxFaceLayers.cpp \
 ogdf/planarity/EmbedderMinDepthMaxFaceLayers.h \
 ogdf/module/EmbedderModule.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/basic/Module.h ogdf/basic/Timeouter.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h \
 ogdf/internal/planarity/EmbedderMDMFLengthAttribute.h \
 ogdf/internal/planarity/ConnectedSubgraph.h \
 ogdf/internal/planarity/EmbedderMaxFaceBiconnectedGraphsLayers.h \
 ogdf/decomposition/StaticSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/decomposition/PertinentGraph.h \
 ogdf/decomposition/StaticSkeleton.h ogdf/planarity/PlanarModule.h \
 ogdf/graphalg/ShortestPathWithBFM.h ogdf/module/ShortestPathModule.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/EmbedderMinDepthMaxFaceLayers.o -c src/planarity/EmbedderMinDepthMaxFaceLayers.cpp

$(debug)/src/planarity/EmbedderMinDepthPiTa.o: src/planarity/EmbedderMinDepthPiTa.cpp \
 ogdf/planarity/EmbedderMinDepthPiTa.h ogdf/module/EmbedderModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/Module.h \
 ogdf/basic/Timeouter.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/planarity/PlanarModule.h \
 ogdf/internal/planarity/ConnectedSubgraph.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/EmbedderMinDepthPiTa.o -c src/planarity/EmbedderMinDepthPiTa.cpp

$(saferelease)/src/planarity/EmbedderMinDepthPiTa.o: src/planarity/EmbedderMinDepthPiTa.cpp \
 ogdf/planarity/EmbedderMinDepthPiTa.h ogdf/module/EmbedderModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/Module.h \
 ogdf/basic/Timeouter.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/planarity/PlanarModule.h \
 ogdf/internal/planarity/ConnectedSubgraph.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/EmbedderMinDepthPiTa.o -c src/planarity/EmbedderMinDepthPiTa.cpp

$(release)/src/planarity/EmbedderMinDepthPiTa.o: src/planarity/EmbedderMinDepthPiTa.cpp \
 ogdf/planarity/EmbedderMinDepthPiTa.h ogdf/module/EmbedderModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/Module.h \
 ogdf/basic/Timeouter.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/planarity/PlanarModule.h \
 ogdf/internal/planarity/ConnectedSubgraph.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/EmbedderMinDepthPiTa.o -c src/planarity/EmbedderMinDepthPiTa.cpp

$(debug)/src/planarity/ExtractKuratowskis.o: src/planarity/ExtractKuratowskis.cpp \
 ogdf/planarity/ExtractKuratowskis.h \
 ogdf/internal/planarity/BoyerMyrvoldPlanar.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/internal/planarity/FindKuratowskis.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/ExtractKuratowskis.o -c src/planarity/ExtractKuratowskis.cpp

$(saferelease)/src/planarity/ExtractKuratowskis.o: src/planarity/ExtractKuratowskis.cpp \
 ogdf/planarity/ExtractKuratowskis.h \
 ogdf/internal/planarity/BoyerMyrvoldPlanar.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/internal/planarity/FindKuratowskis.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/ExtractKuratowskis.o -c src/planarity/ExtractKuratowskis.cpp

$(release)/src/planarity/ExtractKuratowskis.o: src/planarity/ExtractKuratowskis.cpp \
 ogdf/planarity/ExtractKuratowskis.h \
 ogdf/internal/planarity/BoyerMyrvoldPlanar.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/internal/planarity/FindKuratowskis.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/ExtractKuratowskis.o -c src/planarity/ExtractKuratowskis.cpp

$(debug)/src/planarity/FastPlanarSubgraph.o: src/planarity/FastPlanarSubgraph.cpp \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Array.h ogdf/basic/SList.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/extended_graph_alg.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/Stack.h ogdf/basic/GraphObserver.h \
 ogdf/internal/planarity/PlanarSubgraphPQTree.h \
 ogdf/internal/planarity/PQTree.h ogdf/basic/Queue.h \
 ogdf/internal/planarity/PQNode.h ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/MaxSequencePQTree.h \
 ogdf/internal/planarity/whaInfo.h ogdf/planarity/FastPlanarSubgraph.h \
 ogdf/module/PlanarSubgraphModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/UMLGraph.h \
 ogdf/basic/Module.h ogdf/basic/Logger.h ogdf/basic/Timeouter.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/FastPlanarSubgraph.o -c src/planarity/FastPlanarSubgraph.cpp

$(saferelease)/src/planarity/FastPlanarSubgraph.o: src/planarity/FastPlanarSubgraph.cpp \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Array.h ogdf/basic/SList.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/extended_graph_alg.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/Stack.h ogdf/basic/GraphObserver.h \
 ogdf/internal/planarity/PlanarSubgraphPQTree.h \
 ogdf/internal/planarity/PQTree.h ogdf/basic/Queue.h \
 ogdf/internal/planarity/PQNode.h ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/MaxSequencePQTree.h \
 ogdf/internal/planarity/whaInfo.h ogdf/planarity/FastPlanarSubgraph.h \
 ogdf/module/PlanarSubgraphModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/UMLGraph.h \
 ogdf/basic/Module.h ogdf/basic/Logger.h ogdf/basic/Timeouter.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/FastPlanarSubgraph.o -c src/planarity/FastPlanarSubgraph.cpp

$(release)/src/planarity/FastPlanarSubgraph.o: src/planarity/FastPlanarSubgraph.cpp \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Array.h ogdf/basic/SList.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/extended_graph_alg.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/Stack.h ogdf/basic/GraphObserver.h \
 ogdf/internal/planarity/PlanarSubgraphPQTree.h \
 ogdf/internal/planarity/PQTree.h ogdf/basic/Queue.h \
 ogdf/internal/planarity/PQNode.h ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/MaxSequencePQTree.h \
 ogdf/internal/planarity/whaInfo.h ogdf/planarity/FastPlanarSubgraph.h \
 ogdf/module/PlanarSubgraphModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/UMLGraph.h \
 ogdf/basic/Module.h ogdf/basic/Logger.h ogdf/basic/Timeouter.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/FastPlanarSubgraph.o -c src/planarity/FastPlanarSubgraph.cpp

$(debug)/src/planarity/FindKuratowskis.o: src/planarity/FindKuratowskis.cpp \
 ogdf/internal/planarity/FindKuratowskis.h \
 ogdf/internal/planarity/BoyerMyrvoldPlanar.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/FindKuratowskis.o -c src/planarity/FindKuratowskis.cpp

$(saferelease)/src/planarity/FindKuratowskis.o: src/planarity/FindKuratowskis.cpp \
 ogdf/internal/planarity/FindKuratowskis.h \
 ogdf/internal/planarity/BoyerMyrvoldPlanar.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/FindKuratowskis.o -c src/planarity/FindKuratowskis.cpp

$(release)/src/planarity/FindKuratowskis.o: src/planarity/FindKuratowskis.cpp \
 ogdf/internal/planarity/FindKuratowskis.h \
 ogdf/internal/planarity/BoyerMyrvoldPlanar.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/FindKuratowskis.o -c src/planarity/FindKuratowskis.cpp

$(debug)/src/planarity/FixedEmbeddingInserter.o: src/planarity/FixedEmbeddingInserter.cpp \
 ogdf/planarity/FixedEmbeddingInserter.h \
 ogdf/module/EdgeInsertionModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h \
 ogdf/basic/Logger.h ogdf/basic/Module.h ogdf/basic/Timeouter.h \
 ogdf/basic/Queue.h ogdf/basic/FaceSet.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/FixedEmbeddingInserter.o -c src/planarity/FixedEmbeddingInserter.cpp

$(saferelease)/src/planarity/FixedEmbeddingInserter.o: src/planarity/FixedEmbeddingInserter.cpp \
 ogdf/planarity/FixedEmbeddingInserter.h \
 ogdf/module/EdgeInsertionModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h \
 ogdf/basic/Logger.h ogdf/basic/Module.h ogdf/basic/Timeouter.h \
 ogdf/basic/Queue.h ogdf/basic/FaceSet.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/FixedEmbeddingInserter.o -c src/planarity/FixedEmbeddingInserter.cpp

$(release)/src/planarity/FixedEmbeddingInserter.o: src/planarity/FixedEmbeddingInserter.cpp \
 ogdf/planarity/FixedEmbeddingInserter.h \
 ogdf/module/EdgeInsertionModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h \
 ogdf/basic/Logger.h ogdf/basic/Module.h ogdf/basic/Timeouter.h \
 ogdf/basic/Queue.h ogdf/basic/FaceSet.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/FixedEmbeddingInserter.o -c src/planarity/FixedEmbeddingInserter.cpp

$(debug)/src/planarity/GraphReduction.o: src/planarity/GraphReduction.cpp \
 ogdf/graphalg/GraphReduction.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/GraphReduction.o -c src/planarity/GraphReduction.cpp

$(saferelease)/src/planarity/GraphReduction.o: src/planarity/GraphReduction.cpp \
 ogdf/graphalg/GraphReduction.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/GraphReduction.o -c src/planarity/GraphReduction.cpp

$(release)/src/planarity/GraphReduction.o: src/planarity/GraphReduction.cpp \
 ogdf/graphalg/GraphReduction.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/GraphReduction.o -c src/planarity/GraphReduction.cpp

$(debug)/src/planarity/Layout.o: src/planarity/Layout.cpp ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h ogdf/basic/tuples.h \
 ogdf/basic/Stack.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/Layout.o -c src/planarity/Layout.cpp

$(saferelease)/src/planarity/Layout.o: src/planarity/Layout.cpp ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h ogdf/basic/tuples.h \
 ogdf/basic/Stack.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/Layout.o -c src/planarity/Layout.cpp

$(release)/src/planarity/Layout.o: src/planarity/Layout.cpp ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h ogdf/basic/tuples.h \
 ogdf/basic/Stack.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/Layout.o -c src/planarity/Layout.cpp

$(debug)/src/planarity/LayoutPlanRepModule.o: src/planarity/LayoutPlanRepModule.cpp \
 ogdf/module/LayoutPlanRepModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/LayoutPlanRepModule.o -c src/planarity/LayoutPlanRepModule.cpp

$(saferelease)/src/planarity/LayoutPlanRepModule.o: src/planarity/LayoutPlanRepModule.cpp \
 ogdf/module/LayoutPlanRepModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/LayoutPlanRepModule.o -c src/planarity/LayoutPlanRepModule.cpp

$(release)/src/planarity/LayoutPlanRepModule.o: src/planarity/LayoutPlanRepModule.cpp \
 ogdf/module/LayoutPlanRepModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/LayoutPlanRepModule.o -c src/planarity/LayoutPlanRepModule.cpp

$(debug)/src/planarity/MMCrossingMinimizationModule.o: \
 src/planarity/MMCrossingMinimizationModule.cpp \
 ogdf/module/MMCrossingMinimizationModule.h \
 ogdf/planarity/PlanRepExpansion.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/SList.h ogdf/basic/Module.h ogdf/basic/Logger.h \
 ogdf/basic/simple_graph_alg.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/MMCrossingMinimizationModule.o -c src/planarity/MMCrossingMinimizationModule.cpp

$(saferelease)/src/planarity/MMCrossingMinimizationModule.o: \
 src/planarity/MMCrossingMinimizationModule.cpp \
 ogdf/module/MMCrossingMinimizationModule.h \
 ogdf/planarity/PlanRepExpansion.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/SList.h ogdf/basic/Module.h ogdf/basic/Logger.h \
 ogdf/basic/simple_graph_alg.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/MMCrossingMinimizationModule.o -c src/planarity/MMCrossingMinimizationModule.cpp

$(release)/src/planarity/MMCrossingMinimizationModule.o: \
 src/planarity/MMCrossingMinimizationModule.cpp \
 ogdf/module/MMCrossingMinimizationModule.h \
 ogdf/planarity/PlanRepExpansion.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/SList.h ogdf/basic/Module.h ogdf/basic/Logger.h \
 ogdf/basic/simple_graph_alg.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/MMCrossingMinimizationModule.o -c src/planarity/MMCrossingMinimizationModule.cpp

$(debug)/src/planarity/MMFixedEmbeddingInserter.o: src/planarity/MMFixedEmbeddingInserter.cpp \
 ogdf/planarity/MMFixedEmbeddingInserter.h \
 ogdf/module/MMEdgeInsertionModule.h ogdf/planarity/PlanRepExpansion.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/SList.h ogdf/basic/Module.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/Queue.h ogdf/basic/FaceSet.h \
 ogdf/basic/NodeSet.h ogdf/planarlayout/PlanarStraightLayout.h \
 ogdf/module/GridLayoutModule.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GridLayout.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/orthogonal/OrthoRep.h ogdf/basic/Stack.h \
 ogdf/basic/ModuleOption.h ogdf/module/AugmentationModule.h \
 ogdf/module/ShellingOrderModule.h ogdf/planarlayout/ShellingOrder.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/MMFixedEmbeddingInserter.o -c src/planarity/MMFixedEmbeddingInserter.cpp

$(saferelease)/src/planarity/MMFixedEmbeddingInserter.o: src/planarity/MMFixedEmbeddingInserter.cpp \
 ogdf/planarity/MMFixedEmbeddingInserter.h \
 ogdf/module/MMEdgeInsertionModule.h ogdf/planarity/PlanRepExpansion.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/SList.h ogdf/basic/Module.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/Queue.h ogdf/basic/FaceSet.h \
 ogdf/basic/NodeSet.h ogdf/planarlayout/PlanarStraightLayout.h \
 ogdf/module/GridLayoutModule.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GridLayout.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/orthogonal/OrthoRep.h ogdf/basic/Stack.h \
 ogdf/basic/ModuleOption.h ogdf/module/AugmentationModule.h \
 ogdf/module/ShellingOrderModule.h ogdf/planarlayout/ShellingOrder.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/MMFixedEmbeddingInserter.o -c src/planarity/MMFixedEmbeddingInserter.cpp

$(release)/src/planarity/MMFixedEmbeddingInserter.o: src/planarity/MMFixedEmbeddingInserter.cpp \
 ogdf/planarity/MMFixedEmbeddingInserter.h \
 ogdf/module/MMEdgeInsertionModule.h ogdf/planarity/PlanRepExpansion.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/SList.h ogdf/basic/Module.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/Queue.h ogdf/basic/FaceSet.h \
 ogdf/basic/NodeSet.h ogdf/planarlayout/PlanarStraightLayout.h \
 ogdf/module/GridLayoutModule.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GridLayout.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/orthogonal/OrthoRep.h ogdf/basic/Stack.h \
 ogdf/basic/ModuleOption.h ogdf/module/AugmentationModule.h \
 ogdf/module/ShellingOrderModule.h ogdf/planarlayout/ShellingOrder.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/MMFixedEmbeddingInserter.o -c src/planarity/MMFixedEmbeddingInserter.cpp

$(debug)/src/planarity/MMSubgraphPlanarizer.o: src/planarity/MMSubgraphPlanarizer.cpp \
 ogdf/planarity/MMSubgraphPlanarizer.h \
 ogdf/module/MMCrossingMinimizationModule.h \
 ogdf/planarity/PlanRepExpansion.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/SList.h ogdf/basic/Module.h ogdf/basic/Logger.h \
 ogdf/module/PlanarSubgraphModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/Stack.h ogdf/basic/UMLGraph.h ogdf/basic/Timeouter.h \
 ogdf/module/MMEdgeInsertionModule.h ogdf/basic/ModuleOption.h \
 ogdf/planarity/FastPlanarSubgraph.h \
 ogdf/planarity/MMFixedEmbeddingInserter.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/MMSubgraphPlanarizer.o -c src/planarity/MMSubgraphPlanarizer.cpp

$(saferelease)/src/planarity/MMSubgraphPlanarizer.o: src/planarity/MMSubgraphPlanarizer.cpp \
 ogdf/planarity/MMSubgraphPlanarizer.h \
 ogdf/module/MMCrossingMinimizationModule.h \
 ogdf/planarity/PlanRepExpansion.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/SList.h ogdf/basic/Module.h ogdf/basic/Logger.h \
 ogdf/module/PlanarSubgraphModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/Stack.h ogdf/basic/UMLGraph.h ogdf/basic/Timeouter.h \
 ogdf/module/MMEdgeInsertionModule.h ogdf/basic/ModuleOption.h \
 ogdf/planarity/FastPlanarSubgraph.h \
 ogdf/planarity/MMFixedEmbeddingInserter.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/MMSubgraphPlanarizer.o -c src/planarity/MMSubgraphPlanarizer.cpp

$(release)/src/planarity/MMSubgraphPlanarizer.o: src/planarity/MMSubgraphPlanarizer.cpp \
 ogdf/planarity/MMSubgraphPlanarizer.h \
 ogdf/module/MMCrossingMinimizationModule.h \
 ogdf/planarity/PlanRepExpansion.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/SList.h ogdf/basic/Module.h ogdf/basic/Logger.h \
 ogdf/module/PlanarSubgraphModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/Stack.h ogdf/basic/UMLGraph.h ogdf/basic/Timeouter.h \
 ogdf/module/MMEdgeInsertionModule.h ogdf/basic/ModuleOption.h \
 ogdf/planarity/FastPlanarSubgraph.h \
 ogdf/planarity/MMFixedEmbeddingInserter.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/MMSubgraphPlanarizer.o -c src/planarity/MMSubgraphPlanarizer.cpp

$(debug)/src/planarity/MMVariableEmbeddingInserter.o: \
 src/planarity/MMVariableEmbeddingInserter.cpp \
 ogdf/planarity/MMVariableEmbeddingInserter.h \
 ogdf/module/MMEdgeInsertionModule.h ogdf/planarity/PlanRepExpansion.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/SList.h ogdf/basic/Module.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/NodeSet.h \
 ogdf/basic/simple_graph_alg.h ogdf/decomposition/StaticPlanarSPQRTree.h \
 ogdf/decomposition/StaticSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/decomposition/PertinentGraph.h \
 ogdf/decomposition/StaticSkeleton.h ogdf/decomposition/PlanarSPQRTree.h \
 ogdf/planarity/PlanarModule.h ogdf/basic/String.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/geometry.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/MMVariableEmbeddingInserter.o -c src/planarity/MMVariableEmbeddingInserter.cpp

$(saferelease)/src/planarity/MMVariableEmbeddingInserter.o: \
 src/planarity/MMVariableEmbeddingInserter.cpp \
 ogdf/planarity/MMVariableEmbeddingInserter.h \
 ogdf/module/MMEdgeInsertionModule.h ogdf/planarity/PlanRepExpansion.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/SList.h ogdf/basic/Module.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/NodeSet.h \
 ogdf/basic/simple_graph_alg.h ogdf/decomposition/StaticPlanarSPQRTree.h \
 ogdf/decomposition/StaticSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/decomposition/PertinentGraph.h \
 ogdf/decomposition/StaticSkeleton.h ogdf/decomposition/PlanarSPQRTree.h \
 ogdf/planarity/PlanarModule.h ogdf/basic/String.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/geometry.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/MMVariableEmbeddingInserter.o -c src/planarity/MMVariableEmbeddingInserter.cpp

$(release)/src/planarity/MMVariableEmbeddingInserter.o: \
 src/planarity/MMVariableEmbeddingInserter.cpp \
 ogdf/planarity/MMVariableEmbeddingInserter.h \
 ogdf/module/MMEdgeInsertionModule.h ogdf/planarity/PlanRepExpansion.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/SList.h ogdf/basic/Module.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/NodeSet.h \
 ogdf/basic/simple_graph_alg.h ogdf/decomposition/StaticPlanarSPQRTree.h \
 ogdf/decomposition/StaticSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/decomposition/PertinentGraph.h \
 ogdf/decomposition/StaticSkeleton.h ogdf/decomposition/PlanarSPQRTree.h \
 ogdf/planarity/PlanarModule.h ogdf/basic/String.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/geometry.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/MMVariableEmbeddingInserter.o -c src/planarity/MMVariableEmbeddingInserter.cpp

$(debug)/src/planarity/MaximalPlanarSubgraphSimple.o: \
 src/planarity/MaximalPlanarSubgraphSimple.cpp \
 ogdf/planarity/MaximalPlanarSubgraphSimple.h \
 ogdf/module/PlanarSubgraphModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h \
 ogdf/basic/Module.h ogdf/basic/Logger.h ogdf/basic/Timeouter.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/MaximalPlanarSubgraphSimple.o -c src/planarity/MaximalPlanarSubgraphSimple.cpp

$(saferelease)/src/planarity/MaximalPlanarSubgraphSimple.o: \
 src/planarity/MaximalPlanarSubgraphSimple.cpp \
 ogdf/planarity/MaximalPlanarSubgraphSimple.h \
 ogdf/module/PlanarSubgraphModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h \
 ogdf/basic/Module.h ogdf/basic/Logger.h ogdf/basic/Timeouter.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/MaximalPlanarSubgraphSimple.o -c src/planarity/MaximalPlanarSubgraphSimple.cpp

$(release)/src/planarity/MaximalPlanarSubgraphSimple.o: \
 src/planarity/MaximalPlanarSubgraphSimple.cpp \
 ogdf/planarity/MaximalPlanarSubgraphSimple.h \
 ogdf/module/PlanarSubgraphModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h \
 ogdf/basic/Module.h ogdf/basic/Logger.h ogdf/basic/Timeouter.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/MaximalPlanarSubgraphSimple.o -c src/planarity/MaximalPlanarSubgraphSimple.cpp

$(debug)/src/planarity/MaximumPlanarSubgraph.o: src/planarity/MaximumPlanarSubgraph.cpp
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/MaximumPlanarSubgraph.o -c src/planarity/MaximumPlanarSubgraph.cpp

$(saferelease)/src/planarity/MaximumPlanarSubgraph.o: src/planarity/MaximumPlanarSubgraph.cpp
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/MaximumPlanarSubgraph.o -c src/planarity/MaximumPlanarSubgraph.cpp

$(release)/src/planarity/MaximumPlanarSubgraph.o: src/planarity/MaximumPlanarSubgraph.cpp
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/MaximumPlanarSubgraph.o -c src/planarity/MaximumPlanarSubgraph.cpp

$(debug)/src/planarity/PlanRep.o: src/planarity/PlanRep.cpp ogdf/basic/simple_graph_alg.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/SList.h ogdf/planarity/PlanarModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/PlanRep.o -c src/planarity/PlanRep.cpp

$(saferelease)/src/planarity/PlanRep.o: src/planarity/PlanRep.cpp ogdf/basic/simple_graph_alg.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/SList.h ogdf/planarity/PlanarModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/PlanRep.o -c src/planarity/PlanRep.cpp

$(release)/src/planarity/PlanRep.o: src/planarity/PlanRep.cpp ogdf/basic/simple_graph_alg.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/SList.h ogdf/planarity/PlanarModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/PlanRep.o -c src/planarity/PlanRep.cpp

$(debug)/src/planarity/PlanRepExpansion.o: src/planarity/PlanRepExpansion.cpp \
 ogdf/planarity/PlanRepExpansion.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/SList.h ogdf/basic/simple_graph_alg.h \
 ogdf/planarity/PlanarModule.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/FaceSet.h ogdf/basic/FaceArray.h \
 ogdf/basic/NodeSet.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/PlanRepExpansion.o -c src/planarity/PlanRepExpansion.cpp

$(saferelease)/src/planarity/PlanRepExpansion.o: src/planarity/PlanRepExpansion.cpp \
 ogdf/planarity/PlanRepExpansion.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/SList.h ogdf/basic/simple_graph_alg.h \
 ogdf/planarity/PlanarModule.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/FaceSet.h ogdf/basic/FaceArray.h \
 ogdf/basic/NodeSet.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/PlanRepExpansion.o -c src/planarity/PlanRepExpansion.cpp

$(release)/src/planarity/PlanRepExpansion.o: src/planarity/PlanRepExpansion.cpp \
 ogdf/planarity/PlanRepExpansion.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/SList.h ogdf/basic/simple_graph_alg.h \
 ogdf/planarity/PlanarModule.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/FaceSet.h ogdf/basic/FaceArray.h \
 ogdf/basic/NodeSet.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/PlanRepExpansion.o -c src/planarity/PlanRepExpansion.cpp

$(debug)/src/planarity/PlanRepInc.o: src/planarity/PlanRepInc.cpp ogdf/basic/simple_graph_alg.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/SList.h ogdf/planarity/PlanRepInc.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/planarity/PlanRepUML.h \
 ogdf/basic/UMLGraph.h ogdf/basic/GraphObserver.h ogdf/basic/Array2D.h \
 ogdf/basic/TopologyModule.h ogdf/basic/EdgeComparer.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/PlanRepInc.o -c src/planarity/PlanRepInc.cpp

$(saferelease)/src/planarity/PlanRepInc.o: src/planarity/PlanRepInc.cpp ogdf/basic/simple_graph_alg.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/SList.h ogdf/planarity/PlanRepInc.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/planarity/PlanRepUML.h \
 ogdf/basic/UMLGraph.h ogdf/basic/GraphObserver.h ogdf/basic/Array2D.h \
 ogdf/basic/TopologyModule.h ogdf/basic/EdgeComparer.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/PlanRepInc.o -c src/planarity/PlanRepInc.cpp

$(release)/src/planarity/PlanRepInc.o: src/planarity/PlanRepInc.cpp ogdf/basic/simple_graph_alg.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/SList.h ogdf/planarity/PlanRepInc.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/planarity/PlanRepUML.h \
 ogdf/basic/UMLGraph.h ogdf/basic/GraphObserver.h ogdf/basic/Array2D.h \
 ogdf/basic/TopologyModule.h ogdf/basic/EdgeComparer.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/PlanRepInc.o -c src/planarity/PlanRepInc.cpp

$(debug)/src/planarity/PlanRepUML.o: src/planarity/PlanRepUML.cpp ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h \
 ogdf/basic/GridLayoutMapped.h ogdf/basic/GridLayout.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/PlanRepUML.o -c src/planarity/PlanRepUML.cpp

$(saferelease)/src/planarity/PlanRepUML.o: src/planarity/PlanRepUML.cpp ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h \
 ogdf/basic/GridLayoutMapped.h ogdf/basic/GridLayout.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/PlanRepUML.o -c src/planarity/PlanRepUML.cpp

$(release)/src/planarity/PlanRepUML.o: src/planarity/PlanRepUML.cpp ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h \
 ogdf/basic/GridLayoutMapped.h ogdf/basic/GridLayout.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/PlanRepUML.o -c src/planarity/PlanRepUML.cpp

$(debug)/src/planarity/PlanarModule.o: src/planarity/PlanarModule.cpp ogdf/basic/basic.h \
 ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Array.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Graph.h \
 ogdf/basic/EdgeArray.h ogdf/basic/SList.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/extended_graph_alg.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/Stack.h ogdf/basic/GraphObserver.h \
 ogdf/internal/planarity/PlanarPQTree.h ogdf/internal/planarity/PQTree.h \
 ogdf/basic/Queue.h ogdf/internal/planarity/PQNode.h \
 ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/EmbedKey.h ogdf/planarity/PlanarModule.h \
 ogdf/internal/planarity/EmbedPQTree.h \
 ogdf/internal/planarity/EmbedIndicator.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/PlanarModule.o -c src/planarity/PlanarModule.cpp

$(saferelease)/src/planarity/PlanarModule.o: src/planarity/PlanarModule.cpp ogdf/basic/basic.h \
 ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Array.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Graph.h \
 ogdf/basic/EdgeArray.h ogdf/basic/SList.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/extended_graph_alg.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/Stack.h ogdf/basic/GraphObserver.h \
 ogdf/internal/planarity/PlanarPQTree.h ogdf/internal/planarity/PQTree.h \
 ogdf/basic/Queue.h ogdf/internal/planarity/PQNode.h \
 ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/EmbedKey.h ogdf/planarity/PlanarModule.h \
 ogdf/internal/planarity/EmbedPQTree.h \
 ogdf/internal/planarity/EmbedIndicator.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/PlanarModule.o -c src/planarity/PlanarModule.cpp

$(release)/src/planarity/PlanarModule.o: src/planarity/PlanarModule.cpp ogdf/basic/basic.h \
 ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Array.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Graph.h \
 ogdf/basic/EdgeArray.h ogdf/basic/SList.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/extended_graph_alg.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/Stack.h ogdf/basic/GraphObserver.h \
 ogdf/internal/planarity/PlanarPQTree.h ogdf/internal/planarity/PQTree.h \
 ogdf/basic/Queue.h ogdf/internal/planarity/PQNode.h \
 ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/EmbedKey.h ogdf/planarity/PlanarModule.h \
 ogdf/internal/planarity/EmbedPQTree.h \
 ogdf/internal/planarity/EmbedIndicator.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/PlanarModule.o -c src/planarity/PlanarModule.cpp

$(debug)/src/planarity/PlanarPQTree.o: src/planarity/PlanarPQTree.cpp \
 ogdf/internal/planarity/PlanarPQTree.h ogdf/internal/planarity/PQTree.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Queue.h \
 ogdf/internal/planarity/PQNode.h ogdf/basic/List.h \
 ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h ogdf/basic/Graph.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/EmbedKey.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/PlanarPQTree.o -c src/planarity/PlanarPQTree.cpp

$(saferelease)/src/planarity/PlanarPQTree.o: src/planarity/PlanarPQTree.cpp \
 ogdf/internal/planarity/PlanarPQTree.h ogdf/internal/planarity/PQTree.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Queue.h \
 ogdf/internal/planarity/PQNode.h ogdf/basic/List.h \
 ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h ogdf/basic/Graph.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/EmbedKey.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/PlanarPQTree.o -c src/planarity/PlanarPQTree.cpp

$(release)/src/planarity/PlanarPQTree.o: src/planarity/PlanarPQTree.cpp \
 ogdf/internal/planarity/PlanarPQTree.h ogdf/internal/planarity/PQTree.h \
 ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Queue.h \
 ogdf/internal/planarity/PQNode.h ogdf/basic/List.h \
 ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h ogdf/basic/Graph.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/EmbedKey.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/PlanarPQTree.o -c src/planarity/PlanarPQTree.cpp

$(debug)/src/planarity/PlanarSubgraphModule.o: src/planarity/PlanarSubgraphModule.cpp \
 ogdf/module/PlanarSubgraphModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h \
 ogdf/basic/Module.h ogdf/basic/Logger.h ogdf/basic/Timeouter.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/PlanarSubgraphModule.o -c src/planarity/PlanarSubgraphModule.cpp

$(saferelease)/src/planarity/PlanarSubgraphModule.o: src/planarity/PlanarSubgraphModule.cpp \
 ogdf/module/PlanarSubgraphModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h \
 ogdf/basic/Module.h ogdf/basic/Logger.h ogdf/basic/Timeouter.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/PlanarSubgraphModule.o -c src/planarity/PlanarSubgraphModule.cpp

$(release)/src/planarity/PlanarSubgraphModule.o: src/planarity/PlanarSubgraphModule.cpp \
 ogdf/module/PlanarSubgraphModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h \
 ogdf/basic/Module.h ogdf/basic/Logger.h ogdf/basic/Timeouter.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/PlanarSubgraphModule.o -c src/planarity/PlanarSubgraphModule.cpp

$(debug)/src/planarity/PlanarSubgraphPQTree.o: src/planarity/PlanarSubgraphPQTree.cpp \
 ogdf/internal/planarity/PlanarSubgraphPQTree.h \
 ogdf/internal/planarity/PQTree.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Queue.h \
 ogdf/internal/planarity/PQNode.h ogdf/basic/List.h \
 ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h ogdf/basic/Graph.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/MaxSequencePQTree.h \
 ogdf/internal/planarity/whaInfo.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/PlanarSubgraphPQTree.o -c src/planarity/PlanarSubgraphPQTree.cpp

$(saferelease)/src/planarity/PlanarSubgraphPQTree.o: src/planarity/PlanarSubgraphPQTree.cpp \
 ogdf/internal/planarity/PlanarSubgraphPQTree.h \
 ogdf/internal/planarity/PQTree.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Queue.h \
 ogdf/internal/planarity/PQNode.h ogdf/basic/List.h \
 ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h ogdf/basic/Graph.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/MaxSequencePQTree.h \
 ogdf/internal/planarity/whaInfo.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/PlanarSubgraphPQTree.o -c src/planarity/PlanarSubgraphPQTree.cpp

$(release)/src/planarity/PlanarSubgraphPQTree.o: src/planarity/PlanarSubgraphPQTree.cpp \
 ogdf/internal/planarity/PlanarSubgraphPQTree.h \
 ogdf/internal/planarity/PQTree.h ogdf/basic/Stack.h ogdf/basic/SList.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Queue.h \
 ogdf/internal/planarity/PQNode.h ogdf/basic/List.h \
 ogdf/internal/planarity/PQNodeRoot.h \
 ogdf/internal/planarity/PQInternalNode.h \
 ogdf/internal/planarity/PQLeaf.h ogdf/internal/planarity/PQLeafKey.h \
 ogdf/internal/planarity/PQBasicKey.h \
 ogdf/internal/planarity/PQBasicKeyRoot.h \
 ogdf/internal/planarity/PQInternalKey.h \
 ogdf/internal/planarity/PQNodeKey.h ogdf/basic/Graph.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/internal/planarity/PlanarLeafKey.h \
 ogdf/internal/planarity/MaxSequencePQTree.h \
 ogdf/internal/planarity/whaInfo.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/PlanarSubgraphPQTree.o -c src/planarity/PlanarSubgraphPQTree.cpp

$(debug)/src/planarity/PlanarizationGridLayout.o: src/planarity/PlanarizationGridLayout.cpp \
 ogdf/planarity/PlanarizationGridLayout.h ogdf/module/GridLayoutModule.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GridLayout.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/ModuleOption.h \
 ogdf/module/PlanarSubgraphModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/basic/UMLGraph.h ogdf/basic/Module.h ogdf/basic/Logger.h \
 ogdf/basic/Timeouter.h ogdf/module/EdgeInsertionModule.h \
 ogdf/module/CCLayoutPackModule.h ogdf/planarity/FastPlanarSubgraph.h \
 ogdf/planarity/FixedEmbeddingInserter.h \
 ogdf/planarlayout/MixedModelLayout.h ogdf/module/EmbedderModule.h \
 ogdf/module/AugmentationModule.h ogdf/module/ShellingOrderModule.h \
 ogdf/planarlayout/ShellingOrder.h \
 ogdf/module/MixedModelCrossingsBeautifierModule.h \
 ogdf/packing/TileToRowsCCPacker.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/PlanarizationGridLayout.o -c src/planarity/PlanarizationGridLayout.cpp

$(saferelease)/src/planarity/PlanarizationGridLayout.o: src/planarity/PlanarizationGridLayout.cpp \
 ogdf/planarity/PlanarizationGridLayout.h ogdf/module/GridLayoutModule.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GridLayout.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/ModuleOption.h \
 ogdf/module/PlanarSubgraphModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/basic/UMLGraph.h ogdf/basic/Module.h ogdf/basic/Logger.h \
 ogdf/basic/Timeouter.h ogdf/module/EdgeInsertionModule.h \
 ogdf/module/CCLayoutPackModule.h ogdf/planarity/FastPlanarSubgraph.h \
 ogdf/planarity/FixedEmbeddingInserter.h \
 ogdf/planarlayout/MixedModelLayout.h ogdf/module/EmbedderModule.h \
 ogdf/module/AugmentationModule.h ogdf/module/ShellingOrderModule.h \
 ogdf/planarlayout/ShellingOrder.h \
 ogdf/module/MixedModelCrossingsBeautifierModule.h \
 ogdf/packing/TileToRowsCCPacker.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/PlanarizationGridLayout.o -c src/planarity/PlanarizationGridLayout.cpp

$(release)/src/planarity/PlanarizationGridLayout.o: src/planarity/PlanarizationGridLayout.cpp \
 ogdf/planarity/PlanarizationGridLayout.h ogdf/module/GridLayoutModule.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GridLayout.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/ModuleOption.h \
 ogdf/module/PlanarSubgraphModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/basic/UMLGraph.h ogdf/basic/Module.h ogdf/basic/Logger.h \
 ogdf/basic/Timeouter.h ogdf/module/EdgeInsertionModule.h \
 ogdf/module/CCLayoutPackModule.h ogdf/planarity/FastPlanarSubgraph.h \
 ogdf/planarity/FixedEmbeddingInserter.h \
 ogdf/planarlayout/MixedModelLayout.h ogdf/module/EmbedderModule.h \
 ogdf/module/AugmentationModule.h ogdf/module/ShellingOrderModule.h \
 ogdf/planarlayout/ShellingOrder.h \
 ogdf/module/MixedModelCrossingsBeautifierModule.h \
 ogdf/packing/TileToRowsCCPacker.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/PlanarizationGridLayout.o -c src/planarity/PlanarizationGridLayout.cpp

$(debug)/src/planarity/PlanarizationLayout.o: src/planarity/PlanarizationLayout.cpp \
 ogdf/planarity/PlanarizationLayout.h ogdf/module/UMLLayoutModule.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/UMLGraph.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/SList.h \
 ogdf/module/PlanarSubgraphModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h ogdf/basic/tuples.h \
 ogdf/basic/Stack.h ogdf/basic/Module.h ogdf/basic/Logger.h \
 ogdf/basic/Timeouter.h ogdf/module/EdgeInsertionModule.h \
 ogdf/module/LayoutPlanRepModule.h ogdf/module/CCLayoutPackModule.h \
 ogdf/basic/ModuleOption.h ogdf/module/EmbedderModule.h \
 ogdf/basic/HashArray.h ogdf/planarity/FastPlanarSubgraph.h \
 ogdf/planarity/FixedEmbeddingInserter.h ogdf/planarity/SimpleEmbedder.h \
 ogdf/planarity/PlanarModule.h ogdf/orthogonal/OrthoLayout.h \
 ogdf/packing/TileToRowsCCPacker.h ogdf/basic/TopologyModule.h \
 ogdf/basic/EdgeComparer.h ogdf/basic/precondition.h \
 ogdf/orthogonal/EdgeRouter.h ogdf/internal/orthogonal/RoutingChannel.h \
 ogdf/orthogonal/MinimumEdgeDistances.h ogdf/basic/GridLayout.h \
 ogdf/basic/GridLayoutMapped.h ogdf/internal/orthogonal/NodeInfo.h \
 ogdf/basic/simple_graph_alg.h ogdf/graphalg/CliqueFinder.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/PlanarizationLayout.o -c src/planarity/PlanarizationLayout.cpp

$(saferelease)/src/planarity/PlanarizationLayout.o: src/planarity/PlanarizationLayout.cpp \
 ogdf/planarity/PlanarizationLayout.h ogdf/module/UMLLayoutModule.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/UMLGraph.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/SList.h \
 ogdf/module/PlanarSubgraphModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h ogdf/basic/tuples.h \
 ogdf/basic/Stack.h ogdf/basic/Module.h ogdf/basic/Logger.h \
 ogdf/basic/Timeouter.h ogdf/module/EdgeInsertionModule.h \
 ogdf/module/LayoutPlanRepModule.h ogdf/module/CCLayoutPackModule.h \
 ogdf/basic/ModuleOption.h ogdf/module/EmbedderModule.h \
 ogdf/basic/HashArray.h ogdf/planarity/FastPlanarSubgraph.h \
 ogdf/planarity/FixedEmbeddingInserter.h ogdf/planarity/SimpleEmbedder.h \
 ogdf/planarity/PlanarModule.h ogdf/orthogonal/OrthoLayout.h \
 ogdf/packing/TileToRowsCCPacker.h ogdf/basic/TopologyModule.h \
 ogdf/basic/EdgeComparer.h ogdf/basic/precondition.h \
 ogdf/orthogonal/EdgeRouter.h ogdf/internal/orthogonal/RoutingChannel.h \
 ogdf/orthogonal/MinimumEdgeDistances.h ogdf/basic/GridLayout.h \
 ogdf/basic/GridLayoutMapped.h ogdf/internal/orthogonal/NodeInfo.h \
 ogdf/basic/simple_graph_alg.h ogdf/graphalg/CliqueFinder.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/PlanarizationLayout.o -c src/planarity/PlanarizationLayout.cpp

$(release)/src/planarity/PlanarizationLayout.o: src/planarity/PlanarizationLayout.cpp \
 ogdf/planarity/PlanarizationLayout.h ogdf/module/UMLLayoutModule.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/UMLGraph.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/SList.h \
 ogdf/module/PlanarSubgraphModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h ogdf/basic/tuples.h \
 ogdf/basic/Stack.h ogdf/basic/Module.h ogdf/basic/Logger.h \
 ogdf/basic/Timeouter.h ogdf/module/EdgeInsertionModule.h \
 ogdf/module/LayoutPlanRepModule.h ogdf/module/CCLayoutPackModule.h \
 ogdf/basic/ModuleOption.h ogdf/module/EmbedderModule.h \
 ogdf/basic/HashArray.h ogdf/planarity/FastPlanarSubgraph.h \
 ogdf/planarity/FixedEmbeddingInserter.h ogdf/planarity/SimpleEmbedder.h \
 ogdf/planarity/PlanarModule.h ogdf/orthogonal/OrthoLayout.h \
 ogdf/packing/TileToRowsCCPacker.h ogdf/basic/TopologyModule.h \
 ogdf/basic/EdgeComparer.h ogdf/basic/precondition.h \
 ogdf/orthogonal/EdgeRouter.h ogdf/internal/orthogonal/RoutingChannel.h \
 ogdf/orthogonal/MinimumEdgeDistances.h ogdf/basic/GridLayout.h \
 ogdf/basic/GridLayoutMapped.h ogdf/internal/orthogonal/NodeInfo.h \
 ogdf/basic/simple_graph_alg.h ogdf/graphalg/CliqueFinder.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/PlanarizationLayout.o -c src/planarity/PlanarizationLayout.cpp

$(debug)/src/planarity/PlanarizationLayout_inc.o: src/planarity/PlanarizationLayout_inc.cpp \
 ogdf/planarity/PlanarizationLayout.h ogdf/module/UMLLayoutModule.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/UMLGraph.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/SList.h \
 ogdf/module/PlanarSubgraphModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h ogdf/basic/tuples.h \
 ogdf/basic/Stack.h ogdf/basic/Module.h ogdf/basic/Logger.h \
 ogdf/basic/Timeouter.h ogdf/module/EdgeInsertionModule.h \
 ogdf/module/LayoutPlanRepModule.h ogdf/module/CCLayoutPackModule.h \
 ogdf/basic/ModuleOption.h ogdf/module/EmbedderModule.h \
 ogdf/basic/HashArray.h ogdf/basic/TopologyModule.h \
 ogdf/basic/EdgeComparer.h ogdf/planarity/PlanRepInc.h \
 ogdf/basic/GraphObserver.h ogdf/basic/Array2D.h ogdf/basic/Queue.h \
 ogdf/planarity/SimpleIncNodeInserter.h ogdf/basic/IncNodeInserter.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/PlanarizationLayout_inc.o -c src/planarity/PlanarizationLayout_inc.cpp

$(saferelease)/src/planarity/PlanarizationLayout_inc.o: src/planarity/PlanarizationLayout_inc.cpp \
 ogdf/planarity/PlanarizationLayout.h ogdf/module/UMLLayoutModule.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/UMLGraph.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/SList.h \
 ogdf/module/PlanarSubgraphModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h ogdf/basic/tuples.h \
 ogdf/basic/Stack.h ogdf/basic/Module.h ogdf/basic/Logger.h \
 ogdf/basic/Timeouter.h ogdf/module/EdgeInsertionModule.h \
 ogdf/module/LayoutPlanRepModule.h ogdf/module/CCLayoutPackModule.h \
 ogdf/basic/ModuleOption.h ogdf/module/EmbedderModule.h \
 ogdf/basic/HashArray.h ogdf/basic/TopologyModule.h \
 ogdf/basic/EdgeComparer.h ogdf/planarity/PlanRepInc.h \
 ogdf/basic/GraphObserver.h ogdf/basic/Array2D.h ogdf/basic/Queue.h \
 ogdf/planarity/SimpleIncNodeInserter.h ogdf/basic/IncNodeInserter.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/PlanarizationLayout_inc.o -c src/planarity/PlanarizationLayout_inc.cpp

$(release)/src/planarity/PlanarizationLayout_inc.o: src/planarity/PlanarizationLayout_inc.cpp \
 ogdf/planarity/PlanarizationLayout.h ogdf/module/UMLLayoutModule.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/UMLGraph.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/SList.h \
 ogdf/module/PlanarSubgraphModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h ogdf/basic/tuples.h \
 ogdf/basic/Stack.h ogdf/basic/Module.h ogdf/basic/Logger.h \
 ogdf/basic/Timeouter.h ogdf/module/EdgeInsertionModule.h \
 ogdf/module/LayoutPlanRepModule.h ogdf/module/CCLayoutPackModule.h \
 ogdf/basic/ModuleOption.h ogdf/module/EmbedderModule.h \
 ogdf/basic/HashArray.h ogdf/basic/TopologyModule.h \
 ogdf/basic/EdgeComparer.h ogdf/planarity/PlanRepInc.h \
 ogdf/basic/GraphObserver.h ogdf/basic/Array2D.h ogdf/basic/Queue.h \
 ogdf/planarity/SimpleIncNodeInserter.h ogdf/basic/IncNodeInserter.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/PlanarizationLayout_inc.o -c src/planarity/PlanarizationLayout_inc.cpp

$(debug)/src/planarity/SimpleEmbedder.o: src/planarity/SimpleEmbedder.cpp \
 ogdf/planarity/SimpleEmbedder.h ogdf/module/EmbedderModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/Module.h \
 ogdf/basic/Timeouter.h ogdf/planarity/PlanarModule.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/SimpleEmbedder.o -c src/planarity/SimpleEmbedder.cpp

$(saferelease)/src/planarity/SimpleEmbedder.o: src/planarity/SimpleEmbedder.cpp \
 ogdf/planarity/SimpleEmbedder.h ogdf/module/EmbedderModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/Module.h \
 ogdf/basic/Timeouter.h ogdf/planarity/PlanarModule.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/SimpleEmbedder.o -c src/planarity/SimpleEmbedder.cpp

$(release)/src/planarity/SimpleEmbedder.o: src/planarity/SimpleEmbedder.cpp \
 ogdf/planarity/SimpleEmbedder.h ogdf/module/EmbedderModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/Module.h \
 ogdf/basic/Timeouter.h ogdf/planarity/PlanarModule.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/SimpleEmbedder.o -c src/planarity/SimpleEmbedder.cpp

$(debug)/src/planarity/SubgraphPlanarizer.o: src/planarity/SubgraphPlanarizer.cpp \
 ogdf/planarity/SubgraphPlanarizer.h \
 ogdf/module/CrossingMinimizationModule.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/planarity/PlanarModule.h ogdf/basic/Module.h ogdf/basic/Logger.h \
 ogdf/basic/Timeouter.h ogdf/module/PlanarSubgraphModule.h \
 ogdf/planarity/PlanRepUML.h ogdf/basic/UMLGraph.h \
 ogdf/module/EdgeInsertionModule.h ogdf/basic/ModuleOption.h \
 ogdf/planarity/FastPlanarSubgraph.h \
 ogdf/planarity/VariableEmbeddingInserter.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/SubgraphPlanarizer.o -c src/planarity/SubgraphPlanarizer.cpp

$(saferelease)/src/planarity/SubgraphPlanarizer.o: src/planarity/SubgraphPlanarizer.cpp \
 ogdf/planarity/SubgraphPlanarizer.h \
 ogdf/module/CrossingMinimizationModule.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/planarity/PlanarModule.h ogdf/basic/Module.h ogdf/basic/Logger.h \
 ogdf/basic/Timeouter.h ogdf/module/PlanarSubgraphModule.h \
 ogdf/planarity/PlanRepUML.h ogdf/basic/UMLGraph.h \
 ogdf/module/EdgeInsertionModule.h ogdf/basic/ModuleOption.h \
 ogdf/planarity/FastPlanarSubgraph.h \
 ogdf/planarity/VariableEmbeddingInserter.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/SubgraphPlanarizer.o -c src/planarity/SubgraphPlanarizer.cpp

$(release)/src/planarity/SubgraphPlanarizer.o: src/planarity/SubgraphPlanarizer.cpp \
 ogdf/planarity/SubgraphPlanarizer.h \
 ogdf/module/CrossingMinimizationModule.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/planarity/PlanarModule.h ogdf/basic/Module.h ogdf/basic/Logger.h \
 ogdf/basic/Timeouter.h ogdf/module/PlanarSubgraphModule.h \
 ogdf/planarity/PlanRepUML.h ogdf/basic/UMLGraph.h \
 ogdf/module/EdgeInsertionModule.h ogdf/basic/ModuleOption.h \
 ogdf/planarity/FastPlanarSubgraph.h \
 ogdf/planarity/VariableEmbeddingInserter.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/SubgraphPlanarizer.o -c src/planarity/SubgraphPlanarizer.cpp

$(debug)/src/planarity/TopologyModule.o: src/planarity/TopologyModule.cpp \
 ogdf/planarity/PlanRepInc.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/planarity/PlanRepUML.h ogdf/basic/UMLGraph.h \
 ogdf/basic/GraphObserver.h ogdf/basic/Array2D.h \
 ogdf/basic/TopologyModule.h ogdf/basic/EdgeComparer.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/TopologyModule.o -c src/planarity/TopologyModule.cpp

$(saferelease)/src/planarity/TopologyModule.o: src/planarity/TopologyModule.cpp \
 ogdf/planarity/PlanRepInc.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/planarity/PlanRepUML.h ogdf/basic/UMLGraph.h \
 ogdf/basic/GraphObserver.h ogdf/basic/Array2D.h \
 ogdf/basic/TopologyModule.h ogdf/basic/EdgeComparer.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/TopologyModule.o -c src/planarity/TopologyModule.cpp

$(release)/src/planarity/TopologyModule.o: src/planarity/TopologyModule.cpp \
 ogdf/planarity/PlanRepInc.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/planarity/PlanRepUML.h ogdf/basic/UMLGraph.h \
 ogdf/basic/GraphObserver.h ogdf/basic/Array2D.h \
 ogdf/basic/TopologyModule.h ogdf/basic/EdgeComparer.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/TopologyModule.o -c src/planarity/TopologyModule.cpp

$(debug)/src/planarity/VariableEmbeddingInserter.o: src/planarity/VariableEmbeddingInserter.cpp \
 ogdf/planarity/VariableEmbeddingInserter.h \
 ogdf/module/EdgeInsertionModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h \
 ogdf/basic/Logger.h ogdf/basic/Module.h ogdf/basic/Timeouter.h \
 ogdf/basic/simple_graph_alg.h ogdf/decomposition/StaticPlanarSPQRTree.h \
 ogdf/decomposition/StaticSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/decomposition/PertinentGraph.h \
 ogdf/decomposition/StaticSkeleton.h ogdf/decomposition/PlanarSPQRTree.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/VariableEmbeddingInserter.o -c src/planarity/VariableEmbeddingInserter.cpp

$(saferelease)/src/planarity/VariableEmbeddingInserter.o: src/planarity/VariableEmbeddingInserter.cpp \
 ogdf/planarity/VariableEmbeddingInserter.h \
 ogdf/module/EdgeInsertionModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h \
 ogdf/basic/Logger.h ogdf/basic/Module.h ogdf/basic/Timeouter.h \
 ogdf/basic/simple_graph_alg.h ogdf/decomposition/StaticPlanarSPQRTree.h \
 ogdf/decomposition/StaticSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/decomposition/PertinentGraph.h \
 ogdf/decomposition/StaticSkeleton.h ogdf/decomposition/PlanarSPQRTree.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/VariableEmbeddingInserter.o -c src/planarity/VariableEmbeddingInserter.cpp

$(release)/src/planarity/VariableEmbeddingInserter.o: src/planarity/VariableEmbeddingInserter.cpp \
 ogdf/planarity/VariableEmbeddingInserter.h \
 ogdf/module/EdgeInsertionModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h \
 ogdf/basic/Logger.h ogdf/basic/Module.h ogdf/basic/Timeouter.h \
 ogdf/basic/simple_graph_alg.h ogdf/decomposition/StaticPlanarSPQRTree.h \
 ogdf/decomposition/StaticSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/decomposition/PertinentGraph.h \
 ogdf/decomposition/StaticSkeleton.h ogdf/decomposition/PlanarSPQRTree.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/VariableEmbeddingInserter.o -c src/planarity/VariableEmbeddingInserter.cpp

$(debug)/src/planarity/VariableEmbeddingInserter2.o: \
 src/planarity/VariableEmbeddingInserter2.cpp \
 ogdf/planarity/VariableEmbeddingInserter2.h \
 ogdf/module/EdgeInsertionModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h \
 ogdf/basic/Logger.h ogdf/basic/Module.h ogdf/basic/Timeouter.h \
 ogdf/decomposition/DynamicSPQRForest.h \
 ogdf/decomposition/DynamicBCTree.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/decomposition/PertinentGraph.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(debug)/src/planarity
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarity/VariableEmbeddingInserter2.o -c src/planarity/VariableEmbeddingInserter2.cpp

$(saferelease)/src/planarity/VariableEmbeddingInserter2.o: \
 src/planarity/VariableEmbeddingInserter2.cpp \
 ogdf/planarity/VariableEmbeddingInserter2.h \
 ogdf/module/EdgeInsertionModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h \
 ogdf/basic/Logger.h ogdf/basic/Module.h ogdf/basic/Timeouter.h \
 ogdf/decomposition/DynamicSPQRForest.h \
 ogdf/decomposition/DynamicBCTree.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/decomposition/PertinentGraph.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(saferelease)/src/planarity
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarity/VariableEmbeddingInserter2.o -c src/planarity/VariableEmbeddingInserter2.cpp

$(release)/src/planarity/VariableEmbeddingInserter2.o: \
 src/planarity/VariableEmbeddingInserter2.cpp \
 ogdf/planarity/VariableEmbeddingInserter2.h \
 ogdf/module/EdgeInsertionModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/UMLGraph.h \
 ogdf/basic/Logger.h ogdf/basic/Module.h ogdf/basic/Timeouter.h \
 ogdf/decomposition/DynamicSPQRForest.h \
 ogdf/decomposition/DynamicBCTree.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/decomposition/PertinentGraph.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(release)/src/planarity
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarity/VariableEmbeddingInserter2.o -c src/planarity/VariableEmbeddingInserter2.cpp

$(debug)/src/planarlayout/BiconnectedShellingOrder.o: src/planarlayout/BiconnectedShellingOrder.cpp \
 ogdf/planarlayout/BiconnectedShellingOrder.h \
 ogdf/module/ShellingOrderModule.h ogdf/planarlayout/ShellingOrder.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/SList.h ogdf/planarity/PlanarModule.h \
 ogdf/basic/simple_graph_alg.h
	mkdir -p $(debug)/src/planarlayout
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarlayout/BiconnectedShellingOrder.o -c src/planarlayout/BiconnectedShellingOrder.cpp

$(saferelease)/src/planarlayout/BiconnectedShellingOrder.o: src/planarlayout/BiconnectedShellingOrder.cpp \
 ogdf/planarlayout/BiconnectedShellingOrder.h \
 ogdf/module/ShellingOrderModule.h ogdf/planarlayout/ShellingOrder.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/SList.h ogdf/planarity/PlanarModule.h \
 ogdf/basic/simple_graph_alg.h
	mkdir -p $(saferelease)/src/planarlayout
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarlayout/BiconnectedShellingOrder.o -c src/planarlayout/BiconnectedShellingOrder.cpp

$(release)/src/planarlayout/BiconnectedShellingOrder.o: src/planarlayout/BiconnectedShellingOrder.cpp \
 ogdf/planarlayout/BiconnectedShellingOrder.h \
 ogdf/module/ShellingOrderModule.h ogdf/planarlayout/ShellingOrder.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/SList.h ogdf/planarity/PlanarModule.h \
 ogdf/basic/simple_graph_alg.h
	mkdir -p $(release)/src/planarlayout
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarlayout/BiconnectedShellingOrder.o -c src/planarlayout/BiconnectedShellingOrder.cpp

$(debug)/src/planarlayout/IOPoints.o: src/planarlayout/IOPoints.cpp src/planarlayout/IOPoints.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h
	mkdir -p $(debug)/src/planarlayout
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarlayout/IOPoints.o -c src/planarlayout/IOPoints.cpp

$(saferelease)/src/planarlayout/IOPoints.o: src/planarlayout/IOPoints.cpp src/planarlayout/IOPoints.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h
	mkdir -p $(saferelease)/src/planarlayout
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarlayout/IOPoints.o -c src/planarlayout/IOPoints.cpp

$(release)/src/planarlayout/IOPoints.o: src/planarlayout/IOPoints.cpp src/planarlayout/IOPoints.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h
	mkdir -p $(release)/src/planarlayout
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarlayout/IOPoints.o -c src/planarlayout/IOPoints.cpp

$(debug)/src/planarlayout/MMCBBase.o: src/planarlayout/MMCBBase.cpp \
 ogdf/planarlayout/MMCBDoubleGrid.h ogdf/planarlayout/MMCBBase.h \
 ogdf/module/MixedModelCrossingsBeautifierModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/GridLayout.h \
 ogdf/planarlayout/MMCBLocalStretch.h
	mkdir -p $(debug)/src/planarlayout
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarlayout/MMCBBase.o -c src/planarlayout/MMCBBase.cpp

$(saferelease)/src/planarlayout/MMCBBase.o: src/planarlayout/MMCBBase.cpp \
 ogdf/planarlayout/MMCBDoubleGrid.h ogdf/planarlayout/MMCBBase.h \
 ogdf/module/MixedModelCrossingsBeautifierModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/GridLayout.h \
 ogdf/planarlayout/MMCBLocalStretch.h
	mkdir -p $(saferelease)/src/planarlayout
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarlayout/MMCBBase.o -c src/planarlayout/MMCBBase.cpp

$(release)/src/planarlayout/MMCBBase.o: src/planarlayout/MMCBBase.cpp \
 ogdf/planarlayout/MMCBDoubleGrid.h ogdf/planarlayout/MMCBBase.h \
 ogdf/module/MixedModelCrossingsBeautifierModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/GridLayout.h \
 ogdf/planarlayout/MMCBLocalStretch.h
	mkdir -p $(release)/src/planarlayout
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarlayout/MMCBBase.o -c src/planarlayout/MMCBBase.cpp

$(debug)/src/planarlayout/MixedModelBase.o: src/planarlayout/MixedModelBase.cpp \
 src/planarlayout/MixedModelBase.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/basic/GridLayout.h ogdf/module/AugmentationModule.h \
 ogdf/module/ShellingOrderModule.h ogdf/planarlayout/ShellingOrder.h \
 ogdf/module/EmbedderModule.h ogdf/basic/Module.h ogdf/basic/Timeouter.h \
 src/planarlayout/MMOrder.h src/planarlayout/IOPoints.h \
 ogdf/planarity/PlanarModule.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(debug)/src/planarlayout
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarlayout/MixedModelBase.o -c src/planarlayout/MixedModelBase.cpp

$(saferelease)/src/planarlayout/MixedModelBase.o: src/planarlayout/MixedModelBase.cpp \
 src/planarlayout/MixedModelBase.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/basic/GridLayout.h ogdf/module/AugmentationModule.h \
 ogdf/module/ShellingOrderModule.h ogdf/planarlayout/ShellingOrder.h \
 ogdf/module/EmbedderModule.h ogdf/basic/Module.h ogdf/basic/Timeouter.h \
 src/planarlayout/MMOrder.h src/planarlayout/IOPoints.h \
 ogdf/planarity/PlanarModule.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(saferelease)/src/planarlayout
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarlayout/MixedModelBase.o -c src/planarlayout/MixedModelBase.cpp

$(release)/src/planarlayout/MixedModelBase.o: src/planarlayout/MixedModelBase.cpp \
 src/planarlayout/MixedModelBase.h ogdf/planarity/PlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/basic/GraphAttributes.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h \
 ogdf/basic/FaceArray.h ogdf/basic/tuples.h ogdf/basic/Stack.h \
 ogdf/basic/GridLayout.h ogdf/module/AugmentationModule.h \
 ogdf/module/ShellingOrderModule.h ogdf/planarlayout/ShellingOrder.h \
 ogdf/module/EmbedderModule.h ogdf/basic/Module.h ogdf/basic/Timeouter.h \
 src/planarlayout/MMOrder.h src/planarlayout/IOPoints.h \
 ogdf/planarity/PlanarModule.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(release)/src/planarlayout
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarlayout/MixedModelBase.o -c src/planarlayout/MixedModelBase.cpp

$(debug)/src/planarlayout/MixedModelCrossingsBeautifierModule.o: \
 src/planarlayout/MixedModelCrossingsBeautifierModule.cpp \
 ogdf/module/MixedModelCrossingsBeautifierModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/GridLayout.h
	mkdir -p $(debug)/src/planarlayout
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarlayout/MixedModelCrossingsBeautifierModule.o -c src/planarlayout/MixedModelCrossingsBeautifierModule.cpp

$(saferelease)/src/planarlayout/MixedModelCrossingsBeautifierModule.o: \
 src/planarlayout/MixedModelCrossingsBeautifierModule.cpp \
 ogdf/module/MixedModelCrossingsBeautifierModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/GridLayout.h
	mkdir -p $(saferelease)/src/planarlayout
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarlayout/MixedModelCrossingsBeautifierModule.o -c src/planarlayout/MixedModelCrossingsBeautifierModule.cpp

$(release)/src/planarlayout/MixedModelCrossingsBeautifierModule.o: \
 src/planarlayout/MixedModelCrossingsBeautifierModule.cpp \
 ogdf/module/MixedModelCrossingsBeautifierModule.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/GridLayout.h
	mkdir -p $(release)/src/planarlayout
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarlayout/MixedModelCrossingsBeautifierModule.o -c src/planarlayout/MixedModelCrossingsBeautifierModule.cpp

$(debug)/src/planarlayout/MixedModelLayout.o: src/planarlayout/MixedModelLayout.cpp \
 ogdf/planarlayout/MixedModelLayout.h ogdf/module/GridLayoutModule.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GridLayout.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/ModuleOption.h \
 ogdf/module/EmbedderModule.h ogdf/basic/Module.h ogdf/basic/Timeouter.h \
 ogdf/module/AugmentationModule.h ogdf/module/ShellingOrderModule.h \
 ogdf/planarlayout/ShellingOrder.h \
 ogdf/module/MixedModelCrossingsBeautifierModule.h \
 ogdf/augmentation/PlanarAugmentation.h \
 ogdf/decomposition/DynamicBCTree.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/augmentation/PlanarAugmentationFix.h \
 ogdf/planarlayout/BiconnectedShellingOrder.h \
 ogdf/planarity/SimpleEmbedder.h ogdf/planarity/PlanarModule.h \
 src/planarlayout/MixedModelBase.h src/planarlayout/MMOrder.h \
 src/planarlayout/IOPoints.h
	mkdir -p $(debug)/src/planarlayout
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarlayout/MixedModelLayout.o -c src/planarlayout/MixedModelLayout.cpp

$(saferelease)/src/planarlayout/MixedModelLayout.o: src/planarlayout/MixedModelLayout.cpp \
 ogdf/planarlayout/MixedModelLayout.h ogdf/module/GridLayoutModule.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GridLayout.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/ModuleOption.h \
 ogdf/module/EmbedderModule.h ogdf/basic/Module.h ogdf/basic/Timeouter.h \
 ogdf/module/AugmentationModule.h ogdf/module/ShellingOrderModule.h \
 ogdf/planarlayout/ShellingOrder.h \
 ogdf/module/MixedModelCrossingsBeautifierModule.h \
 ogdf/augmentation/PlanarAugmentation.h \
 ogdf/decomposition/DynamicBCTree.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/augmentation/PlanarAugmentationFix.h \
 ogdf/planarlayout/BiconnectedShellingOrder.h \
 ogdf/planarity/SimpleEmbedder.h ogdf/planarity/PlanarModule.h \
 src/planarlayout/MixedModelBase.h src/planarlayout/MMOrder.h \
 src/planarlayout/IOPoints.h
	mkdir -p $(saferelease)/src/planarlayout
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarlayout/MixedModelLayout.o -c src/planarlayout/MixedModelLayout.cpp

$(release)/src/planarlayout/MixedModelLayout.o: src/planarlayout/MixedModelLayout.cpp \
 ogdf/planarlayout/MixedModelLayout.h ogdf/module/GridLayoutModule.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GridLayout.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/ModuleOption.h \
 ogdf/module/EmbedderModule.h ogdf/basic/Module.h ogdf/basic/Timeouter.h \
 ogdf/module/AugmentationModule.h ogdf/module/ShellingOrderModule.h \
 ogdf/planarlayout/ShellingOrder.h \
 ogdf/module/MixedModelCrossingsBeautifierModule.h \
 ogdf/augmentation/PlanarAugmentation.h \
 ogdf/decomposition/DynamicBCTree.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/augmentation/PlanarAugmentationFix.h \
 ogdf/planarlayout/BiconnectedShellingOrder.h \
 ogdf/planarity/SimpleEmbedder.h ogdf/planarity/PlanarModule.h \
 src/planarlayout/MixedModelBase.h src/planarlayout/MMOrder.h \
 src/planarlayout/IOPoints.h
	mkdir -p $(release)/src/planarlayout
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarlayout/MixedModelLayout.o -c src/planarlayout/MixedModelLayout.cpp

$(debug)/src/planarlayout/PlanarDrawLayout.o: src/planarlayout/PlanarDrawLayout.cpp \
 ogdf/planarlayout/PlanarDrawLayout.h ogdf/module/GridLayoutModule.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GridLayout.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/ModuleOption.h \
 ogdf/module/AugmentationModule.h ogdf/module/ShellingOrderModule.h \
 ogdf/planarlayout/ShellingOrder.h ogdf/basic/simple_graph_alg.h \
 ogdf/planarity/PlanarModule.h ogdf/augmentation/PlanarAugmentation.h \
 ogdf/decomposition/DynamicBCTree.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/augmentation/PlanarAugmentationFix.h \
 ogdf/planarlayout/BiconnectedShellingOrder.h
	mkdir -p $(debug)/src/planarlayout
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarlayout/PlanarDrawLayout.o -c src/planarlayout/PlanarDrawLayout.cpp

$(saferelease)/src/planarlayout/PlanarDrawLayout.o: src/planarlayout/PlanarDrawLayout.cpp \
 ogdf/planarlayout/PlanarDrawLayout.h ogdf/module/GridLayoutModule.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GridLayout.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/ModuleOption.h \
 ogdf/module/AugmentationModule.h ogdf/module/ShellingOrderModule.h \
 ogdf/planarlayout/ShellingOrder.h ogdf/basic/simple_graph_alg.h \
 ogdf/planarity/PlanarModule.h ogdf/augmentation/PlanarAugmentation.h \
 ogdf/decomposition/DynamicBCTree.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/augmentation/PlanarAugmentationFix.h \
 ogdf/planarlayout/BiconnectedShellingOrder.h
	mkdir -p $(saferelease)/src/planarlayout
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarlayout/PlanarDrawLayout.o -c src/planarlayout/PlanarDrawLayout.cpp

$(release)/src/planarlayout/PlanarDrawLayout.o: src/planarlayout/PlanarDrawLayout.cpp \
 ogdf/planarlayout/PlanarDrawLayout.h ogdf/module/GridLayoutModule.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GridLayout.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/ModuleOption.h \
 ogdf/module/AugmentationModule.h ogdf/module/ShellingOrderModule.h \
 ogdf/planarlayout/ShellingOrder.h ogdf/basic/simple_graph_alg.h \
 ogdf/planarity/PlanarModule.h ogdf/augmentation/PlanarAugmentation.h \
 ogdf/decomposition/DynamicBCTree.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/augmentation/PlanarAugmentationFix.h \
 ogdf/planarlayout/BiconnectedShellingOrder.h
	mkdir -p $(release)/src/planarlayout
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarlayout/PlanarDrawLayout.o -c src/planarlayout/PlanarDrawLayout.cpp

$(debug)/src/planarlayout/PlanarStraightLayout.o: src/planarlayout/PlanarStraightLayout.cpp \
 ogdf/planarlayout/PlanarStraightLayout.h ogdf/module/GridLayoutModule.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GridLayout.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/ModuleOption.h \
 ogdf/module/AugmentationModule.h ogdf/module/ShellingOrderModule.h \
 ogdf/planarlayout/ShellingOrder.h ogdf/basic/simple_graph_alg.h \
 ogdf/planarity/PlanarModule.h ogdf/augmentation/PlanarAugmentation.h \
 ogdf/decomposition/DynamicBCTree.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/augmentation/PlanarAugmentationFix.h \
 ogdf/planarlayout/BiconnectedShellingOrder.h
	mkdir -p $(debug)/src/planarlayout
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarlayout/PlanarStraightLayout.o -c src/planarlayout/PlanarStraightLayout.cpp

$(saferelease)/src/planarlayout/PlanarStraightLayout.o: src/planarlayout/PlanarStraightLayout.cpp \
 ogdf/planarlayout/PlanarStraightLayout.h ogdf/module/GridLayoutModule.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GridLayout.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/ModuleOption.h \
 ogdf/module/AugmentationModule.h ogdf/module/ShellingOrderModule.h \
 ogdf/planarlayout/ShellingOrder.h ogdf/basic/simple_graph_alg.h \
 ogdf/planarity/PlanarModule.h ogdf/augmentation/PlanarAugmentation.h \
 ogdf/decomposition/DynamicBCTree.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/augmentation/PlanarAugmentationFix.h \
 ogdf/planarlayout/BiconnectedShellingOrder.h
	mkdir -p $(saferelease)/src/planarlayout
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarlayout/PlanarStraightLayout.o -c src/planarlayout/PlanarStraightLayout.cpp

$(release)/src/planarlayout/PlanarStraightLayout.o: src/planarlayout/PlanarStraightLayout.cpp \
 ogdf/planarlayout/PlanarStraightLayout.h ogdf/module/GridLayoutModule.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/GridLayout.h \
 ogdf/planarity/PlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/planarity/EdgeTypePatterns.h ogdf/planarity/NodeTypePatterns.h \
 ogdf/basic/Layout.h ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h \
 ogdf/basic/tuples.h ogdf/basic/Stack.h ogdf/basic/ModuleOption.h \
 ogdf/module/AugmentationModule.h ogdf/module/ShellingOrderModule.h \
 ogdf/planarlayout/ShellingOrder.h ogdf/basic/simple_graph_alg.h \
 ogdf/planarity/PlanarModule.h ogdf/augmentation/PlanarAugmentation.h \
 ogdf/decomposition/DynamicBCTree.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/augmentation/PlanarAugmentationFix.h \
 ogdf/planarlayout/BiconnectedShellingOrder.h
	mkdir -p $(release)/src/planarlayout
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarlayout/PlanarStraightLayout.o -c src/planarlayout/PlanarStraightLayout.cpp

$(debug)/src/planarlayout/ShellingOrder.o: src/planarlayout/ShellingOrder.cpp \
 ogdf/planarlayout/ShellingOrder.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/BoundedStack.h ogdf/basic/SList.h
	mkdir -p $(debug)/src/planarlayout
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarlayout/ShellingOrder.o -c src/planarlayout/ShellingOrder.cpp

$(saferelease)/src/planarlayout/ShellingOrder.o: src/planarlayout/ShellingOrder.cpp \
 ogdf/planarlayout/ShellingOrder.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/BoundedStack.h ogdf/basic/SList.h
	mkdir -p $(saferelease)/src/planarlayout
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarlayout/ShellingOrder.o -c src/planarlayout/ShellingOrder.cpp

$(release)/src/planarlayout/ShellingOrder.o: src/planarlayout/ShellingOrder.cpp \
 ogdf/planarlayout/ShellingOrder.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/BoundedStack.h ogdf/basic/SList.h
	mkdir -p $(release)/src/planarlayout
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarlayout/ShellingOrder.o -c src/planarlayout/ShellingOrder.cpp

$(debug)/src/planarlayout/ShellingOrderModule.o: src/planarlayout/ShellingOrderModule.cpp \
 ogdf/module/ShellingOrderModule.h ogdf/planarlayout/ShellingOrder.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h
	mkdir -p $(debug)/src/planarlayout
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarlayout/ShellingOrderModule.o -c src/planarlayout/ShellingOrderModule.cpp

$(saferelease)/src/planarlayout/ShellingOrderModule.o: src/planarlayout/ShellingOrderModule.cpp \
 ogdf/module/ShellingOrderModule.h ogdf/planarlayout/ShellingOrder.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h
	mkdir -p $(saferelease)/src/planarlayout
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarlayout/ShellingOrderModule.o -c src/planarlayout/ShellingOrderModule.cpp

$(release)/src/planarlayout/ShellingOrderModule.o: src/planarlayout/ShellingOrderModule.cpp \
 ogdf/module/ShellingOrderModule.h ogdf/planarlayout/ShellingOrder.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h
	mkdir -p $(release)/src/planarlayout
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarlayout/ShellingOrderModule.o -c src/planarlayout/ShellingOrderModule.cpp

$(debug)/src/planarlayout/TriconnectedShellingOrder.o: \
 src/planarlayout/TriconnectedShellingOrder.cpp \
 ogdf/planarlayout/TriconnectedShellingOrder.h \
 ogdf/module/ShellingOrderModule.h ogdf/planarlayout/ShellingOrder.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/SList.h ogdf/planarity/PlanarModule.h \
 ogdf/basic/simple_graph_alg.h
	mkdir -p $(debug)/src/planarlayout
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/planarlayout/TriconnectedShellingOrder.o -c src/planarlayout/TriconnectedShellingOrder.cpp

$(saferelease)/src/planarlayout/TriconnectedShellingOrder.o: \
 src/planarlayout/TriconnectedShellingOrder.cpp \
 ogdf/planarlayout/TriconnectedShellingOrder.h \
 ogdf/module/ShellingOrderModule.h ogdf/planarlayout/ShellingOrder.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/SList.h ogdf/planarity/PlanarModule.h \
 ogdf/basic/simple_graph_alg.h
	mkdir -p $(saferelease)/src/planarlayout
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/planarlayout/TriconnectedShellingOrder.o -c src/planarlayout/TriconnectedShellingOrder.cpp

$(release)/src/planarlayout/TriconnectedShellingOrder.o: \
 src/planarlayout/TriconnectedShellingOrder.cpp \
 ogdf/planarlayout/TriconnectedShellingOrder.h \
 ogdf/module/ShellingOrderModule.h ogdf/planarlayout/ShellingOrder.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/FaceArray.h ogdf/basic/SList.h ogdf/planarity/PlanarModule.h \
 ogdf/basic/simple_graph_alg.h
	mkdir -p $(release)/src/planarlayout
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/planarlayout/TriconnectedShellingOrder.o -c src/planarlayout/TriconnectedShellingOrder.cpp

$(debug)/src/simultaneous/SimDraw.o: src/simultaneous/SimDraw.cpp ogdf/simultaneous/SimDraw.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/basic/GraphCopy.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h
	mkdir -p $(debug)/src/simultaneous
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/simultaneous/SimDraw.o -c src/simultaneous/SimDraw.cpp

$(saferelease)/src/simultaneous/SimDraw.o: src/simultaneous/SimDraw.cpp ogdf/simultaneous/SimDraw.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/basic/GraphCopy.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h
	mkdir -p $(saferelease)/src/simultaneous
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/simultaneous/SimDraw.o -c src/simultaneous/SimDraw.cpp

$(release)/src/simultaneous/SimDraw.o: src/simultaneous/SimDraw.cpp ogdf/simultaneous/SimDraw.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/basic/GraphCopy.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h
	mkdir -p $(release)/src/simultaneous
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/simultaneous/SimDraw.o -c src/simultaneous/SimDraw.cpp

$(debug)/src/simultaneous/SimDrawCaller.o: src/simultaneous/SimDrawCaller.cpp \
 ogdf/simultaneous/SimDrawCaller.h \
 ogdf/simultaneous/SimDrawManipulatorModule.h ogdf/simultaneous/SimDraw.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/basic/GraphCopy.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/layered/SugiyamaLayout.h \
 ogdf/module/LayoutModule.h ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/module/RankingModule.h ogdf/simultaneous/TwoLayerCrossMinSimDraw.h \
 ogdf/module/TwoLayerCrossMin.h ogdf/layered/Hierarchy.h \
 ogdf/layered/Level.h ogdf/basic/tuples.h \
 ogdf/module/HierarchyLayoutModule.h ogdf/basic/GraphCopyAttributes.h \
 ogdf/module/HierarchyClusterLayoutModule.h \
 ogdf/cluster/ClusterGraphCopyAttributes.h \
 ogdf/layered/ExtendedNestingGraph.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/Stack.h ogdf/basic/GraphObserver.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/module/CCLayoutPackModule.h \
 ogdf/basic/ModuleOption.h ogdf/planarity/PlanarizationLayout.h \
 ogdf/module/UMLLayoutModule.h ogdf/basic/UMLGraph.h \
 ogdf/module/PlanarSubgraphModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h ogdf/basic/Module.h \
 ogdf/basic/Logger.h ogdf/basic/Timeouter.h \
 ogdf/module/EdgeInsertionModule.h ogdf/module/LayoutPlanRepModule.h \
 ogdf/module/EmbedderModule.h ogdf/planarity/SubgraphPlanarizer.h \
 ogdf/module/CrossingMinimizationModule.h ogdf/planarity/PlanarModule.h \
 ogdf/planarity/VariableEmbeddingInserter.h
	mkdir -p $(debug)/src/simultaneous
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/simultaneous/SimDrawCaller.o -c src/simultaneous/SimDrawCaller.cpp

$(saferelease)/src/simultaneous/SimDrawCaller.o: src/simultaneous/SimDrawCaller.cpp \
 ogdf/simultaneous/SimDrawCaller.h \
 ogdf/simultaneous/SimDrawManipulatorModule.h ogdf/simultaneous/SimDraw.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/basic/GraphCopy.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/layered/SugiyamaLayout.h \
 ogdf/module/LayoutModule.h ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/module/RankingModule.h ogdf/simultaneous/TwoLayerCrossMinSimDraw.h \
 ogdf/module/TwoLayerCrossMin.h ogdf/layered/Hierarchy.h \
 ogdf/layered/Level.h ogdf/basic/tuples.h \
 ogdf/module/HierarchyLayoutModule.h ogdf/basic/GraphCopyAttributes.h \
 ogdf/module/HierarchyClusterLayoutModule.h \
 ogdf/cluster/ClusterGraphCopyAttributes.h \
 ogdf/layered/ExtendedNestingGraph.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/Stack.h ogdf/basic/GraphObserver.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/module/CCLayoutPackModule.h \
 ogdf/basic/ModuleOption.h ogdf/planarity/PlanarizationLayout.h \
 ogdf/module/UMLLayoutModule.h ogdf/basic/UMLGraph.h \
 ogdf/module/PlanarSubgraphModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h ogdf/basic/Module.h \
 ogdf/basic/Logger.h ogdf/basic/Timeouter.h \
 ogdf/module/EdgeInsertionModule.h ogdf/module/LayoutPlanRepModule.h \
 ogdf/module/EmbedderModule.h ogdf/planarity/SubgraphPlanarizer.h \
 ogdf/module/CrossingMinimizationModule.h ogdf/planarity/PlanarModule.h \
 ogdf/planarity/VariableEmbeddingInserter.h
	mkdir -p $(saferelease)/src/simultaneous
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/simultaneous/SimDrawCaller.o -c src/simultaneous/SimDrawCaller.cpp

$(release)/src/simultaneous/SimDrawCaller.o: src/simultaneous/SimDrawCaller.cpp \
 ogdf/simultaneous/SimDrawCaller.h \
 ogdf/simultaneous/SimDrawManipulatorModule.h ogdf/simultaneous/SimDraw.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/basic/GraphCopy.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/layered/SugiyamaLayout.h \
 ogdf/module/LayoutModule.h ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/module/RankingModule.h ogdf/simultaneous/TwoLayerCrossMinSimDraw.h \
 ogdf/module/TwoLayerCrossMin.h ogdf/layered/Hierarchy.h \
 ogdf/layered/Level.h ogdf/basic/tuples.h \
 ogdf/module/HierarchyLayoutModule.h ogdf/basic/GraphCopyAttributes.h \
 ogdf/module/HierarchyClusterLayoutModule.h \
 ogdf/cluster/ClusterGraphCopyAttributes.h \
 ogdf/layered/ExtendedNestingGraph.h ogdf/cluster/ClusterGraph.h \
 ogdf/basic/Stack.h ogdf/basic/GraphObserver.h \
 ogdf/cluster/ClusterArray.h ogdf/cluster/ClusterGraphAttributes.h \
 ogdf/basic/HashArray.h ogdf/module/CCLayoutPackModule.h \
 ogdf/basic/ModuleOption.h ogdf/planarity/PlanarizationLayout.h \
 ogdf/module/UMLLayoutModule.h ogdf/basic/UMLGraph.h \
 ogdf/module/PlanarSubgraphModule.h ogdf/planarity/PlanRepUML.h \
 ogdf/planarity/PlanRep.h ogdf/planarity/EdgeTypePatterns.h \
 ogdf/planarity/NodeTypePatterns.h ogdf/basic/Layout.h \
 ogdf/orthogonal/OrthoRep.h ogdf/basic/FaceArray.h ogdf/basic/Module.h \
 ogdf/basic/Logger.h ogdf/basic/Timeouter.h \
 ogdf/module/EdgeInsertionModule.h ogdf/module/LayoutPlanRepModule.h \
 ogdf/module/EmbedderModule.h ogdf/planarity/SubgraphPlanarizer.h \
 ogdf/module/CrossingMinimizationModule.h ogdf/planarity/PlanarModule.h \
 ogdf/planarity/VariableEmbeddingInserter.h
	mkdir -p $(release)/src/simultaneous
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/simultaneous/SimDrawCaller.o -c src/simultaneous/SimDrawCaller.cpp

$(debug)/src/simultaneous/SimDrawColorizer.o: src/simultaneous/SimDrawColorizer.cpp \
 ogdf/simultaneous/SimDrawColorizer.h \
 ogdf/simultaneous/SimDrawManipulatorModule.h ogdf/simultaneous/SimDraw.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/basic/GraphCopy.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h
	mkdir -p $(debug)/src/simultaneous
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/simultaneous/SimDrawColorizer.o -c src/simultaneous/SimDrawColorizer.cpp

$(saferelease)/src/simultaneous/SimDrawColorizer.o: src/simultaneous/SimDrawColorizer.cpp \
 ogdf/simultaneous/SimDrawColorizer.h \
 ogdf/simultaneous/SimDrawManipulatorModule.h ogdf/simultaneous/SimDraw.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/basic/GraphCopy.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h
	mkdir -p $(saferelease)/src/simultaneous
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/simultaneous/SimDrawColorizer.o -c src/simultaneous/SimDrawColorizer.cpp

$(release)/src/simultaneous/SimDrawColorizer.o: src/simultaneous/SimDrawColorizer.cpp \
 ogdf/simultaneous/SimDrawColorizer.h \
 ogdf/simultaneous/SimDrawManipulatorModule.h ogdf/simultaneous/SimDraw.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/basic/GraphCopy.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h
	mkdir -p $(release)/src/simultaneous
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/simultaneous/SimDrawColorizer.o -c src/simultaneous/SimDrawColorizer.cpp

$(debug)/src/simultaneous/SimDrawCreator.o: src/simultaneous/SimDrawCreator.cpp \
 ogdf/simultaneous/SimDrawCreator.h \
 ogdf/simultaneous/SimDrawManipulatorModule.h ogdf/simultaneous/SimDraw.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/basic/GraphCopy.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/graph_generators.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h \
 ogdf/basic/GraphObserver.h
	mkdir -p $(debug)/src/simultaneous
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/simultaneous/SimDrawCreator.o -c src/simultaneous/SimDrawCreator.cpp

$(saferelease)/src/simultaneous/SimDrawCreator.o: src/simultaneous/SimDrawCreator.cpp \
 ogdf/simultaneous/SimDrawCreator.h \
 ogdf/simultaneous/SimDrawManipulatorModule.h ogdf/simultaneous/SimDraw.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/basic/GraphCopy.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/graph_generators.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h \
 ogdf/basic/GraphObserver.h
	mkdir -p $(saferelease)/src/simultaneous
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/simultaneous/SimDrawCreator.o -c src/simultaneous/SimDrawCreator.cpp

$(release)/src/simultaneous/SimDrawCreator.o: src/simultaneous/SimDrawCreator.cpp \
 ogdf/simultaneous/SimDrawCreator.h \
 ogdf/simultaneous/SimDrawManipulatorModule.h ogdf/simultaneous/SimDraw.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/basic/GraphCopy.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/graph_generators.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h \
 ogdf/basic/GraphObserver.h
	mkdir -p $(release)/src/simultaneous
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/simultaneous/SimDrawCreator.o -c src/simultaneous/SimDrawCreator.cpp

$(debug)/src/simultaneous/SimDrawCreatorSimple.o: src/simultaneous/SimDrawCreatorSimple.cpp \
 ogdf/simultaneous/SimDrawCreatorSimple.h \
 ogdf/simultaneous/SimDrawCreator.h \
 ogdf/simultaneous/SimDrawManipulatorModule.h ogdf/simultaneous/SimDraw.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/basic/GraphCopy.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/Array2D.h
	mkdir -p $(debug)/src/simultaneous
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/simultaneous/SimDrawCreatorSimple.o -c src/simultaneous/SimDrawCreatorSimple.cpp

$(saferelease)/src/simultaneous/SimDrawCreatorSimple.o: src/simultaneous/SimDrawCreatorSimple.cpp \
 ogdf/simultaneous/SimDrawCreatorSimple.h \
 ogdf/simultaneous/SimDrawCreator.h \
 ogdf/simultaneous/SimDrawManipulatorModule.h ogdf/simultaneous/SimDraw.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/basic/GraphCopy.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/Array2D.h
	mkdir -p $(saferelease)/src/simultaneous
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/simultaneous/SimDrawCreatorSimple.o -c src/simultaneous/SimDrawCreatorSimple.cpp

$(release)/src/simultaneous/SimDrawCreatorSimple.o: src/simultaneous/SimDrawCreatorSimple.cpp \
 ogdf/simultaneous/SimDrawCreatorSimple.h \
 ogdf/simultaneous/SimDrawCreator.h \
 ogdf/simultaneous/SimDrawManipulatorModule.h ogdf/simultaneous/SimDraw.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/basic/GraphCopy.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/Array2D.h
	mkdir -p $(release)/src/simultaneous
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/simultaneous/SimDrawCreatorSimple.o -c src/simultaneous/SimDrawCreatorSimple.cpp

$(debug)/src/simultaneous/SimDrawManipulatorModule.o: src/simultaneous/SimDrawManipulatorModule.cpp \
 ogdf/simultaneous/SimDrawManipulatorModule.h ogdf/simultaneous/SimDraw.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/basic/GraphCopy.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h
	mkdir -p $(debug)/src/simultaneous
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/simultaneous/SimDrawManipulatorModule.o -c src/simultaneous/SimDrawManipulatorModule.cpp

$(saferelease)/src/simultaneous/SimDrawManipulatorModule.o: src/simultaneous/SimDrawManipulatorModule.cpp \
 ogdf/simultaneous/SimDrawManipulatorModule.h ogdf/simultaneous/SimDraw.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/basic/GraphCopy.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h
	mkdir -p $(saferelease)/src/simultaneous
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/simultaneous/SimDrawManipulatorModule.o -c src/simultaneous/SimDrawManipulatorModule.cpp

$(release)/src/simultaneous/SimDrawManipulatorModule.o: src/simultaneous/SimDrawManipulatorModule.cpp \
 ogdf/simultaneous/SimDrawManipulatorModule.h ogdf/simultaneous/SimDraw.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h ogdf/basic/GraphCopy.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h
	mkdir -p $(release)/src/simultaneous
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/simultaneous/SimDrawManipulatorModule.o -c src/simultaneous/SimDrawManipulatorModule.cpp

$(debug)/src/tree/RadialTreeLayout.o: src/tree/RadialTreeLayout.cpp \
 ogdf/tree/RadialTreeLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/SList.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/Queue.h ogdf/basic/Stack.h
	mkdir -p $(debug)/src/tree
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/tree/RadialTreeLayout.o -c src/tree/RadialTreeLayout.cpp

$(saferelease)/src/tree/RadialTreeLayout.o: src/tree/RadialTreeLayout.cpp \
 ogdf/tree/RadialTreeLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/SList.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/Queue.h ogdf/basic/Stack.h
	mkdir -p $(saferelease)/src/tree
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/tree/RadialTreeLayout.o -c src/tree/RadialTreeLayout.cpp

$(release)/src/tree/RadialTreeLayout.o: src/tree/RadialTreeLayout.cpp \
 ogdf/tree/RadialTreeLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/SList.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/Queue.h ogdf/basic/Stack.h
	mkdir -p $(release)/src/tree
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/tree/RadialTreeLayout.o -c src/tree/RadialTreeLayout.cpp

$(debug)/src/tree/TreeLayout.o: src/tree/TreeLayout.cpp ogdf/tree/TreeLayout.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/SList.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/Stack.h
	mkdir -p $(debug)/src/tree
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/tree/TreeLayout.o -c src/tree/TreeLayout.cpp

$(saferelease)/src/tree/TreeLayout.o: src/tree/TreeLayout.cpp ogdf/tree/TreeLayout.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/SList.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/Stack.h
	mkdir -p $(saferelease)/src/tree
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/tree/TreeLayout.o -c src/tree/TreeLayout.cpp

$(release)/src/tree/TreeLayout.o: src/tree/TreeLayout.cpp ogdf/tree/TreeLayout.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/SList.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/Stack.h
	mkdir -p $(release)/src/tree
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/tree/TreeLayout.o -c src/tree/TreeLayout.cpp

$(debug)/src/upward/DominanceLayout.o: src/upward/DominanceLayout.cpp \
 ogdf/upward/DominanceLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/ModuleOption.h \
 ogdf/module/UpwardPlanarizerModule.h ogdf/basic/Module.h \
 ogdf/upward/UpwardPlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/upward/SubgraphUpwardPlanarizer.h \
 ogdf/module/AcyclicSubgraphModule.h ogdf/module/FUPSModule.h \
 ogdf/module/UpwardEdgeInserterModule.h ogdf/upward/FUPSSimple.h \
 ogdf/upward/FixedEmbeddingUpwardEdgeInserter.h \
 ogdf/upward/UpwardPlanarModule.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/layered/GreedyCycleRemoval.h
	mkdir -p $(debug)/src/upward
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/upward/DominanceLayout.o -c src/upward/DominanceLayout.cpp

$(saferelease)/src/upward/DominanceLayout.o: src/upward/DominanceLayout.cpp \
 ogdf/upward/DominanceLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/ModuleOption.h \
 ogdf/module/UpwardPlanarizerModule.h ogdf/basic/Module.h \
 ogdf/upward/UpwardPlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/upward/SubgraphUpwardPlanarizer.h \
 ogdf/module/AcyclicSubgraphModule.h ogdf/module/FUPSModule.h \
 ogdf/module/UpwardEdgeInserterModule.h ogdf/upward/FUPSSimple.h \
 ogdf/upward/FixedEmbeddingUpwardEdgeInserter.h \
 ogdf/upward/UpwardPlanarModule.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/layered/GreedyCycleRemoval.h
	mkdir -p $(saferelease)/src/upward
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/upward/DominanceLayout.o -c src/upward/DominanceLayout.cpp

$(release)/src/upward/DominanceLayout.o: src/upward/DominanceLayout.cpp \
 ogdf/upward/DominanceLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/String.h \
 ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/ModuleOption.h \
 ogdf/module/UpwardPlanarizerModule.h ogdf/basic/Module.h \
 ogdf/upward/UpwardPlanRep.h ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/upward/SubgraphUpwardPlanarizer.h \
 ogdf/module/AcyclicSubgraphModule.h ogdf/module/FUPSModule.h \
 ogdf/module/UpwardEdgeInserterModule.h ogdf/upward/FUPSSimple.h \
 ogdf/upward/FixedEmbeddingUpwardEdgeInserter.h \
 ogdf/upward/UpwardPlanarModule.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/layered/GreedyCycleRemoval.h
	mkdir -p $(release)/src/upward
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/upward/DominanceLayout.o -c src/upward/DominanceLayout.cpp

$(debug)/src/upward/ExpansionGraph.o: src/upward/ExpansionGraph.cpp \
 ogdf/upward/ExpansionGraph.h ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/basic/SList.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/NodeSet.h
	mkdir -p $(debug)/src/upward
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/upward/ExpansionGraph.o -c src/upward/ExpansionGraph.cpp

$(saferelease)/src/upward/ExpansionGraph.o: src/upward/ExpansionGraph.cpp \
 ogdf/upward/ExpansionGraph.h ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/basic/SList.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/NodeSet.h
	mkdir -p $(saferelease)/src/upward
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/upward/ExpansionGraph.o -c src/upward/ExpansionGraph.cpp

$(release)/src/upward/ExpansionGraph.o: src/upward/ExpansionGraph.cpp \
 ogdf/upward/ExpansionGraph.h ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/List.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/basic/SList.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/NodeSet.h
	mkdir -p $(release)/src/upward
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/upward/ExpansionGraph.o -c src/upward/ExpansionGraph.cpp

$(debug)/src/upward/FUPSSimple.o: src/upward/FUPSSimple.cpp ogdf/upward/FUPSSimple.h \
 ogdf/module/FUPSModule.h ogdf/basic/Module.h ogdf/basic/basic.h \
 ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/upward/UpwardPlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/upward/FeasibleUpwardPlanarSubgraph.h \
 ogdf/upward/UpwardPlanarModule.h ogdf/upward/FaceSinkGraph.h \
 ogdf/basic/FaceArray.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(debug)/src/upward
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/upward/FUPSSimple.o -c src/upward/FUPSSimple.cpp

$(saferelease)/src/upward/FUPSSimple.o: src/upward/FUPSSimple.cpp ogdf/upward/FUPSSimple.h \
 ogdf/module/FUPSModule.h ogdf/basic/Module.h ogdf/basic/basic.h \
 ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/upward/UpwardPlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/upward/FeasibleUpwardPlanarSubgraph.h \
 ogdf/upward/UpwardPlanarModule.h ogdf/upward/FaceSinkGraph.h \
 ogdf/basic/FaceArray.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(saferelease)/src/upward
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/upward/FUPSSimple.o -c src/upward/FUPSSimple.cpp

$(release)/src/upward/FUPSSimple.o: src/upward/FUPSSimple.cpp ogdf/upward/FUPSSimple.h \
 ogdf/module/FUPSModule.h ogdf/basic/Module.h ogdf/basic/basic.h \
 ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/upward/UpwardPlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/upward/FeasibleUpwardPlanarSubgraph.h \
 ogdf/upward/UpwardPlanarModule.h ogdf/upward/FaceSinkGraph.h \
 ogdf/basic/FaceArray.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(release)/src/upward
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/upward/FUPSSimple.o -c src/upward/FUPSSimple.cpp

$(debug)/src/upward/FaceSinkGraph.o: src/upward/FaceSinkGraph.cpp ogdf/upward/FaceSinkGraph.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/FaceArray.h ogdf/basic/SList.h
	mkdir -p $(debug)/src/upward
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/upward/FaceSinkGraph.o -c src/upward/FaceSinkGraph.cpp

$(saferelease)/src/upward/FaceSinkGraph.o: src/upward/FaceSinkGraph.cpp ogdf/upward/FaceSinkGraph.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/FaceArray.h ogdf/basic/SList.h
	mkdir -p $(saferelease)/src/upward
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/upward/FaceSinkGraph.o -c src/upward/FaceSinkGraph.cpp

$(release)/src/upward/FaceSinkGraph.o: src/upward/FaceSinkGraph.cpp ogdf/upward/FaceSinkGraph.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/FaceArray.h ogdf/basic/SList.h
	mkdir -p $(release)/src/upward
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/upward/FaceSinkGraph.o -c src/upward/FaceSinkGraph.cpp

$(debug)/src/upward/FeasibleUpwardPlanarSubgraph.o: \
 src/upward/FeasibleUpwardPlanarSubgraph.cpp \
 ogdf/upward/FeasibleUpwardPlanarSubgraph.h ogdf/basic/Module.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/upward/UpwardPlanarModule.h ogdf/upward/FaceSinkGraph.h \
 ogdf/basic/FaceArray.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(debug)/src/upward
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/upward/FeasibleUpwardPlanarSubgraph.o -c src/upward/FeasibleUpwardPlanarSubgraph.cpp

$(saferelease)/src/upward/FeasibleUpwardPlanarSubgraph.o: \
 src/upward/FeasibleUpwardPlanarSubgraph.cpp \
 ogdf/upward/FeasibleUpwardPlanarSubgraph.h ogdf/basic/Module.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/upward/UpwardPlanarModule.h ogdf/upward/FaceSinkGraph.h \
 ogdf/basic/FaceArray.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(saferelease)/src/upward
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/upward/FeasibleUpwardPlanarSubgraph.o -c src/upward/FeasibleUpwardPlanarSubgraph.cpp

$(release)/src/upward/FeasibleUpwardPlanarSubgraph.o: \
 src/upward/FeasibleUpwardPlanarSubgraph.cpp \
 ogdf/upward/FeasibleUpwardPlanarSubgraph.h ogdf/basic/Module.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/GraphCopy.h ogdf/basic/NodeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/upward/UpwardPlanarModule.h ogdf/upward/FaceSinkGraph.h \
 ogdf/basic/FaceArray.h ogdf/basic/simple_graph_alg.h
	mkdir -p $(release)/src/upward
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/upward/FeasibleUpwardPlanarSubgraph.o -c src/upward/FeasibleUpwardPlanarSubgraph.cpp

$(debug)/src/upward/FixedEmbeddingUpwardEdgeInserter.o: \
 src/upward/FixedEmbeddingUpwardEdgeInserter.cpp ogdf/basic/Queue.h \
 ogdf/basic/SList.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/BinaryHeap.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/upward/UpwardPlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h \
 ogdf/upward/FixedEmbeddingUpwardEdgeInserter.h \
 ogdf/module/UpwardEdgeInserterModule.h ogdf/basic/Module.h \
 ogdf/upward/UpwardPlanarModule.h ogdf/upward/LayerBasedUPRLayout.h \
 ogdf/basic/ModuleOption.h ogdf/module/RankingModule.h \
 ogdf/module/UPRLayoutModule.h ogdf/layered/Hierarchy.h \
 ogdf/layered/Level.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/GraphCopyAttributes.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/geometry.h \
 ogdf/module/HierarchyLayoutModule.h \
 ogdf/layered/OptimalHierarchyLayout.h ogdf/layered/FastHierarchyLayout.h \
 ogdf/layered/OptimalRanking.h ogdf/module/AcyclicSubgraphModule.h
	mkdir -p $(debug)/src/upward
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/upward/FixedEmbeddingUpwardEdgeInserter.o -c src/upward/FixedEmbeddingUpwardEdgeInserter.cpp

$(saferelease)/src/upward/FixedEmbeddingUpwardEdgeInserter.o: \
 src/upward/FixedEmbeddingUpwardEdgeInserter.cpp ogdf/basic/Queue.h \
 ogdf/basic/SList.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/BinaryHeap.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/upward/UpwardPlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h \
 ogdf/upward/FixedEmbeddingUpwardEdgeInserter.h \
 ogdf/module/UpwardEdgeInserterModule.h ogdf/basic/Module.h \
 ogdf/upward/UpwardPlanarModule.h ogdf/upward/LayerBasedUPRLayout.h \
 ogdf/basic/ModuleOption.h ogdf/module/RankingModule.h \
 ogdf/module/UPRLayoutModule.h ogdf/layered/Hierarchy.h \
 ogdf/layered/Level.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/GraphCopyAttributes.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/geometry.h \
 ogdf/module/HierarchyLayoutModule.h \
 ogdf/layered/OptimalHierarchyLayout.h ogdf/layered/FastHierarchyLayout.h \
 ogdf/layered/OptimalRanking.h ogdf/module/AcyclicSubgraphModule.h
	mkdir -p $(saferelease)/src/upward
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/upward/FixedEmbeddingUpwardEdgeInserter.o -c src/upward/FixedEmbeddingUpwardEdgeInserter.cpp

$(release)/src/upward/FixedEmbeddingUpwardEdgeInserter.o: \
 src/upward/FixedEmbeddingUpwardEdgeInserter.cpp ogdf/basic/Queue.h \
 ogdf/basic/SList.h ogdf/internal/basic/list_templates.h \
 ogdf/basic/Array.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/basic/BinaryHeap.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/EdgeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/basic/Graph.h ogdf/basic/NodeArray.h ogdf/upward/UpwardPlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h \
 ogdf/upward/FixedEmbeddingUpwardEdgeInserter.h \
 ogdf/module/UpwardEdgeInserterModule.h ogdf/basic/Module.h \
 ogdf/upward/UpwardPlanarModule.h ogdf/upward/LayerBasedUPRLayout.h \
 ogdf/basic/ModuleOption.h ogdf/module/RankingModule.h \
 ogdf/module/UPRLayoutModule.h ogdf/layered/Hierarchy.h \
 ogdf/layered/Level.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/basic/GraphCopyAttributes.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/geometry.h \
 ogdf/module/HierarchyLayoutModule.h \
 ogdf/layered/OptimalHierarchyLayout.h ogdf/layered/FastHierarchyLayout.h \
 ogdf/layered/OptimalRanking.h ogdf/module/AcyclicSubgraphModule.h
	mkdir -p $(release)/src/upward
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/upward/FixedEmbeddingUpwardEdgeInserter.o -c src/upward/FixedEmbeddingUpwardEdgeInserter.cpp

$(debug)/src/upward/LayerBasedUPRLayout.o: src/upward/LayerBasedUPRLayout.cpp \
 ogdf/upward/LayerBasedUPRLayout.h ogdf/basic/ModuleOption.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/upward/UpwardPlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/module/RankingModule.h ogdf/module/UPRLayoutModule.h \
 ogdf/layered/Hierarchy.h ogdf/layered/Level.h ogdf/basic/tuples.h \
 ogdf/basic/Hashing.h ogdf/basic/GraphCopyAttributes.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/geometry.h \
 ogdf/module/HierarchyLayoutModule.h \
 ogdf/layered/OptimalHierarchyLayout.h ogdf/layered/FastHierarchyLayout.h \
 ogdf/layered/OptimalRanking.h ogdf/module/AcyclicSubgraphModule.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/Queue.h ogdf/basic/Stack.h
	mkdir -p $(debug)/src/upward
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/upward/LayerBasedUPRLayout.o -c src/upward/LayerBasedUPRLayout.cpp

$(saferelease)/src/upward/LayerBasedUPRLayout.o: src/upward/LayerBasedUPRLayout.cpp \
 ogdf/upward/LayerBasedUPRLayout.h ogdf/basic/ModuleOption.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/upward/UpwardPlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/module/RankingModule.h ogdf/module/UPRLayoutModule.h \
 ogdf/layered/Hierarchy.h ogdf/layered/Level.h ogdf/basic/tuples.h \
 ogdf/basic/Hashing.h ogdf/basic/GraphCopyAttributes.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/geometry.h \
 ogdf/module/HierarchyLayoutModule.h \
 ogdf/layered/OptimalHierarchyLayout.h ogdf/layered/FastHierarchyLayout.h \
 ogdf/layered/OptimalRanking.h ogdf/module/AcyclicSubgraphModule.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/Queue.h ogdf/basic/Stack.h
	mkdir -p $(saferelease)/src/upward
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/upward/LayerBasedUPRLayout.o -c src/upward/LayerBasedUPRLayout.cpp

$(release)/src/upward/LayerBasedUPRLayout.o: src/upward/LayerBasedUPRLayout.cpp \
 ogdf/upward/LayerBasedUPRLayout.h ogdf/basic/ModuleOption.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/upward/UpwardPlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/module/RankingModule.h ogdf/module/UPRLayoutModule.h \
 ogdf/layered/Hierarchy.h ogdf/layered/Level.h ogdf/basic/tuples.h \
 ogdf/basic/Hashing.h ogdf/basic/GraphCopyAttributes.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/geometry.h \
 ogdf/module/HierarchyLayoutModule.h \
 ogdf/layered/OptimalHierarchyLayout.h ogdf/layered/FastHierarchyLayout.h \
 ogdf/layered/OptimalRanking.h ogdf/module/AcyclicSubgraphModule.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/Queue.h ogdf/basic/Stack.h
	mkdir -p $(release)/src/upward
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/upward/LayerBasedUPRLayout.o -c src/upward/LayerBasedUPRLayout.cpp

$(debug)/src/upward/SubgraphUpwardPlanarizer.o: src/upward/SubgraphUpwardPlanarizer.cpp \
 ogdf/upward/SubgraphUpwardPlanarizer.h ogdf/basic/ModuleOption.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/module/AcyclicSubgraphModule.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/module/FUPSModule.h ogdf/basic/Module.h ogdf/upward/UpwardPlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/module/UpwardEdgeInserterModule.h \
 ogdf/module/UpwardPlanarizerModule.h ogdf/upward/FUPSSimple.h \
 ogdf/upward/FixedEmbeddingUpwardEdgeInserter.h \
 ogdf/upward/UpwardPlanarModule.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/layered/GreedyCycleRemoval.h \
 ogdf/upward/FeasibleUpwardPlanarSubgraph.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/Queue.h ogdf/upward/FaceSinkGraph.h ogdf/basic/FaceArray.h
	mkdir -p $(debug)/src/upward
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/upward/SubgraphUpwardPlanarizer.o -c src/upward/SubgraphUpwardPlanarizer.cpp

$(saferelease)/src/upward/SubgraphUpwardPlanarizer.o: src/upward/SubgraphUpwardPlanarizer.cpp \
 ogdf/upward/SubgraphUpwardPlanarizer.h ogdf/basic/ModuleOption.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/module/AcyclicSubgraphModule.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/module/FUPSModule.h ogdf/basic/Module.h ogdf/upward/UpwardPlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/module/UpwardEdgeInserterModule.h \
 ogdf/module/UpwardPlanarizerModule.h ogdf/upward/FUPSSimple.h \
 ogdf/upward/FixedEmbeddingUpwardEdgeInserter.h \
 ogdf/upward/UpwardPlanarModule.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/layered/GreedyCycleRemoval.h \
 ogdf/upward/FeasibleUpwardPlanarSubgraph.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/Queue.h ogdf/upward/FaceSinkGraph.h ogdf/basic/FaceArray.h
	mkdir -p $(saferelease)/src/upward
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/upward/SubgraphUpwardPlanarizer.o -c src/upward/SubgraphUpwardPlanarizer.cpp

$(release)/src/upward/SubgraphUpwardPlanarizer.o: src/upward/SubgraphUpwardPlanarizer.cpp \
 ogdf/upward/SubgraphUpwardPlanarizer.h ogdf/basic/ModuleOption.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/module/AcyclicSubgraphModule.h \
 ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/EdgeArray.h \
 ogdf/module/FUPSModule.h ogdf/basic/Module.h ogdf/upward/UpwardPlanRep.h \
 ogdf/basic/GraphCopy.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/module/UpwardEdgeInserterModule.h \
 ogdf/module/UpwardPlanarizerModule.h ogdf/upward/FUPSSimple.h \
 ogdf/upward/FixedEmbeddingUpwardEdgeInserter.h \
 ogdf/upward/UpwardPlanarModule.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/layered/GreedyCycleRemoval.h \
 ogdf/upward/FeasibleUpwardPlanarSubgraph.h ogdf/basic/simple_graph_alg.h \
 ogdf/basic/Queue.h ogdf/upward/FaceSinkGraph.h ogdf/basic/FaceArray.h
	mkdir -p $(release)/src/upward
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/upward/SubgraphUpwardPlanarizer.o -c src/upward/SubgraphUpwardPlanarizer.cpp

$(debug)/src/upward/UpwardPlanRep.o: src/upward/UpwardPlanRep.cpp \
 ogdf/basic/simple_graph_alg.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/SList.h ogdf/upward/UpwardPlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/upward/FaceSinkGraph.h ogdf/basic/FaceArray.h ogdf/basic/FaceSet.h \
 ogdf/basic/tuples.h ogdf/basic/Hashing.h
	mkdir -p $(debug)/src/upward
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/upward/UpwardPlanRep.o -c src/upward/UpwardPlanRep.cpp

$(saferelease)/src/upward/UpwardPlanRep.o: src/upward/UpwardPlanRep.cpp \
 ogdf/basic/simple_graph_alg.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/SList.h ogdf/upward/UpwardPlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/upward/FaceSinkGraph.h ogdf/basic/FaceArray.h ogdf/basic/FaceSet.h \
 ogdf/basic/tuples.h ogdf/basic/Hashing.h
	mkdir -p $(saferelease)/src/upward
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/upward/UpwardPlanRep.o -c src/upward/UpwardPlanRep.cpp

$(release)/src/upward/UpwardPlanRep.o: src/upward/UpwardPlanRep.cpp \
 ogdf/basic/simple_graph_alg.h ogdf/basic/EdgeArray.h \
 ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/NodeArray.h \
 ogdf/basic/SList.h ogdf/upward/UpwardPlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/upward/FaceSinkGraph.h ogdf/basic/FaceArray.h ogdf/basic/FaceSet.h \
 ogdf/basic/tuples.h ogdf/basic/Hashing.h
	mkdir -p $(release)/src/upward
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/upward/UpwardPlanRep.o -c src/upward/UpwardPlanRep.cpp

$(debug)/src/upward/UpwardPlanarModule.o: src/upward/UpwardPlanarModule.cpp \
 ogdf/upward/UpwardPlanarModule.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/SList.h ogdf/upward/FaceSinkGraph.h \
 ogdf/basic/FaceArray.h ogdf/upward/ExpansionGraph.h \
 ogdf/decomposition/StaticPlanarSPQRTree.h \
 ogdf/decomposition/StaticSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/decomposition/PertinentGraph.h \
 ogdf/decomposition/StaticSkeleton.h ogdf/decomposition/PlanarSPQRTree.h \
 ogdf/planarity/PlanarModule.h ogdf/basic/simple_graph_alg.h \
 ogdf/upward/UpwardPlanarizationLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/module/HierarchyLayoutModule.h ogdf/layered/Hierarchy.h \
 ogdf/layered/Level.h ogdf/basic/tuples.h ogdf/basic/GraphCopy.h \
 ogdf/basic/GraphCopyAttributes.h ogdf/module/UpwardPlanarizerModule.h \
 ogdf/basic/Module.h ogdf/upward/UpwardPlanRep.h \
 ogdf/module/UPRLayoutModule.h ogdf/basic/ModuleOption.h \
 ogdf/upward/LayerBasedUPRLayout.h ogdf/module/RankingModule.h \
 ogdf/layered/OptimalHierarchyLayout.h ogdf/layered/FastHierarchyLayout.h \
 ogdf/layered/OptimalRanking.h ogdf/module/AcyclicSubgraphModule.h \
 ogdf/upward/SubgraphUpwardPlanarizer.h ogdf/module/FUPSModule.h \
 ogdf/module/UpwardEdgeInserterModule.h ogdf/upward/FUPSSimple.h \
 ogdf/upward/FixedEmbeddingUpwardEdgeInserter.h \
 ogdf/decomposition/BCTree.h ogdf/basic/BoundedStack.h \
 ogdf/layered/GreedyCycleRemoval.h
	mkdir -p $(debug)/src/upward
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/upward/UpwardPlanarModule.o -c src/upward/UpwardPlanarModule.cpp

$(saferelease)/src/upward/UpwardPlanarModule.o: src/upward/UpwardPlanarModule.cpp \
 ogdf/upward/UpwardPlanarModule.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/SList.h ogdf/upward/FaceSinkGraph.h \
 ogdf/basic/FaceArray.h ogdf/upward/ExpansionGraph.h \
 ogdf/decomposition/StaticPlanarSPQRTree.h \
 ogdf/decomposition/StaticSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/decomposition/PertinentGraph.h \
 ogdf/decomposition/StaticSkeleton.h ogdf/decomposition/PlanarSPQRTree.h \
 ogdf/planarity/PlanarModule.h ogdf/basic/simple_graph_alg.h \
 ogdf/upward/UpwardPlanarizationLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/module/HierarchyLayoutModule.h ogdf/layered/Hierarchy.h \
 ogdf/layered/Level.h ogdf/basic/tuples.h ogdf/basic/GraphCopy.h \
 ogdf/basic/GraphCopyAttributes.h ogdf/module/UpwardPlanarizerModule.h \
 ogdf/basic/Module.h ogdf/upward/UpwardPlanRep.h \
 ogdf/module/UPRLayoutModule.h ogdf/basic/ModuleOption.h \
 ogdf/upward/LayerBasedUPRLayout.h ogdf/module/RankingModule.h \
 ogdf/layered/OptimalHierarchyLayout.h ogdf/layered/FastHierarchyLayout.h \
 ogdf/layered/OptimalRanking.h ogdf/module/AcyclicSubgraphModule.h \
 ogdf/upward/SubgraphUpwardPlanarizer.h ogdf/module/FUPSModule.h \
 ogdf/module/UpwardEdgeInserterModule.h ogdf/upward/FUPSSimple.h \
 ogdf/upward/FixedEmbeddingUpwardEdgeInserter.h \
 ogdf/decomposition/BCTree.h ogdf/basic/BoundedStack.h \
 ogdf/layered/GreedyCycleRemoval.h
	mkdir -p $(saferelease)/src/upward
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/upward/UpwardPlanarModule.o -c src/upward/UpwardPlanarModule.cpp

$(release)/src/upward/UpwardPlanarModule.o: src/upward/UpwardPlanarModule.cpp \
 ogdf/upward/UpwardPlanarModule.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/Graph.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h \
 ogdf/basic/EdgeArray.h ogdf/basic/SList.h ogdf/upward/FaceSinkGraph.h \
 ogdf/basic/FaceArray.h ogdf/upward/ExpansionGraph.h \
 ogdf/decomposition/StaticPlanarSPQRTree.h \
 ogdf/decomposition/StaticSPQRTree.h ogdf/decomposition/SPQRTree.h \
 ogdf/decomposition/Skeleton.h ogdf/decomposition/PertinentGraph.h \
 ogdf/decomposition/StaticSkeleton.h ogdf/decomposition/PlanarSPQRTree.h \
 ogdf/planarity/PlanarModule.h ogdf/basic/simple_graph_alg.h \
 ogdf/upward/UpwardPlanarizationLayout.h ogdf/module/LayoutModule.h \
 ogdf/basic/GraphAttributes.h ogdf/basic/String.h ogdf/basic/Hashing.h \
 ogdf/basic/geometry.h ogdf/internal/energybased/MultilevelGraph.h \
 ogdf/module/HierarchyLayoutModule.h ogdf/layered/Hierarchy.h \
 ogdf/layered/Level.h ogdf/basic/tuples.h ogdf/basic/GraphCopy.h \
 ogdf/basic/GraphCopyAttributes.h ogdf/module/UpwardPlanarizerModule.h \
 ogdf/basic/Module.h ogdf/upward/UpwardPlanRep.h \
 ogdf/module/UPRLayoutModule.h ogdf/basic/ModuleOption.h \
 ogdf/upward/LayerBasedUPRLayout.h ogdf/module/RankingModule.h \
 ogdf/layered/OptimalHierarchyLayout.h ogdf/layered/FastHierarchyLayout.h \
 ogdf/layered/OptimalRanking.h ogdf/module/AcyclicSubgraphModule.h \
 ogdf/upward/SubgraphUpwardPlanarizer.h ogdf/module/FUPSModule.h \
 ogdf/module/UpwardEdgeInserterModule.h ogdf/upward/FUPSSimple.h \
 ogdf/upward/FixedEmbeddingUpwardEdgeInserter.h \
 ogdf/decomposition/BCTree.h ogdf/basic/BoundedStack.h \
 ogdf/layered/GreedyCycleRemoval.h
	mkdir -p $(release)/src/upward
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/upward/UpwardPlanarModule.o -c src/upward/UpwardPlanarModule.cpp

$(debug)/src/upward/UpwardPlanarSubgraphModule.o: src/upward/UpwardPlanarSubgraphModule.cpp \
 ogdf/module/UpwardPlanarSubgraphModule.h ogdf/basic/GraphCopy.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h
	mkdir -p $(debug)/src/upward
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/upward/UpwardPlanarSubgraphModule.o -c src/upward/UpwardPlanarSubgraphModule.cpp

$(saferelease)/src/upward/UpwardPlanarSubgraphModule.o: src/upward/UpwardPlanarSubgraphModule.cpp \
 ogdf/module/UpwardPlanarSubgraphModule.h ogdf/basic/GraphCopy.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h
	mkdir -p $(saferelease)/src/upward
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/upward/UpwardPlanarSubgraphModule.o -c src/upward/UpwardPlanarSubgraphModule.cpp

$(release)/src/upward/UpwardPlanarSubgraphModule.o: src/upward/UpwardPlanarSubgraphModule.cpp \
 ogdf/module/UpwardPlanarSubgraphModule.h ogdf/basic/GraphCopy.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h
	mkdir -p $(release)/src/upward
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/upward/UpwardPlanarSubgraphModule.o -c src/upward/UpwardPlanarSubgraphModule.cpp

$(debug)/src/upward/UpwardPlanarSubgraphSimple.o: src/upward/UpwardPlanarSubgraphSimple.cpp \
 ogdf/upward/UpwardPlanarSubgraphSimple.h \
 ogdf/module/UpwardPlanarSubgraphModule.h ogdf/basic/GraphCopy.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/upward/UpwardPlanarModule.h ogdf/basic/simple_graph_alg.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(debug)/src/upward
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/upward/UpwardPlanarSubgraphSimple.o -c src/upward/UpwardPlanarSubgraphSimple.cpp

$(saferelease)/src/upward/UpwardPlanarSubgraphSimple.o: src/upward/UpwardPlanarSubgraphSimple.cpp \
 ogdf/upward/UpwardPlanarSubgraphSimple.h \
 ogdf/module/UpwardPlanarSubgraphModule.h ogdf/basic/GraphCopy.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/upward/UpwardPlanarModule.h ogdf/basic/simple_graph_alg.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(saferelease)/src/upward
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/upward/UpwardPlanarSubgraphSimple.o -c src/upward/UpwardPlanarSubgraphSimple.cpp

$(release)/src/upward/UpwardPlanarSubgraphSimple.o: src/upward/UpwardPlanarSubgraphSimple.cpp \
 ogdf/upward/UpwardPlanarSubgraphSimple.h \
 ogdf/module/UpwardPlanarSubgraphModule.h ogdf/basic/GraphCopy.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/basic.h ogdf/basic/exceptions.h ogdf/basic/memory.h \
 ogdf/internal/basic/PoolMemoryAllocator.h ogdf/basic/CriticalSection.h \
 ogdf/basic/System.h ogdf/internal/basic/MallocMemoryAllocator.h \
 ogdf/basic/comparer.h ogdf/basic/Graph.h ogdf/basic/EdgeArray.h \
 ogdf/basic/SList.h ogdf/basic/CombinatorialEmbedding.h \
 ogdf/basic/AdjEntryArray.h ogdf/basic/tuples.h ogdf/basic/Hashing.h \
 ogdf/upward/UpwardPlanarModule.h ogdf/basic/simple_graph_alg.h \
 ogdf/planarity/PlanarModule.h
	mkdir -p $(release)/src/upward
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/upward/UpwardPlanarSubgraphSimple.o -c src/upward/UpwardPlanarSubgraphSimple.cpp

$(debug)/src/upward/VisibilityLayout.o: src/upward/VisibilityLayout.cpp \
 ogdf/upward/VisibilityLayout.h ogdf/module/UpwardPlanarizerModule.h \
 ogdf/basic/Module.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/upward/UpwardPlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/ModuleOption.h \
 ogdf/basic/FaceArray.h ogdf/upward/SubgraphUpwardPlanarizer.h \
 ogdf/module/AcyclicSubgraphModule.h ogdf/module/FUPSModule.h \
 ogdf/module/UpwardEdgeInserterModule.h ogdf/upward/FUPSSimple.h \
 ogdf/upward/FixedEmbeddingUpwardEdgeInserter.h \
 ogdf/upward/UpwardPlanarModule.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/layered/GreedyCycleRemoval.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/extended_graph_alg.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h \
 ogdf/basic/GraphObserver.h
	mkdir -p $(debug)/src/upward
	g++ -fmessage-length=0 -I.  -g3 -O0 -DOGDF_DEBUG -o $(debug)/src/upward/VisibilityLayout.o -c src/upward/VisibilityLayout.cpp

$(saferelease)/src/upward/VisibilityLayout.o: src/upward/VisibilityLayout.cpp \
 ogdf/upward/VisibilityLayout.h ogdf/module/UpwardPlanarizerModule.h \
 ogdf/basic/Module.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/upward/UpwardPlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/ModuleOption.h \
 ogdf/basic/FaceArray.h ogdf/upward/SubgraphUpwardPlanarizer.h \
 ogdf/module/AcyclicSubgraphModule.h ogdf/module/FUPSModule.h \
 ogdf/module/UpwardEdgeInserterModule.h ogdf/upward/FUPSSimple.h \
 ogdf/upward/FixedEmbeddingUpwardEdgeInserter.h \
 ogdf/upward/UpwardPlanarModule.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/layered/GreedyCycleRemoval.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/extended_graph_alg.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h \
 ogdf/basic/GraphObserver.h
	mkdir -p $(saferelease)/src/upward
	g++ -fmessage-length=0 -I.  -O0 -o $(saferelease)/src/upward/VisibilityLayout.o -c src/upward/VisibilityLayout.cpp

$(release)/src/upward/VisibilityLayout.o: src/upward/VisibilityLayout.cpp \
 ogdf/upward/VisibilityLayout.h ogdf/module/UpwardPlanarizerModule.h \
 ogdf/basic/Module.h ogdf/basic/basic.h ogdf/basic/exceptions.h \
 ogdf/basic/memory.h ogdf/internal/basic/PoolMemoryAllocator.h \
 ogdf/basic/CriticalSection.h ogdf/basic/System.h \
 ogdf/internal/basic/MallocMemoryAllocator.h ogdf/basic/comparer.h \
 ogdf/upward/UpwardPlanRep.h ogdf/basic/GraphCopy.h \
 ogdf/basic/NodeArray.h ogdf/basic/Graph_d.h ogdf/basic/List.h \
 ogdf/internal/basic/list_templates.h ogdf/basic/Array.h \
 ogdf/basic/Graph.h ogdf/basic/EdgeArray.h ogdf/basic/SList.h \
 ogdf/basic/CombinatorialEmbedding.h ogdf/basic/AdjEntryArray.h \
 ogdf/module/LayoutModule.h ogdf/basic/GraphAttributes.h \
 ogdf/basic/String.h ogdf/basic/Hashing.h ogdf/basic/geometry.h \
 ogdf/internal/energybased/MultilevelGraph.h ogdf/basic/ModuleOption.h \
 ogdf/basic/FaceArray.h ogdf/upward/SubgraphUpwardPlanarizer.h \
 ogdf/module/AcyclicSubgraphModule.h ogdf/module/FUPSModule.h \
 ogdf/module/UpwardEdgeInserterModule.h ogdf/upward/FUPSSimple.h \
 ogdf/upward/FixedEmbeddingUpwardEdgeInserter.h \
 ogdf/upward/UpwardPlanarModule.h ogdf/decomposition/BCTree.h \
 ogdf/basic/BoundedStack.h ogdf/layered/GreedyCycleRemoval.h \
 ogdf/basic/simple_graph_alg.h ogdf/basic/extended_graph_alg.h \
 ogdf/cluster/ClusterGraph.h ogdf/basic/Stack.h \
 ogdf/basic/GraphObserver.h
	mkdir -p $(release)/src/upward
	g++ -fmessage-length=0 -I.  -O1 -o $(release)/src/upward/VisibilityLayout.o -c src/upward/VisibilityLayout.cpp

debug_OBJS = \
$(debug)/src/augmentation/DfsMakeBiconnected.o \
$(debug)/src/augmentation/PlanarAugmentation.o \
$(debug)/src/augmentation/PlanarAugmentationFix.o \
$(debug)/src/basic/CliqueFinder.o \
$(debug)/src/basic/CombinatorialEmbedding.o \
$(debug)/src/basic/DualGraph.o \
$(debug)/src/basic/EdgeComparer.o \
$(debug)/src/basic/EdgeComparerSimple.o \
$(debug)/src/basic/Graph.o \
$(debug)/src/basic/GraphAttributes.o \
$(debug)/src/basic/GraphCopy.o \
$(debug)/src/basic/GridLayout.o \
$(debug)/src/basic/GridLayoutModule.o \
$(debug)/src/basic/Hashing.o \
$(debug)/src/basic/Logger.o \
$(debug)/src/basic/NearestRectangleFinder.o \
$(debug)/src/basic/PoolMemoryAllocator.o \
$(debug)/src/basic/PreprocessorLayout.o \
$(debug)/src/basic/String.o \
$(debug)/src/basic/System.o \
$(debug)/src/basic/UMLGraph.o \
$(debug)/src/basic/basic.o \
$(debug)/src/basic/extended_graph_alg.o \
$(debug)/src/basic/geometry.o \
$(debug)/src/basic/graph_generators.o \
$(debug)/src/basic/modules.o \
$(debug)/src/basic/random_hierarchy.o \
$(debug)/src/basic/simple_graph_alg.o \
$(debug)/src/basic/stNumber.o \
$(debug)/src/cluster/CPlanarEdgeInserter.o \
$(debug)/src/cluster/CPlanarSubCLusteredST.o \
$(debug)/src/cluster/CPlanarSubClusteredGraph.o \
$(debug)/src/cluster/CconnectClusterPlanar.o \
$(debug)/src/cluster/CconnectClusterPlanarEmbed.o \
$(debug)/src/cluster/ClusterGraph.o \
$(debug)/src/cluster/ClusterGraphAttributes.o \
$(debug)/src/cluster/ClusterPlanarizationLayout.o \
$(debug)/src/cluster/Cluster_ChunkConnection.o \
$(debug)/src/cluster/Cluster_CutConstraint.o \
$(debug)/src/cluster/Cluster_EdgeVar.o \
$(debug)/src/cluster/Cluster_MaxPlanarEdges.o \
$(debug)/src/cluster/Clusterer.o \
$(debug)/src/cluster/KuratowskiConstraint.o \
$(debug)/src/cluster/MaxCPlanar_Master.o \
$(debug)/src/cluster/MaxCPlanar_MinimalClusterConnection.o \
$(debug)/src/cluster/MaxCPlanar_Sub.o \
$(debug)/src/cluster/MaximumCPlanarSubgraph.o \
$(debug)/src/decomposition/BCTree.o \
$(debug)/src/decomposition/DynamicBCTree.o \
$(debug)/src/decomposition/DynamicSPQRForest.o \
$(debug)/src/decomposition/DynamicSPQRTree.o \
$(debug)/src/decomposition/NonPlanarCore.o \
$(debug)/src/decomposition/PlanarSPQRTree.o \
$(debug)/src/decomposition/StaticSPQRTree.o \
$(debug)/src/decomposition/TricComp.o \
$(debug)/src/energybased/AdjacencyOracle.o \
$(debug)/src/energybased/ArrayGraph.o \
$(debug)/src/energybased/Attraction.o \
$(debug)/src/energybased/CoinTutteLayout.o \
$(debug)/src/energybased/DavidsonHarel.o \
$(debug)/src/energybased/DavidsonHarelLayout.o \
$(debug)/src/energybased/EdgeAttributes.o \
$(debug)/src/energybased/EnergyFunction.o \
$(debug)/src/energybased/FMEKernel.o \
$(debug)/src/energybased/FMEMultipoleKernel.o \
$(debug)/src/energybased/FMEThread.o \
$(debug)/src/energybased/FMMMLayout.o \
$(debug)/src/energybased/FastMultipoleEmbedder.o \
$(debug)/src/energybased/FastUtils.o \
$(debug)/src/energybased/FruchtermanReingold.o \
$(debug)/src/energybased/GEMLayout.o \
$(debug)/src/energybased/GalaxyMultilevel.o \
$(debug)/src/energybased/IntersectionRectangle.o \
$(debug)/src/energybased/LinearQuadtree.o \
$(debug)/src/energybased/LinearQuadtreeBuilder.o \
$(debug)/src/energybased/LinearQuadtreeExpansion.o \
$(debug)/src/energybased/MAARPacking.o \
$(debug)/src/energybased/Multilevel.o \
$(debug)/src/energybased/MultilevelGraph.o \
$(debug)/src/energybased/NMM.o \
$(debug)/src/energybased/NodeAttributes.o \
$(debug)/src/energybased/NodePairEnergy.o \
$(debug)/src/energybased/Overlap.o \
$(debug)/src/energybased/Planarity.o \
$(debug)/src/energybased/PlanarityGrid.o \
$(debug)/src/energybased/QuadTreeNM.o \
$(debug)/src/energybased/QuadTreeNodeNM.o \
$(debug)/src/energybased/Repulsion.o \
$(debug)/src/energybased/Set.o \
$(debug)/src/energybased/SpringEmbedderFR.o \
$(debug)/src/energybased/SpringEmbedderFRExact.o \
$(debug)/src/energybased/SpringEmbedderKK.o \
$(debug)/src/energybased/StressMajorizationSimple.o \
$(debug)/src/energybased/UniformGrid.o \
$(debug)/src/energybased/WSPD.o \
$(debug)/src/energybased/multilevelmixer/BarycenterPlacer.o \
$(debug)/src/energybased/multilevelmixer/CirclePlacer.o \
$(debug)/src/energybased/multilevelmixer/EdgeCoverMerger.o \
$(debug)/src/energybased/multilevelmixer/IndependentSetMerger.o \
$(debug)/src/energybased/multilevelmixer/LocalBiconnectedMerger.o \
$(debug)/src/energybased/multilevelmixer/MMMExampleFastLayout.o \
$(debug)/src/energybased/multilevelmixer/MMMExampleNiceLayout.o \
$(debug)/src/energybased/multilevelmixer/MMMExampleNoTwistLayout.o \
$(debug)/src/energybased/multilevelmixer/MatchingMerger.o \
$(debug)/src/energybased/multilevelmixer/MedianPlacer.o \
$(debug)/src/energybased/multilevelmixer/MixedForceLayout.o \
$(debug)/src/energybased/multilevelmixer/ModularMultilevelMixerLayout.o \
$(debug)/src/energybased/multilevelmixer/RandomMerger.o \
$(debug)/src/energybased/multilevelmixer/RandomPlacer.o \
$(debug)/src/energybased/multilevelmixer/ScalingLayout.o \
$(debug)/src/energybased/multilevelmixer/SolarMerger.o \
$(debug)/src/energybased/multilevelmixer/SolarPlacer.o \
$(debug)/src/energybased/multilevelmixer/ZeroPlacer.o \
$(debug)/src/energybased/numexcept.o \
$(debug)/src/external/coin.o \
$(debug)/src/fileformats/DinoLineBuffer.o \
$(debug)/src/fileformats/DinoTools.o \
$(debug)/src/fileformats/DinoUmlDiagramGraph.o \
$(debug)/src/fileformats/DinoUmlModelGraph.o \
$(debug)/src/fileformats/DinoUmlToGraphConverter.o \
$(debug)/src/fileformats/DinoXmlParser.o \
$(debug)/src/fileformats/DinoXmlScanner.o \
$(debug)/src/fileformats/GmlParser.o \
$(debug)/src/fileformats/OgmlParser.o \
$(debug)/src/fileformats/XmlParser.o \
$(debug)/src/fileformats/simple_graph_load.o \
$(debug)/src/graphalg/ConvexHull.o \
$(debug)/src/graphalg/MinCostFlowModule.o \
$(debug)/src/graphalg/MinCostFlowReinelt.o \
$(debug)/src/graphalg/MinimumCut.o \
$(debug)/src/graphalg/ShortestPathsWithBFM.o \
$(debug)/src/graphalg/mcf_front_reinelt.o \
$(debug)/src/incremental/SimpleIncNodeInserter.o \
$(debug)/src/labeling/ELabelPosSimple.o \
$(debug)/src/layered/CrossingsMatrix.o \
$(debug)/src/layered/FastHierarchyLayout.o \
$(debug)/src/layered/HierarchyLayoutModule.o \
$(debug)/src/layered/OptimalHierarchyClusterLayout.o \
$(debug)/src/layered/OptimalHierarchyLayout.o \
$(debug)/src/layered/OptimalRanking.o \
$(debug)/src/layered/SplitHeuristic.o \
$(debug)/src/layered/acyclic_subgraph.o \
$(debug)/src/layered/heuristics.o \
$(debug)/src/layered/ranking.o \
$(debug)/src/layered/sugiyama-cluster.o \
$(debug)/src/layered/sugiyama.o \
$(debug)/src/lpsolver/LPSolver_coin.o \
$(debug)/src/misclayout/BalloonLayout.o \
$(debug)/src/misclayout/CircularLayout.o \
$(debug)/src/orthogonal/ClusterOrthoLayout.o \
$(debug)/src/orthogonal/ClusterOrthoShaper.o \
$(debug)/src/orthogonal/CompactionConstraintGraph.o \
$(debug)/src/orthogonal/EdgeRouter.o \
$(debug)/src/orthogonal/FlowCompaction.o \
$(debug)/src/orthogonal/LongestPathCompaction.o \
$(debug)/src/orthogonal/NodeInfo.o \
$(debug)/src/orthogonal/OrthoLayout.o \
$(debug)/src/orthogonal/OrthoRep.o \
$(debug)/src/orthogonal/OrthoShaper.o \
$(debug)/src/packing/CCLayoutPackModule.o \
$(debug)/src/packing/ComponentSplitterLayout.o \
$(debug)/src/packing/TileToRowsCCPacker.o \
$(debug)/src/planarity/BoyerMyrvold.o \
$(debug)/src/planarity/BoyerMyrvoldInit.o \
$(debug)/src/planarity/BoyerMyrvoldPlanar.o \
$(debug)/src/planarity/ClusterPlanRep.o \
$(debug)/src/planarity/EdgeInsertionModule.o \
$(debug)/src/planarity/EmbedPQTree.o \
$(debug)/src/planarity/EmbedderMDMFLengthAttribute.o \
$(debug)/src/planarity/EmbedderMaxFace.o \
$(debug)/src/planarity/EmbedderMaxFaceLayers.o \
$(debug)/src/planarity/EmbedderMinDepth.o \
$(debug)/src/planarity/EmbedderMinDepthMaxFace.o \
$(debug)/src/planarity/EmbedderMinDepthMaxFaceLayers.o \
$(debug)/src/planarity/EmbedderMinDepthPiTa.o \
$(debug)/src/planarity/ExtractKuratowskis.o \
$(debug)/src/planarity/FastPlanarSubgraph.o \
$(debug)/src/planarity/FindKuratowskis.o \
$(debug)/src/planarity/FixedEmbeddingInserter.o \
$(debug)/src/planarity/GraphReduction.o \
$(debug)/src/planarity/Layout.o \
$(debug)/src/planarity/LayoutPlanRepModule.o \
$(debug)/src/planarity/MMCrossingMinimizationModule.o \
$(debug)/src/planarity/MMFixedEmbeddingInserter.o \
$(debug)/src/planarity/MMSubgraphPlanarizer.o \
$(debug)/src/planarity/MMVariableEmbeddingInserter.o \
$(debug)/src/planarity/MaximalPlanarSubgraphSimple.o \
$(debug)/src/planarity/MaximumPlanarSubgraph.o \
$(debug)/src/planarity/PlanRep.o \
$(debug)/src/planarity/PlanRepExpansion.o \
$(debug)/src/planarity/PlanRepInc.o \
$(debug)/src/planarity/PlanRepUML.o \
$(debug)/src/planarity/PlanarModule.o \
$(debug)/src/planarity/PlanarPQTree.o \
$(debug)/src/planarity/PlanarSubgraphModule.o \
$(debug)/src/planarity/PlanarSubgraphPQTree.o \
$(debug)/src/planarity/PlanarizationGridLayout.o \
$(debug)/src/planarity/PlanarizationLayout.o \
$(debug)/src/planarity/PlanarizationLayout_inc.o \
$(debug)/src/planarity/SimpleEmbedder.o \
$(debug)/src/planarity/SubgraphPlanarizer.o \
$(debug)/src/planarity/TopologyModule.o \
$(debug)/src/planarity/VariableEmbeddingInserter.o \
$(debug)/src/planarity/VariableEmbeddingInserter2.o \
$(debug)/src/planarlayout/BiconnectedShellingOrder.o \
$(debug)/src/planarlayout/IOPoints.o \
$(debug)/src/planarlayout/MMCBBase.o \
$(debug)/src/planarlayout/MixedModelBase.o \
$(debug)/src/planarlayout/MixedModelCrossingsBeautifierModule.o \
$(debug)/src/planarlayout/MixedModelLayout.o \
$(debug)/src/planarlayout/PlanarDrawLayout.o \
$(debug)/src/planarlayout/PlanarStraightLayout.o \
$(debug)/src/planarlayout/ShellingOrder.o \
$(debug)/src/planarlayout/ShellingOrderModule.o \
$(debug)/src/planarlayout/TriconnectedShellingOrder.o \
$(debug)/src/simultaneous/SimDraw.o \
$(debug)/src/simultaneous/SimDrawCaller.o \
$(debug)/src/simultaneous/SimDrawColorizer.o \
$(debug)/src/simultaneous/SimDrawCreator.o \
$(debug)/src/simultaneous/SimDrawCreatorSimple.o \
$(debug)/src/simultaneous/SimDrawManipulatorModule.o \
$(debug)/src/tree/RadialTreeLayout.o \
$(debug)/src/tree/TreeLayout.o \
$(debug)/src/upward/DominanceLayout.o \
$(debug)/src/upward/ExpansionGraph.o \
$(debug)/src/upward/FUPSSimple.o \
$(debug)/src/upward/FaceSinkGraph.o \
$(debug)/src/upward/FeasibleUpwardPlanarSubgraph.o \
$(debug)/src/upward/FixedEmbeddingUpwardEdgeInserter.o \
$(debug)/src/upward/LayerBasedUPRLayout.o \
$(debug)/src/upward/SubgraphUpwardPlanarizer.o \
$(debug)/src/upward/UpwardPlanRep.o \
$(debug)/src/upward/UpwardPlanarModule.o \
$(debug)/src/upward/UpwardPlanarSubgraphModule.o \
$(debug)/src/upward/UpwardPlanarSubgraphSimple.o \
$(debug)/src/upward/VisibilityLayout.o \

saferelease_OBJS = \
$(saferelease)/src/augmentation/DfsMakeBiconnected.o \
$(saferelease)/src/augmentation/PlanarAugmentation.o \
$(saferelease)/src/augmentation/PlanarAugmentationFix.o \
$(saferelease)/src/basic/CliqueFinder.o \
$(saferelease)/src/basic/CombinatorialEmbedding.o \
$(saferelease)/src/basic/DualGraph.o \
$(saferelease)/src/basic/EdgeComparer.o \
$(saferelease)/src/basic/EdgeComparerSimple.o \
$(saferelease)/src/basic/Graph.o \
$(saferelease)/src/basic/GraphAttributes.o \
$(saferelease)/src/basic/GraphCopy.o \
$(saferelease)/src/basic/GridLayout.o \
$(saferelease)/src/basic/GridLayoutModule.o \
$(saferelease)/src/basic/Hashing.o \
$(saferelease)/src/basic/Logger.o \
$(saferelease)/src/basic/NearestRectangleFinder.o \
$(saferelease)/src/basic/PoolMemoryAllocator.o \
$(saferelease)/src/basic/PreprocessorLayout.o \
$(saferelease)/src/basic/String.o \
$(saferelease)/src/basic/System.o \
$(saferelease)/src/basic/UMLGraph.o \
$(saferelease)/src/basic/basic.o \
$(saferelease)/src/basic/extended_graph_alg.o \
$(saferelease)/src/basic/geometry.o \
$(saferelease)/src/basic/graph_generators.o \
$(saferelease)/src/basic/modules.o \
$(saferelease)/src/basic/random_hierarchy.o \
$(saferelease)/src/basic/simple_graph_alg.o \
$(saferelease)/src/basic/stNumber.o \
$(saferelease)/src/cluster/CPlanarEdgeInserter.o \
$(saferelease)/src/cluster/CPlanarSubCLusteredST.o \
$(saferelease)/src/cluster/CPlanarSubClusteredGraph.o \
$(saferelease)/src/cluster/CconnectClusterPlanar.o \
$(saferelease)/src/cluster/CconnectClusterPlanarEmbed.o \
$(saferelease)/src/cluster/ClusterGraph.o \
$(saferelease)/src/cluster/ClusterGraphAttributes.o \
$(saferelease)/src/cluster/ClusterPlanarizationLayout.o \
$(saferelease)/src/cluster/Cluster_ChunkConnection.o \
$(saferelease)/src/cluster/Cluster_CutConstraint.o \
$(saferelease)/src/cluster/Cluster_EdgeVar.o \
$(saferelease)/src/cluster/Cluster_MaxPlanarEdges.o \
$(saferelease)/src/cluster/Clusterer.o \
$(saferelease)/src/cluster/KuratowskiConstraint.o \
$(saferelease)/src/cluster/MaxCPlanar_Master.o \
$(saferelease)/src/cluster/MaxCPlanar_MinimalClusterConnection.o \
$(saferelease)/src/cluster/MaxCPlanar_Sub.o \
$(saferelease)/src/cluster/MaximumCPlanarSubgraph.o \
$(saferelease)/src/decomposition/BCTree.o \
$(saferelease)/src/decomposition/DynamicBCTree.o \
$(saferelease)/src/decomposition/DynamicSPQRForest.o \
$(saferelease)/src/decomposition/DynamicSPQRTree.o \
$(saferelease)/src/decomposition/NonPlanarCore.o \
$(saferelease)/src/decomposition/PlanarSPQRTree.o \
$(saferelease)/src/decomposition/StaticSPQRTree.o \
$(saferelease)/src/decomposition/TricComp.o \
$(saferelease)/src/energybased/AdjacencyOracle.o \
$(saferelease)/src/energybased/ArrayGraph.o \
$(saferelease)/src/energybased/Attraction.o \
$(saferelease)/src/energybased/CoinTutteLayout.o \
$(saferelease)/src/energybased/DavidsonHarel.o \
$(saferelease)/src/energybased/DavidsonHarelLayout.o \
$(saferelease)/src/energybased/EdgeAttributes.o \
$(saferelease)/src/energybased/EnergyFunction.o \
$(saferelease)/src/energybased/FMEKernel.o \
$(saferelease)/src/energybased/FMEMultipoleKernel.o \
$(saferelease)/src/energybased/FMEThread.o \
$(saferelease)/src/energybased/FMMMLayout.o \
$(saferelease)/src/energybased/FastMultipoleEmbedder.o \
$(saferelease)/src/energybased/FastUtils.o \
$(saferelease)/src/energybased/FruchtermanReingold.o \
$(saferelease)/src/energybased/GEMLayout.o \
$(saferelease)/src/energybased/GalaxyMultilevel.o \
$(saferelease)/src/energybased/IntersectionRectangle.o \
$(saferelease)/src/energybased/LinearQuadtree.o \
$(saferelease)/src/energybased/LinearQuadtreeBuilder.o \
$(saferelease)/src/energybased/LinearQuadtreeExpansion.o \
$(saferelease)/src/energybased/MAARPacking.o \
$(saferelease)/src/energybased/Multilevel.o \
$(saferelease)/src/energybased/MultilevelGraph.o \
$(saferelease)/src/energybased/NMM.o \
$(saferelease)/src/energybased/NodeAttributes.o \
$(saferelease)/src/energybased/NodePairEnergy.o \
$(saferelease)/src/energybased/Overlap.o \
$(saferelease)/src/energybased/Planarity.o \
$(saferelease)/src/energybased/PlanarityGrid.o \
$(saferelease)/src/energybased/QuadTreeNM.o \
$(saferelease)/src/energybased/QuadTreeNodeNM.o \
$(saferelease)/src/energybased/Repulsion.o \
$(saferelease)/src/energybased/Set.o \
$(saferelease)/src/energybased/SpringEmbedderFR.o \
$(saferelease)/src/energybased/SpringEmbedderFRExact.o \
$(saferelease)/src/energybased/SpringEmbedderKK.o \
$(saferelease)/src/energybased/StressMajorizationSimple.o \
$(saferelease)/src/energybased/UniformGrid.o \
$(saferelease)/src/energybased/WSPD.o \
$(saferelease)/src/energybased/multilevelmixer/BarycenterPlacer.o \
$(saferelease)/src/energybased/multilevelmixer/CirclePlacer.o \
$(saferelease)/src/energybased/multilevelmixer/EdgeCoverMerger.o \
$(saferelease)/src/energybased/multilevelmixer/IndependentSetMerger.o \
$(saferelease)/src/energybased/multilevelmixer/LocalBiconnectedMerger.o \
$(saferelease)/src/energybased/multilevelmixer/MMMExampleFastLayout.o \
$(saferelease)/src/energybased/multilevelmixer/MMMExampleNiceLayout.o \
$(saferelease)/src/energybased/multilevelmixer/MMMExampleNoTwistLayout.o \
$(saferelease)/src/energybased/multilevelmixer/MatchingMerger.o \
$(saferelease)/src/energybased/multilevelmixer/MedianPlacer.o \
$(saferelease)/src/energybased/multilevelmixer/MixedForceLayout.o \
$(saferelease)/src/energybased/multilevelmixer/ModularMultilevelMixerLayout.o \
$(saferelease)/src/energybased/multilevelmixer/RandomMerger.o \
$(saferelease)/src/energybased/multilevelmixer/RandomPlacer.o \
$(saferelease)/src/energybased/multilevelmixer/ScalingLayout.o \
$(saferelease)/src/energybased/multilevelmixer/SolarMerger.o \
$(saferelease)/src/energybased/multilevelmixer/SolarPlacer.o \
$(saferelease)/src/energybased/multilevelmixer/ZeroPlacer.o \
$(saferelease)/src/energybased/numexcept.o \
$(saferelease)/src/external/coin.o \
$(saferelease)/src/fileformats/DinoLineBuffer.o \
$(saferelease)/src/fileformats/DinoTools.o \
$(saferelease)/src/fileformats/DinoUmlDiagramGraph.o \
$(saferelease)/src/fileformats/DinoUmlModelGraph.o \
$(saferelease)/src/fileformats/DinoUmlToGraphConverter.o \
$(saferelease)/src/fileformats/DinoXmlParser.o \
$(saferelease)/src/fileformats/DinoXmlScanner.o \
$(saferelease)/src/fileformats/GmlParser.o \
$(saferelease)/src/fileformats/OgmlParser.o \
$(saferelease)/src/fileformats/XmlParser.o \
$(saferelease)/src/fileformats/simple_graph_load.o \
$(saferelease)/src/graphalg/ConvexHull.o \
$(saferelease)/src/graphalg/MinCostFlowModule.o \
$(saferelease)/src/graphalg/MinCostFlowReinelt.o \
$(saferelease)/src/graphalg/MinimumCut.o \
$(saferelease)/src/graphalg/ShortestPathsWithBFM.o \
$(saferelease)/src/graphalg/mcf_front_reinelt.o \
$(saferelease)/src/incremental/SimpleIncNodeInserter.o \
$(saferelease)/src/labeling/ELabelPosSimple.o \
$(saferelease)/src/layered/CrossingsMatrix.o \
$(saferelease)/src/layered/FastHierarchyLayout.o \
$(saferelease)/src/layered/HierarchyLayoutModule.o \
$(saferelease)/src/layered/OptimalHierarchyClusterLayout.o \
$(saferelease)/src/layered/OptimalHierarchyLayout.o \
$(saferelease)/src/layered/OptimalRanking.o \
$(saferelease)/src/layered/SplitHeuristic.o \
$(saferelease)/src/layered/acyclic_subgraph.o \
$(saferelease)/src/layered/heuristics.o \
$(saferelease)/src/layered/ranking.o \
$(saferelease)/src/layered/sugiyama-cluster.o \
$(saferelease)/src/layered/sugiyama.o \
$(saferelease)/src/lpsolver/LPSolver_coin.o \
$(saferelease)/src/misclayout/BalloonLayout.o \
$(saferelease)/src/misclayout/CircularLayout.o \
$(saferelease)/src/orthogonal/ClusterOrthoLayout.o \
$(saferelease)/src/orthogonal/ClusterOrthoShaper.o \
$(saferelease)/src/orthogonal/CompactionConstraintGraph.o \
$(saferelease)/src/orthogonal/EdgeRouter.o \
$(saferelease)/src/orthogonal/FlowCompaction.o \
$(saferelease)/src/orthogonal/LongestPathCompaction.o \
$(saferelease)/src/orthogonal/NodeInfo.o \
$(saferelease)/src/orthogonal/OrthoLayout.o \
$(saferelease)/src/orthogonal/OrthoRep.o \
$(saferelease)/src/orthogonal/OrthoShaper.o \
$(saferelease)/src/packing/CCLayoutPackModule.o \
$(saferelease)/src/packing/ComponentSplitterLayout.o \
$(saferelease)/src/packing/TileToRowsCCPacker.o \
$(saferelease)/src/planarity/BoyerMyrvold.o \
$(saferelease)/src/planarity/BoyerMyrvoldInit.o \
$(saferelease)/src/planarity/BoyerMyrvoldPlanar.o \
$(saferelease)/src/planarity/ClusterPlanRep.o \
$(saferelease)/src/planarity/EdgeInsertionModule.o \
$(saferelease)/src/planarity/EmbedPQTree.o \
$(saferelease)/src/planarity/EmbedderMDMFLengthAttribute.o \
$(saferelease)/src/planarity/EmbedderMaxFace.o \
$(saferelease)/src/planarity/EmbedderMaxFaceLayers.o \
$(saferelease)/src/planarity/EmbedderMinDepth.o \
$(saferelease)/src/planarity/EmbedderMinDepthMaxFace.o \
$(saferelease)/src/planarity/EmbedderMinDepthMaxFaceLayers.o \
$(saferelease)/src/planarity/EmbedderMinDepthPiTa.o \
$(saferelease)/src/planarity/ExtractKuratowskis.o \
$(saferelease)/src/planarity/FastPlanarSubgraph.o \
$(saferelease)/src/planarity/FindKuratowskis.o \
$(saferelease)/src/planarity/FixedEmbeddingInserter.o \
$(saferelease)/src/planarity/GraphReduction.o \
$(saferelease)/src/planarity/Layout.o \
$(saferelease)/src/planarity/LayoutPlanRepModule.o \
$(saferelease)/src/planarity/MMCrossingMinimizationModule.o \
$(saferelease)/src/planarity/MMFixedEmbeddingInserter.o \
$(saferelease)/src/planarity/MMSubgraphPlanarizer.o \
$(saferelease)/src/planarity/MMVariableEmbeddingInserter.o \
$(saferelease)/src/planarity/MaximalPlanarSubgraphSimple.o \
$(saferelease)/src/planarity/MaximumPlanarSubgraph.o \
$(saferelease)/src/planarity/PlanRep.o \
$(saferelease)/src/planarity/PlanRepExpansion.o \
$(saferelease)/src/planarity/PlanRepInc.o \
$(saferelease)/src/planarity/PlanRepUML.o \
$(saferelease)/src/planarity/PlanarModule.o \
$(saferelease)/src/planarity/PlanarPQTree.o \
$(saferelease)/src/planarity/PlanarSubgraphModule.o \
$(saferelease)/src/planarity/PlanarSubgraphPQTree.o \
$(saferelease)/src/planarity/PlanarizationGridLayout.o \
$(saferelease)/src/planarity/PlanarizationLayout.o \
$(saferelease)/src/planarity/PlanarizationLayout_inc.o \
$(saferelease)/src/planarity/SimpleEmbedder.o \
$(saferelease)/src/planarity/SubgraphPlanarizer.o \
$(saferelease)/src/planarity/TopologyModule.o \
$(saferelease)/src/planarity/VariableEmbeddingInserter.o \
$(saferelease)/src/planarity/VariableEmbeddingInserter2.o \
$(saferelease)/src/planarlayout/BiconnectedShellingOrder.o \
$(saferelease)/src/planarlayout/IOPoints.o \
$(saferelease)/src/planarlayout/MMCBBase.o \
$(saferelease)/src/planarlayout/MixedModelBase.o \
$(saferelease)/src/planarlayout/MixedModelCrossingsBeautifierModule.o \
$(saferelease)/src/planarlayout/MixedModelLayout.o \
$(saferelease)/src/planarlayout/PlanarDrawLayout.o \
$(saferelease)/src/planarlayout/PlanarStraightLayout.o \
$(saferelease)/src/planarlayout/ShellingOrder.o \
$(saferelease)/src/planarlayout/ShellingOrderModule.o \
$(saferelease)/src/planarlayout/TriconnectedShellingOrder.o \
$(saferelease)/src/simultaneous/SimDraw.o \
$(saferelease)/src/simultaneous/SimDrawCaller.o \
$(saferelease)/src/simultaneous/SimDrawColorizer.o \
$(saferelease)/src/simultaneous/SimDrawCreator.o \
$(saferelease)/src/simultaneous/SimDrawCreatorSimple.o \
$(saferelease)/src/simultaneous/SimDrawManipulatorModule.o \
$(saferelease)/src/tree/RadialTreeLayout.o \
$(saferelease)/src/tree/TreeLayout.o \
$(saferelease)/src/upward/DominanceLayout.o \
$(saferelease)/src/upward/ExpansionGraph.o \
$(saferelease)/src/upward/FUPSSimple.o \
$(saferelease)/src/upward/FaceSinkGraph.o \
$(saferelease)/src/upward/FeasibleUpwardPlanarSubgraph.o \
$(saferelease)/src/upward/FixedEmbeddingUpwardEdgeInserter.o \
$(saferelease)/src/upward/LayerBasedUPRLayout.o \
$(saferelease)/src/upward/SubgraphUpwardPlanarizer.o \
$(saferelease)/src/upward/UpwardPlanRep.o \
$(saferelease)/src/upward/UpwardPlanarModule.o \
$(saferelease)/src/upward/UpwardPlanarSubgraphModule.o \
$(saferelease)/src/upward/UpwardPlanarSubgraphSimple.o \
$(saferelease)/src/upward/VisibilityLayout.o \

release_OBJS = \
$(release)/src/augmentation/DfsMakeBiconnected.o \
$(release)/src/augmentation/PlanarAugmentation.o \
$(release)/src/augmentation/PlanarAugmentationFix.o \
$(release)/src/basic/CliqueFinder.o \
$(release)/src/basic/CombinatorialEmbedding.o \
$(release)/src/basic/DualGraph.o \
$(release)/src/basic/EdgeComparer.o \
$(release)/src/basic/EdgeComparerSimple.o \
$(release)/src/basic/Graph.o \
$(release)/src/basic/GraphAttributes.o \
$(release)/src/basic/GraphCopy.o \
$(release)/src/basic/GridLayout.o \
$(release)/src/basic/GridLayoutModule.o \
$(release)/src/basic/Hashing.o \
$(release)/src/basic/Logger.o \
$(release)/src/basic/NearestRectangleFinder.o \
$(release)/src/basic/PoolMemoryAllocator.o \
$(release)/src/basic/PreprocessorLayout.o \
$(release)/src/basic/String.o \
$(release)/src/basic/System.o \
$(release)/src/basic/UMLGraph.o \
$(release)/src/basic/basic.o \
$(release)/src/basic/extended_graph_alg.o \
$(release)/src/basic/geometry.o \
$(release)/src/basic/graph_generators.o \
$(release)/src/basic/modules.o \
$(release)/src/basic/random_hierarchy.o \
$(release)/src/basic/simple_graph_alg.o \
$(release)/src/basic/stNumber.o \
$(release)/src/cluster/CPlanarEdgeInserter.o \
$(release)/src/cluster/CPlanarSubCLusteredST.o \
$(release)/src/cluster/CPlanarSubClusteredGraph.o \
$(release)/src/cluster/CconnectClusterPlanar.o \
$(release)/src/cluster/CconnectClusterPlanarEmbed.o \
$(release)/src/cluster/ClusterGraph.o \
$(release)/src/cluster/ClusterGraphAttributes.o \
$(release)/src/cluster/ClusterPlanarizationLayout.o \
$(release)/src/cluster/Cluster_ChunkConnection.o \
$(release)/src/cluster/Cluster_CutConstraint.o \
$(release)/src/cluster/Cluster_EdgeVar.o \
$(release)/src/cluster/Cluster_MaxPlanarEdges.o \
$(release)/src/cluster/Clusterer.o \
$(release)/src/cluster/KuratowskiConstraint.o \
$(release)/src/cluster/MaxCPlanar_Master.o \
$(release)/src/cluster/MaxCPlanar_MinimalClusterConnection.o \
$(release)/src/cluster/MaxCPlanar_Sub.o \
$(release)/src/cluster/MaximumCPlanarSubgraph.o \
$(release)/src/decomposition/BCTree.o \
$(release)/src/decomposition/DynamicBCTree.o \
$(release)/src/decomposition/DynamicSPQRForest.o \
$(release)/src/decomposition/DynamicSPQRTree.o \
$(release)/src/decomposition/NonPlanarCore.o \
$(release)/src/decomposition/PlanarSPQRTree.o \
$(release)/src/decomposition/StaticSPQRTree.o \
$(release)/src/decomposition/TricComp.o \
$(release)/src/energybased/AdjacencyOracle.o \
$(release)/src/energybased/ArrayGraph.o \
$(release)/src/energybased/Attraction.o \
$(release)/src/energybased/CoinTutteLayout.o \
$(release)/src/energybased/DavidsonHarel.o \
$(release)/src/energybased/DavidsonHarelLayout.o \
$(release)/src/energybased/EdgeAttributes.o \
$(release)/src/energybased/EnergyFunction.o \
$(release)/src/energybased/FMEKernel.o \
$(release)/src/energybased/FMEMultipoleKernel.o \
$(release)/src/energybased/FMEThread.o \
$(release)/src/energybased/FMMMLayout.o \
$(release)/src/energybased/FastMultipoleEmbedder.o \
$(release)/src/energybased/FastUtils.o \
$(release)/src/energybased/FruchtermanReingold.o \
$(release)/src/energybased/GEMLayout.o \
$(release)/src/energybased/GalaxyMultilevel.o \
$(release)/src/energybased/IntersectionRectangle.o \
$(release)/src/energybased/LinearQuadtree.o \
$(release)/src/energybased/LinearQuadtreeBuilder.o \
$(release)/src/energybased/LinearQuadtreeExpansion.o \
$(release)/src/energybased/MAARPacking.o \
$(release)/src/energybased/Multilevel.o \
$(release)/src/energybased/MultilevelGraph.o \
$(release)/src/energybased/NMM.o \
$(release)/src/energybased/NodeAttributes.o \
$(release)/src/energybased/NodePairEnergy.o \
$(release)/src/energybased/Overlap.o \
$(release)/src/energybased/Planarity.o \
$(release)/src/energybased/PlanarityGrid.o \
$(release)/src/energybased/QuadTreeNM.o \
$(release)/src/energybased/QuadTreeNodeNM.o \
$(release)/src/energybased/Repulsion.o \
$(release)/src/energybased/Set.o \
$(release)/src/energybased/SpringEmbedderFR.o \
$(release)/src/energybased/SpringEmbedderFRExact.o \
$(release)/src/energybased/SpringEmbedderKK.o \
$(release)/src/energybased/StressMajorizationSimple.o \
$(release)/src/energybased/UniformGrid.o \
$(release)/src/energybased/WSPD.o \
$(release)/src/energybased/multilevelmixer/BarycenterPlacer.o \
$(release)/src/energybased/multilevelmixer/CirclePlacer.o \
$(release)/src/energybased/multilevelmixer/EdgeCoverMerger.o \
$(release)/src/energybased/multilevelmixer/IndependentSetMerger.o \
$(release)/src/energybased/multilevelmixer/LocalBiconnectedMerger.o \
$(release)/src/energybased/multilevelmixer/MMMExampleFastLayout.o \
$(release)/src/energybased/multilevelmixer/MMMExampleNiceLayout.o \
$(release)/src/energybased/multilevelmixer/MMMExampleNoTwistLayout.o \
$(release)/src/energybased/multilevelmixer/MatchingMerger.o \
$(release)/src/energybased/multilevelmixer/MedianPlacer.o \
$(release)/src/energybased/multilevelmixer/MixedForceLayout.o \
$(release)/src/energybased/multilevelmixer/ModularMultilevelMixerLayout.o \
$(release)/src/energybased/multilevelmixer/RandomMerger.o \
$(release)/src/energybased/multilevelmixer/RandomPlacer.o \
$(release)/src/energybased/multilevelmixer/ScalingLayout.o \
$(release)/src/energybased/multilevelmixer/SolarMerger.o \
$(release)/src/energybased/multilevelmixer/SolarPlacer.o \
$(release)/src/energybased/multilevelmixer/ZeroPlacer.o \
$(release)/src/energybased/numexcept.o \
$(release)/src/external/coin.o \
$(release)/src/fileformats/DinoLineBuffer.o \
$(release)/src/fileformats/DinoTools.o \
$(release)/src/fileformats/DinoUmlDiagramGraph.o \
$(release)/src/fileformats/DinoUmlModelGraph.o \
$(release)/src/fileformats/DinoUmlToGraphConverter.o \
$(release)/src/fileformats/DinoXmlParser.o \
$(release)/src/fileformats/DinoXmlScanner.o \
$(release)/src/fileformats/GmlParser.o \
$(release)/src/fileformats/OgmlParser.o \
$(release)/src/fileformats/XmlParser.o \
$(release)/src/fileformats/simple_graph_load.o \
$(release)/src/graphalg/ConvexHull.o \
$(release)/src/graphalg/MinCostFlowModule.o \
$(release)/src/graphalg/MinCostFlowReinelt.o \
$(release)/src/graphalg/MinimumCut.o \
$(release)/src/graphalg/ShortestPathsWithBFM.o \
$(release)/src/graphalg/mcf_front_reinelt.o \
$(release)/src/incremental/SimpleIncNodeInserter.o \
$(release)/src/labeling/ELabelPosSimple.o \
$(release)/src/layered/CrossingsMatrix.o \
$(release)/src/layered/FastHierarchyLayout.o \
$(release)/src/layered/HierarchyLayoutModule.o \
$(release)/src/layered/OptimalHierarchyClusterLayout.o \
$(release)/src/layered/OptimalHierarchyLayout.o \
$(release)/src/layered/OptimalRanking.o \
$(release)/src/layered/SplitHeuristic.o \
$(release)/src/layered/acyclic_subgraph.o \
$(release)/src/layered/heuristics.o \
$(release)/src/layered/ranking.o \
$(release)/src/layered/sugiyama-cluster.o \
$(release)/src/layered/sugiyama.o \
$(release)/src/lpsolver/LPSolver_coin.o \
$(release)/src/misclayout/BalloonLayout.o \
$(release)/src/misclayout/CircularLayout.o \
$(release)/src/orthogonal/ClusterOrthoLayout.o \
$(release)/src/orthogonal/ClusterOrthoShaper.o \
$(release)/src/orthogonal/CompactionConstraintGraph.o \
$(release)/src/orthogonal/EdgeRouter.o \
$(release)/src/orthogonal/FlowCompaction.o \
$(release)/src/orthogonal/LongestPathCompaction.o \
$(release)/src/orthogonal/NodeInfo.o \
$(release)/src/orthogonal/OrthoLayout.o \
$(release)/src/orthogonal/OrthoRep.o \
$(release)/src/orthogonal/OrthoShaper.o \
$(release)/src/packing/CCLayoutPackModule.o \
$(release)/src/packing/ComponentSplitterLayout.o \
$(release)/src/packing/TileToRowsCCPacker.o \
$(release)/src/planarity/BoyerMyrvold.o \
$(release)/src/planarity/BoyerMyrvoldInit.o \
$(release)/src/planarity/BoyerMyrvoldPlanar.o \
$(release)/src/planarity/ClusterPlanRep.o \
$(release)/src/planarity/EdgeInsertionModule.o \
$(release)/src/planarity/EmbedPQTree.o \
$(release)/src/planarity/EmbedderMDMFLengthAttribute.o \
$(release)/src/planarity/EmbedderMaxFace.o \
$(release)/src/planarity/EmbedderMaxFaceLayers.o \
$(release)/src/planarity/EmbedderMinDepth.o \
$(release)/src/planarity/EmbedderMinDepthMaxFace.o \
$(release)/src/planarity/EmbedderMinDepthMaxFaceLayers.o \
$(release)/src/planarity/EmbedderMinDepthPiTa.o \
$(release)/src/planarity/ExtractKuratowskis.o \
$(release)/src/planarity/FastPlanarSubgraph.o \
$(release)/src/planarity/FindKuratowskis.o \
$(release)/src/planarity/FixedEmbeddingInserter.o \
$(release)/src/planarity/GraphReduction.o \
$(release)/src/planarity/Layout.o \
$(release)/src/planarity/LayoutPlanRepModule.o \
$(release)/src/planarity/MMCrossingMinimizationModule.o \
$(release)/src/planarity/MMFixedEmbeddingInserter.o \
$(release)/src/planarity/MMSubgraphPlanarizer.o \
$(release)/src/planarity/MMVariableEmbeddingInserter.o \
$(release)/src/planarity/MaximalPlanarSubgraphSimple.o \
$(release)/src/planarity/MaximumPlanarSubgraph.o \
$(release)/src/planarity/PlanRep.o \
$(release)/src/planarity/PlanRepExpansion.o \
$(release)/src/planarity/PlanRepInc.o \
$(release)/src/planarity/PlanRepUML.o \
$(release)/src/planarity/PlanarModule.o \
$(release)/src/planarity/PlanarPQTree.o \
$(release)/src/planarity/PlanarSubgraphModule.o \
$(release)/src/planarity/PlanarSubgraphPQTree.o \
$(release)/src/planarity/PlanarizationGridLayout.o \
$(release)/src/planarity/PlanarizationLayout.o \
$(release)/src/planarity/PlanarizationLayout_inc.o \
$(release)/src/planarity/SimpleEmbedder.o \
$(release)/src/planarity/SubgraphPlanarizer.o \
$(release)/src/planarity/TopologyModule.o \
$(release)/src/planarity/VariableEmbeddingInserter.o \
$(release)/src/planarity/VariableEmbeddingInserter2.o \
$(release)/src/planarlayout/BiconnectedShellingOrder.o \
$(release)/src/planarlayout/IOPoints.o \
$(release)/src/planarlayout/MMCBBase.o \
$(release)/src/planarlayout/MixedModelBase.o \
$(release)/src/planarlayout/MixedModelCrossingsBeautifierModule.o \
$(release)/src/planarlayout/MixedModelLayout.o \
$(release)/src/planarlayout/PlanarDrawLayout.o \
$(release)/src/planarlayout/PlanarStraightLayout.o \
$(release)/src/planarlayout/ShellingOrder.o \
$(release)/src/planarlayout/ShellingOrderModule.o \
$(release)/src/planarlayout/TriconnectedShellingOrder.o \
$(release)/src/simultaneous/SimDraw.o \
$(release)/src/simultaneous/SimDrawCaller.o \
$(release)/src/simultaneous/SimDrawColorizer.o \
$(release)/src/simultaneous/SimDrawCreator.o \
$(release)/src/simultaneous/SimDrawCreatorSimple.o \
$(release)/src/simultaneous/SimDrawManipulatorModule.o \
$(release)/src/tree/RadialTreeLayout.o \
$(release)/src/tree/TreeLayout.o \
$(release)/src/upward/DominanceLayout.o \
$(release)/src/upward/ExpansionGraph.o \
$(release)/src/upward/FUPSSimple.o \
$(release)/src/upward/FaceSinkGraph.o \
$(release)/src/upward/FeasibleUpwardPlanarSubgraph.o \
$(release)/src/upward/FixedEmbeddingUpwardEdgeInserter.o \
$(release)/src/upward/LayerBasedUPRLayout.o \
$(release)/src/upward/SubgraphUpwardPlanarizer.o \
$(release)/src/upward/UpwardPlanRep.o \
$(release)/src/upward/UpwardPlanarModule.o \
$(release)/src/upward/UpwardPlanarSubgraphModule.o \
$(release)/src/upward/UpwardPlanarSubgraphSimple.o \
$(release)/src/upward/VisibilityLayout.o \

debug: $(debug)/libOGDF.a

$(debug)/libOGDF.a: $(debug_OBJS)
	ar -r $(debug)/libOGDF.a $(debug_OBJS) $(LIBS)

cleandebug:
	rm -rf _debug

saferelease: $(saferelease)/libOGDF.a

$(saferelease)/libOGDF.a: $(saferelease_OBJS)
	ar -r $(saferelease)/libOGDF.a $(saferelease_OBJS) $(LIBS)

cleansaferelease:
	rm -rf _saferelease

release: $(release)/libOGDF.a

$(release)/libOGDF.a: $(release_OBJS)
	ar -r $(release)/libOGDF.a $(release_OBJS) $(LIBS)

cleanrelease:
	rm -rf _release

