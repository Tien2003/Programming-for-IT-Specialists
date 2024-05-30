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
    int damage = attackDmg;
    if (defType == "water"){
        damage = static_cast<int>(damage*1.5);
    }
    else if (defType == "rock")
    {
        damage = damage / 2;
    } 
    return damage;
}