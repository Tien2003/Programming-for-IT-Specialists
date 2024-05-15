#include "House.h"
#include <iostream>

House::House()
{
    address = "123 Notarealstreet";
    description = "boring";
}

House::House(std::string house_address, std::string house_description)
{
    address = house_address;
    description = house_description;
}

House::~House()
{  
}

int House::addressLength()
{
    return address.length();
}

void House::printInfo(){
    std::cout << "The house at " << address << "is " << description << "." << std::endl;
}