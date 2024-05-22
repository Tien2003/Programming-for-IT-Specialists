#include "Tiger.h"
#include "Animal.h"
#include "Squirrel.h"
#include <iostream>
using namespace std;

void callEat(Animal* ptr)
{
    ptr->eat();
}

int main()
{
    Animal a("Generic", "Animal");
    Tiger t("Timmy");
    callEat(&t);
    Squirrel s("Louis");
    callEat(&s);

    a.sleep();
    t.sleep();
    s.sleep();
}