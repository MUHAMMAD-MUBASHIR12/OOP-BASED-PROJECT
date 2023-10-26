//
// Created by moeez on 04/06/2023.
//

#include "AttributedNode1.h"
#include <iostream>
using namespace std;

AttributedNode1::AttributedNode1()
{
    Gender = 'g';
    Age = 0;
    cout<<"/nAttributeNode1 Object Created/n"<<endl;
}
AttributedNode1::~AttributedNode1()
{
    cout<<"/nAttributeNode1 Object Destroyed/n"<<endl;
}

void AttributedNode1::setGender(char Gender)
{
    this->Gender = Gender;
}
void AttributedNode1::setAge(int Age)
{
    this->Age = Age;
}

char AttributedNode1::getGender()
{
    return Gender;
}
int AttributedNode1::getAge()
{
    return Age;
}
void AttributedNode1::displayAttribute1()
{
    cout<<"Age: "<<Age<<endl;
    cout<<"Gender: "<<Gender<<endl;
}