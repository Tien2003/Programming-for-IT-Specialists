#ifndef SQUIRREL_H
#define SQUIRREL_H
#include "Animal.h"

class Squirrel : public Animal
{
    int nutsGathered;
public:
    Squirrel(string pName);
    void gatherNuts();
    virtual void eat();
};

#endif