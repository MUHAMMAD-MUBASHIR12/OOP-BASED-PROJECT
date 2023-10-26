//
// Created by moeez on 04/06/2023.
//

#ifndef Q2_ATTRIBUTEDGRAPH2_H
#define Q2_ATTRIBUTEDGRAPH2_H
#include "SimpleGraph.h"
#include "AttributedNode2.h"

class AttributedGraph2: public SimpleGraph{
private:
    AttributedNode2* arrAttributedNode2;
public:
    AttributedGraph2();
    ~AttributedGraph2();

    void appendAttributes(int nodeId);
    void printGraphData();
    void printNeighbors(int nodeId);
};


#endif //Q2_ATTRIBUTEDGRAPH2_H
