#include "Employee.h"

int Employee::next_id = 0;

Employee::Employee(){
    name = "EmptyName";
    email = "EmptyEmail";
    salary = 0;
    salary = -1;
}

Employee::Employee(std::string name, std::string email, double paraSalary) : Person(name, email) {
    this->name = name;
    this->email = email;
    id = next_id++;
    salary = paraSalary;
}

int Employee::getId(){
    return id;
}

double Employee::getSalary(){
    return salary;
}