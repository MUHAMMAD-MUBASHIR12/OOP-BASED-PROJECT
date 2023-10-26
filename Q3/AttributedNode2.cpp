//
// Created by moeez on 04/06/2023.
//

#include "AttributedNode2.h"
#include <iostream>
#include <string>
using namespace std;

AttributedNode2::AttributedNode2()
{
    Profession= "";
    CityName= "";
    cout<<"\nAttributionNode2 Object Created\n"<<endl;
}
AttributedNode2::~AttributedNode2()
{
    cout<<"\nAttributionNode2 Object Destroyed\n"<<endl;
}

void AttributedNode2::setProfession(string profession)
{
    Profession = profession;
}
void AttributedNode2::setCityName(string cityName)
{
    CityName = cityName;
}

void AttributedNode2::displayAttribute2()
{
    cout<<"Profession: "<<Profession<<endl;
    cout<<"City Name: "<<CityName<<endl;
}
