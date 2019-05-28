#ifndef INPUT_STREAM_H
#define INPUT_STREAM_H

#include <Network.h>

class MaxFlowInputStream {

protected:
    
    virtual ~MaxFlowInputStream();

public:

    virtual Network* parse();
    virtual void close();
};

#endif