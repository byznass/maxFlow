#include <FileMaxFlowInputStream.h>

FileMaxFlowInputStream::FileMaxFlowInputStream(std::string filePath) {

    file.open(filePath);
}

FileMaxFlowInputStream::~FileMaxFlowInputStream() {

    file.close();
}

Network* FileMaxFlowInputStream::parse() {

    int N, M;
    file >>N >>M;

    for(int i=0; i<M; ++i) {
        int x, y, z;
        file >>x >>y >>z;

        
    }
}

void FileMaxFlowInputStream::close() {

    file.close();
}