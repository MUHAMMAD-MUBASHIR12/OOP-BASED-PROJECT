#include "SimpleGraph.h"
#include <iostream>
using namespace std;

SimpleGraph::SimpleGraph()
{
    numEdges = 0;
    numNodes = 0;
    arrNode = nullptr;
    cout<<"\nSimpleGraph Object Created\n"<<endl;
}
SimpleGraph::SimpleGraph(int nodeId)
{
    numNodes = 0;
    numEdges = 0;
    arrNode =  new SimpleNode[1];
    arrNode[0].setNodeId(nodeId);

    numNodes++;
}
SimpleGraph::~SimpleGraph()
{
    delete [] arrNode;
    cout<<"\nSimpleGraph Object Destroyed\n"<<endl;
}

void SimpleGraph::addNode(int nodeId)
{
    if( numNodes == 0)
    {
        arrNode =  new SimpleNode[1];
        arrNode[0].setNodeId(nodeId);
        numNodes++;
    }
    else
    {
        SimpleNode* temp = new SimpleNode [numNodes+1];
        for(int i=0; i<numNodes; i++)
        {
            temp[i] = arrNode[i];
        }
        temp[numNodes].setNodeId(nodeId);

        delete [] arrNode;
        arrNode = temp;
        temp = nullptr;
        numNodes++;
    }
}
void SimpleGraph::addEdge(int nodeId1, int nodeId2)
{
    SimpleNode* node1 = nullptr;
    SimpleNode* node2 = nullptr;

int i=0;  
while (i < numNodes)
{
    if (arrNode[i].getNodeId() == nodeId1)
        node1 = &arrNode[i];
    else if (arrNode[i].getNodeId() == nodeId2)
        node2 = &arrNode[i];

    i++;
}

    if (node1 != nullptr && node2 != nullptr) {
        node1->addEdge(*node2);
        node2->addEdge(*node1);
        ++numEdges;
    }
}
void SimpleGraph::printNeighbors(int nodeId)
{
    int i = 0;

while (i < numNodes)
{
    if (arrNode[i].getNodeId() == nodeId)
        arrNode[i].displayNeighbor();

    i++;
}
}
void SimpleGraph::printGraphData()
{
    int i = 0;

while (i < numNodes)
{
    cout << "Node ID: " << arrNode[i].getNodeId() << endl;
    arrNode[i].displayNeighbor();
    cout << endl;

    i++;
}
}