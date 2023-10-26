#ifndef HAB_PROJECT_ATTRIBUTEDGRAPH1_H
#define HAB_PROJECT_ATTRIBUTEDGRAPH1_H
#include "SimpleGraph.h"
#include "AttributedNode1.h"

class AttributedGraph1: public SimpleGraph{
private:
    AttributedNode1* arrAttributedNode1;
public:
    AttributedGraph1();
    ~AttributedGraph1();

    void appendAttributes();
    void printGraphData();
};
#endif 
