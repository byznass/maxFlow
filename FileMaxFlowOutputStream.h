#ifndef FILE_MAX_FLOW_OUTPUT_STREAM_H
#define FILE_MAX_FLOW_OUTPUT_STREAM_H

#include <string>
#include <MaxFlowOutputStream.h>

class FileMaxFlowOutputStream : public MaxFlowOutputStream {

public:

    FileMaxFlowOutputStream(std::string filePath);
    virtual void write(std::string contentToWrite);
    virtual void close();
};

#endif