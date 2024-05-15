#include "House.h"
#include <iostream>

int main()
{
    House house1;
    house1.printInfo(); 
    House house2("56 Totallybelievablestreetname", "blue");
    house2.printInfo();

    return 0;
}