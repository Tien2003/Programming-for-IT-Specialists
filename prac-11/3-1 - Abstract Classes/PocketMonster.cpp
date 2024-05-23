#include "PocketMonster.h"
#include <iostream>

PocketMonster::PocketMonster(){

}
// Pure virtual function, returns attack damage given defensive type
int PocketMonster::attack(std::string defType){
    return 0;
}