#include "ElectricType.h"
#include<iostream>

ElectricType::ElectricType(){
    hp = 100;
    attackDmg = 100;
}
ElectricType::ElectricType(int atkDmg){
    hp = 100;
    attackDmg = atkDmg;
}

int ElectricType::attack(std::string defType){
    if (defType == "water"){
        attackDmg = static_cast<int>(attackDmg*1.5);
    }
    else if (defType == "rock")
    {
        attackDmg = attackDmg / 2;
    } 
    return attackDmg;
}