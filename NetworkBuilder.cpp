#include <NetworkBuilder.h>

NetworkBuilder::NetworkBuilder(int numberOfVertices) : verticesByIndex() {

    for(int i=0; i<numberOfVertices; ++i) {
        verticesByIndex.push_back(new Vertex(i));
    }
}

NetworkBuilder* NetworkBuilder::addArc(int sourceIndex, int destinationIndex, int capacity) {

    Vertex* source = verticesByIndex[sourceIndex];
    Vertex* destination = verticesByIndex[destinationIndex];

    return this;
}