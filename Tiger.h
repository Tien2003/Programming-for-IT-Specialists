#ifndef TIGER_H
#define TIGER_H
#include <string>

class Tiger
{
    std::string name;
public:
    int age;

    // Constructors
    Tiger();
    Tiger(int age, std::string name);
    ~Tiger();

    // Getters
    std::string getName();
    int getAge();

    // Setters
    void setName(std::string newName);
    void setAge(int newAge);

    void eatFood();

};

#endif