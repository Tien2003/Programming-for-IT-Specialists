#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person{
    // Variables
protected:
    std::string name;
    int age;
    bool hasLicence;

public:
    // Methods
    Person();
    Person(std::string pName, int pAge);
    virtual std::string getName();
    virtual int getAge();
    bool getHasLicence();
    // Acquire licence only if age > 16
    void earnLicence();
};

#endif
