#ifndef NETWORK_H
#define NETWORK_H

#include <Vertex.h>

struct Network {

    const Vertex* const source;
    const Vertex* const destination;

    Network(Vertex* source, Vertex* destination) : source(source), destination(destination) {}
};

#endif