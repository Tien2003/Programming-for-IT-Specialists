#include <iostream>
#include "Person.h"
#include "car.h"

int main() {
    // Create some Person objects
    Person person1("John", 25);
    Person person2("Alice", 13);
    Person person3("Bob", 30);
    Person person4("Eve", 22);

    // Create a Car object with default capacity
    Car car;

    // Add passengers to the car
    car.addPassenger(&person1);
    car.addPassenger(&person2);
    car.addPassenger(&person3);
    car.addPassenger(&person4);

    person1.earnLicence();
    person2.earnLicence();

    // Print information about passengers
    std::cout << "Passengers in the car:\n";
    car.printPassengers();

    // Check if there's a driver
    if (car.hasDriver()) {
        std::cout << "There is a driver in the car.\n";
    } else {
        std::cout << "There is no driver in the car.\n";
    }

    return 0;
}