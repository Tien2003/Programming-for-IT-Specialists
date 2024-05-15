#ifndef HOUSE_H
#define HOUSE_H

#include <string>

class House{
    std::string address;
    std::string description;

public:
    House();                 // Default constructor; should initialise states as "123 Notarealstreet" and "boring" (from the order written above).
    House(std::string address, std::string description);

    ~House();

    // Methods/behaviours
    int addressLength();     // Returns the lengt Links to an external site. of the address string
    void printInfo();        // Prints vector as per provided format
};

#endif