#include "SimpleNode.h"

SimpleNode::SimpleNode() {
    this->nodeId = 0;
    NeighborCount = 0;
    arrNeighbors = nullptr;
}
SimpleNode::SimpleNode(int nodeId)
{
    this->nodeId = nodeId;
    NeighborCount = 0;
    arrNeighbors = nullptr;
}
void SimpleNode::addEdge(SimpleNode& n)
{
    if( NeighborCount == 0)
    {
        arrNeighbors =  new SimpleNode[1];
        arrNeighbors[0] = n;
        NeighborCount++;
    }
    else
    {
        SimpleNode* temp = new SimpleNode [NeighborCount+1];
        for(int i=0; i<NeighborCount; i++)
        {
            temp[i] = arrNeighbors[i];
        }
        temp[NeighborCount] = n;

        delete [] arrNeighbors;
        arrNeighbors = temp;
        temp = nullptr;
        NeighborCount++;
    }
}
int SimpleNode::getneighborcount()
{
    return NeighborCount;
}
SimpleNode& SimpleNode::getneighbor()
{
    return *this;
}

void SimpleNode::setNodeId(int& nodeId)
{
    this->nodeId = nodeId;
}

int SimpleNode::getNodeId()
{
    return nodeId;
}
void SimpleNode::setNeighborCount(int& NeighborCount)
{
    this->NeighborCount = NeighborCount;
}
void SimpleNode::setarrNeighbors(SimpleNode*& arrNeighbors)
{
    this->arrNeighbors = arrNeighbors;
}
void SimpleNode::displayNeighbor()
{
    for(int i=0; i<NeighborCount; i++)
    {
        cout<<"Neighbor "<<(i+1)<<": ";
        cout<<arrNeighbors[i].nodeId<<endl;
    }
}
SimpleNode::~SimpleNode() {}