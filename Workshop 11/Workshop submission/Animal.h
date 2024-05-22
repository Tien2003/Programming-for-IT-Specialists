#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
    string name;
    string species;
public:
    Animal(string pName, string pSpecies);
    virtual void eat();

    virtual void sleep();
};

#endif