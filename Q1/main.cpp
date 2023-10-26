#include <iostream>
#include "SimpleGraph.h"
using namespace std;

int main() {
    SimpleGraph Graph;
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

    cout<<"Neighbors for certain Node IDs:"<<endl;
    Graph.printNeighbors(nodeId_1);
    cout<<endl;
    Graph.printNeighbors(nodeId_2);

    cout<<"\nThe Graph Data is:"<<endl;
    Graph.printGraphData();

    return 0;
}