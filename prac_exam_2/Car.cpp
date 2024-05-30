#include "Car.h"
#include <iostream>
#include "Person.h"

// Variables


// Methods
Car::Car() {
    capacity = 5;
    numPassengers = 0;
    passengers = new Person*[capacity];
};                  // Default constructor, sets capacity to 5
Car::Car(int pCapacity){
    capacity = pCapacity;
}; 

int Car::getNumPassengers(){
    return numPassengers;
};
Person** Car::getPassengers(){
    return passengers;
};

// Should print information about passengers (see description)
void Car::printPassengers(){
    for (int i=0; i<numPassengers; i++){
        if (passengers[i] -> getHasLicence()){
            std::cout << passengers[i]->getName() <<" (age" << passengers[i]->getAge() <<" ) has a licencce";
        }
        else{
            std::cout << passengers[i]->getName() <<" (age" << passengers[i]->getAge() <<" ) has no licencce";
        }
    }

};
bool Car::addPassenger(Person* pPassenger){
    if (numPassengers < capacity){
        passengers[numPassengers] = pPassenger;
        numPassengers ++;
        return true;
    }
    else{
        return false;
    }
};

// Returns true if one of the passengers has a licence
bool Car::hasDriver(){
    for (int i=0; i<numPassengers; i++){
        if (passengers[i] -> getHasLicence()){
            return true;
        }
    }
    return false;
};