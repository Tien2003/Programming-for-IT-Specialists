#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person
{
protected:
    std::string name;
    std::string email;

public:
    Person();
    Person(std::string parName, std::string parEmail);

    std::string getName();
    std::string getEmail();
};

#endif