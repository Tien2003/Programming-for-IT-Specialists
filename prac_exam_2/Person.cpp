#include "Person.h"
#include <iostream>


Person::Person(){
    name = "Empty";
    age = 0;
};

Person::Person(std::string pName, int pAge){
    name = pName;
    age = pAge;
};

std::string Person::getName(){
    return name;
};
int Person::getAge(){
    return age;
};
bool Person::getHasLicence(){
    if (age >= 16){
        return true;
    }
    return false;
};
// Acquire licence only if age > 16
void Person::earnLicence(){

};
