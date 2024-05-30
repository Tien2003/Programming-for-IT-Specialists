#ifndef CAR_H
#define CAR_H
#include <string>
#include "Person.h"

class Car{
    // Variables
private:
    Person** passengers;    // Dynamically allocated array of Person pointers
    int capacity;
    int numPassengers;


    // Methods
public:
    Car();                  // Default constructor, sets capacity to 5
    Car(int pCapacity); 

    int getNumPassengers();
    Person** getPassengers();

    // Should print information about passengers (see description)
    void printPassengers();
    bool addPassenger(Person* pPassenger);

    // Returns true if one of the passengers has a licence
    bool hasDriver();
};

#endif
