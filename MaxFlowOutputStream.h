#ifndef MAX_FLOW_OUTPUT_STREAM_H
#define MAX_FLOW_OUTPUT_STREAM_H

#include <string>

class MaxFlowOutputStream {

protected:
    virtual ~MaxFlowOutputStream();

public:

    virtual void write(std::string contentToWrite);
    virtual void close();
};

#endif