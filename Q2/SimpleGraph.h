#ifndef HAB_PROJECT_SIMPLEGRAPH_H
#define HAB_PROJECT_SIMPLEGRAPH_H
#include "SimpleNode.h"

class SimpleGraph {
protected:
    int numNodes;
    int numEdges;
    SimpleNode* arrNode;
public:
    SimpleGraph();
    SimpleGraph(int nodeId);
    virtual ~SimpleGraph();

    void addNode(int nodeId);
    void addEdge(int nodeid1, int nodeid2);
    void printNeighbors(int nodeId);
    virtual void printGraphData();
};
#endif 
