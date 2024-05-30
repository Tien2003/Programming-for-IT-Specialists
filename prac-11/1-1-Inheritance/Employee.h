#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"
#include <string>

class Employee : public Person
{
private:
    int id;
    static int next_id;
    double salary;
public:
    Employee();
    Employee(std::string name, std::string email, double paraSalary);
    
    int getId();
    double getSalary();
};


#endif
