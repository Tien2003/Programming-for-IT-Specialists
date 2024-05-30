#include <iostream>
#include "Person.h"
#include "Employee.h"

void print(Person* p) {
    std::cout << "Name: " << p->getName() << ", Email: " << p->getEmail() << std::endl;
}

void print(Employee* e) {
    std::cout << "Name: " << e->getName() << ", Email: " << e->getEmail() << ", ID: " << e->getId() << ", Salary: " << e->getSalary() << std::endl;
}

int main() {
    Person* pPtr = new Person("John Doe", "john.doe@example.com");
    print(pPtr);
    delete pPtr;

    Employee* empPtr = new Employee("Jane Smith", "jane.smith@example.com", 50000.0);
    print(empPtr);
    delete empPtr;

    return 0;
}