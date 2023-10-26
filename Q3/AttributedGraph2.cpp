//
// Created by moeez on 04/06/2023.
//

#include "AttributedGraph2.h"

AttributedGraph2::AttributedGraph2() :SimpleGraph()
{
    arrAttributedNode2 = new AttributedNode2[numNodes];
    cout<<"\nAttributionGraph2 Object Created\n"<<endl;
}
AttributedGraph2::~AttributedGraph2()
{
    cout<<"\nAttributionGraph2 Object Destroyed\n"<<endl;
}

void AttributedGraph2::appendAttributes(int nodeId)
{
    string profession;
    string cityname;
    for(int i=0; i<numNodes; i++)
    {
        if(arrNode[i].getNodeId() == nodeId)
        {
            cout<<"\n\n>>Adding Attributes to Node<<\n\n";
            cout<<"Node ID: "<<arrNode[i].getNodeId()<<endl;
            cout<<"Enter Profession: ";
            cin>> profession;
            cout<<"Enter City Name: ";
            cin>> cityname;

            arrAttributedNode2[i].setCityName(cityname);
            arrAttributedNode2[i].setProfession(profession);


            break;
        }
    }
    return;
}
void AttributedGraph2::printGraphData()
{
    for(int i=0; i<numNodes; i++)
    {
        cout<<"Node ID: "<<arrNode[i].getNodeId()<<endl;
        arrAttributedNode2[i].displayAttribute2();
        arrNode[i].displayNeighbor();
        cout<<endl;
    }
}
void AttributedGraph2::printNeighbors(int nodeId)
{
    for(int i=0; i<numNodes; i++)
    {
        if(arrNode[i].getNodeId() == nodeId)
        {
            cout<<"Node ID: "<<nodeId<<endl;
            arrAttributedNode2[i].displayAttribute2();
            arrNode[i].displayNeighbor();
        }
    }
}
