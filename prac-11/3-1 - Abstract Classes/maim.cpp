#include <iostream>
#include <string>
#include "PocketMonster.h"
#include "ElectricType.h"



int main() {
    ElectricType monster1;
    std::cout << "Monster 1 Attack Damage: " << monster1.attack("normal") << std::endl;
    std::cout << "Monster 1 Attack Damage (Critical): " << monster1.attack("water") << std::endl;
    std::cout << "Monster 1 Attack Damage (Reduced): " << monster1.attack("rock") << std::endl;

    // Create an ElectricType monster with custom attack damage
    ElectricType monster2(20);
    std::cout << "\nMonster 2 Attack Damage: " << monster2.attack("normal") << std::endl;
    std::cout << "Monster 2 Attack Damage (Critical): " << monster2.attack("water") << std::endl;
    std::cout << "Monster 2 Attack Damage (Reduced): " << monster2.attack("rock") << std::endl;


    return 0;
}