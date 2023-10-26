//
// Created by moeez on 04/06/2023.
//

#ifndef RAYAN_PROJECT_ATTRIBUTEDNODE1_H
#define RAYAN_PROJECT_ATTRIBUTEDNODE1_H


class AttributedNode1 {
private:
    char Gender;
    int Age;
public:
    AttributedNode1();
    ~AttributedNode1();

    void setGender(char Gender);
    void setAge(int Age);

    char getGender();
    int getAge();

    void displayAttribute1();
};


#endif //RAYAN_PROJECT_ATTRIBUTEDNODE1_H
