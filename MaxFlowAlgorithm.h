#ifndef MAX_FLOW_ALGORITHM_H
#define MAX_FLOW_ALGORITHM_H

#include <MaxFlowSize.h>

class MaxFlowAlgorithm {

protected:

    MaxFlowAlgorithm();

public:

    virtual MaxFlowSize* computeMaxFlowSize(Network* network);
};

#endif