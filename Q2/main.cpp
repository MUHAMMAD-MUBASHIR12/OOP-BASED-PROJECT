#include <iostream>
#include "AttributedGraph1.h"
using namespace std;

int main() {
    AttributedGraph1 Graph;
    int nodeId_1, nodeId_2, nodeId_3, nodeId_4;

 int i = 0;
while (i < 4)
{
    cout << "\nEnter Node ID: ";

    if (i == 0)
        cin >> nodeId_1;
    if (i == 1)
        cin >> nodeId_2;
    if (i == 2)
        cin >> nodeId_3;
    if (i == 3)
        cin >> nodeId_4;

    i++;
}

    Graph.addNode(nodeId_1);
    Graph.addNode(nodeId_2);
    Graph.addNode(nodeId_3);
    Graph.addNode(nodeId_4);

    Graph.addEdge(nodeId_1, nodeId_2);
    Graph.addEdge(nodeId_1, nodeId_3);
    Graph.addEdge(nodeId_2, nodeId_4);


    Graph.appendAttributes();
    cout<<"\n\n>>Printing Graph Data<<\n\n";
    Graph.printGraphData();
    return 0;
}
