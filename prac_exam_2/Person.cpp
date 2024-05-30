#include "Person.h"
#include <iostream>


Person::Person(){
    name = "Empty";
    age = 0;
    hasLicence = false;
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
    if (hasLicence == true){
        std::cout << "true";
        return true;
    }
    else{
        return false;
    }
};
// Acquire licence only if age > 16
void Person::earnLicence(){
    if (age >= 16){
        hasLicence = true;
    }
};
