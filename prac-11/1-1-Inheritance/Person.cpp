#include "Person.h"
Person::Person()
{
name = "EmptyName";
email = "EmptyEmail";
}
Person::Person(std::string paraName, std::string paraEmail)
{
    name = paraName;
    email = paraEmail;
}
std::string Person::getName()
{
    return name;
}
std::string Person::getEmail()
{
    return email;
}