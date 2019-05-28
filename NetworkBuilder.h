#ifndef NETWORK_BUILDER_H
#define NETWORK_BUILDER_H

#include <Network.h>
#include <vector>

class NetworkBuilder {

    std::vector<Vertex*> verticesByIndex;

public:

    NetworkBuilder(int);

    NetworkBuilder* addArc(int, int, int);
    Network* build();
};

#endif