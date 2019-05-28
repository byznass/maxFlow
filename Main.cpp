#include <Main.h>

int main() {

    MaxFlowInputStream* inputStream = new FileMaxFlowInputStream("maxflow.in");
    Network* network = inputStream->parse();
    inputStream->close();

    MaxFlowAlgorithm* maxFlowAlgorithm = new PushRelabelAlgorithm();
    MaxFlowSize* maxFlowSize = maxFlowAlgorithm->computeMaxFlowSize(network);

    MaxFlowOutputStream* outputStream = new FileMaxFlowOutputStream("maxflow.out");
    outputStream->write(maxFlowSize->convertToString());
    outputStream->close();

    return 0;
}