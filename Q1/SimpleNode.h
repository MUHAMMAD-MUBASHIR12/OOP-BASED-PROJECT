#ifndef HAB_PROJECT_SIMPLENODE_H
#define HAB_PROJECT_SIMPLENODE_H
#include <iostream>
using namespace std;

class SimpleNode {
private:
    int nodeId;
    int NeighborCount;
    SimpleNode* arrNeighbors;
public:
    SimpleNode();
    SimpleNode(int nodeId);
    void addEdge(SimpleNode& n);
    int getneighborcount();
    SimpleNode& getneighbor();

    void setNodeId(int& nodeId);
    void setNeighborCount(int& NeighborCount);
    void setarrNeighbors(SimpleNode*& arrNeighbors);

    int getNodeId();

    void displayNeighbor();

    virtual ~SimpleNode();
};
#endif