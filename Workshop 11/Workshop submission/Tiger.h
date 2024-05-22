#ifndef TIGER_H
#define TIGER_H
#include "Animal.h"

class Tiger : public Animal
{
    int kills;
public:
    Tiger(string pName);
    void hunt();
    virtual void eat();
    virtual void sleep();
};

#endif