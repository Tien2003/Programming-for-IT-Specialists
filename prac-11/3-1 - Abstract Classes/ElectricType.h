#ifndef ELECTRICTYPE_H
#define ELECTRICTYPE_H
#include<string>
#include "PocketMonster.h"

class ElectricType : public PocketMonster
{
public:
    ElectricType();
    ElectricType(int atkDmg);
    int virtual attack(std::string defType); 
};


#endif