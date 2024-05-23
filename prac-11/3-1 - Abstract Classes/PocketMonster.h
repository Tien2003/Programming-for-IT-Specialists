#ifndef POCKETMONSTER_H
#define POCKETMONSTER_H
#include <string>

class PocketMonster
{
protected:
    int hp;
    int attackDmg;
public:
    PocketMonster();
// Pure virtual function, returns attack damage given defensive type
    int virtual attack(std::string defType);
};

#endif