#include "AttributedGraph1.h"

AttributedGraph1::AttributedGraph1()
{
    arrAttributedNode1 = new AttributedNode1[numNodes];
    cout<<"\nAttributedGraph1 Object Created\n"<<endl;
}
AttributedGraph1::~AttributedGraph1()
{
    cout<<"\nAttributedGraph1 Object Destroyed\n"<<endl;
}

void AttributedGraph1::appendAttributes()
{
    char Gender;
    int Age;
    int i = 0;

while (i < numNodes)
{
    cout << "\nNode ID: " << arrNode[i].getNodeId();
    cout << "\nEnter Age: ";
    cin >> Age;
    cout << "Enter Gender (m/f): ";
    cin >> Gender;

    arrAttributedNode1[i].setAge(Age);
    arrAttributedNode1[i].setGender(Gender);

    i++;
}
}
void AttributedGraph1::printGraphData()
{
    int i = 0;
while (i < numNodes)
{
    cout << "Node ID: " << arrNode[i].getNodeId() << endl;
    arrAttributedNode1[i].displayAttribute1();
    arrNode[i].displayNeighbor();
    cout << endl;

    i++;
}
}