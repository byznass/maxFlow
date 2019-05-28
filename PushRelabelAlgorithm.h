#ifndef PUSH_RELABEL_ALGORITHM_H
#define PUSH_RELABEL_ALGORITHM_H

#include <MaxFlowAlgorithm.h>

class PushRelabelAlgorithm : public MaxFlowAlgorithm {

public:

    virtual MaxFlowSize* computeMaxFlowSize(Network* network);
};

#endif