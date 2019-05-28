#ifndef FILE_INPUT_STREAM_H
#define FILE_INPUT_STREAM_H

#include <string>
#include <MaxFlowInputStream.h>
#include <fstream>

class FileMaxFlowInputStream : public MaxFlowInputStream {

    std::ifstream file;

public:
    FileMaxFlowInputStream(std::string);
    ~FileMaxFlowInputStream();

    virtual Network* parse();
    virtual void close();
};

#endif