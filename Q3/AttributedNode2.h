//
// Created by moeez on 04/06/2023.
//

#ifndef Q2_ATTRIBUTEDNODE2_H
#define Q2_ATTRIBUTEDNODE2_H
#include <string>
using namespace std;

class AttributedNode2 {
private:
    string Profession;
    string CityName;
public:
    AttributedNode2();
    ~AttributedNode2();

    void setProfession(string profession);
    void setCityName(string cityName);

    string getProfession();
    string getCityName();

    void displayAttribute2();
};


#endif //Q2_ATTRIBUTEDNODE2_H
