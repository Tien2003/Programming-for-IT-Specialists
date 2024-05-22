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
    Tiger t("Timmy");
    callEat(&t);
    Squirrel s("Louis");
    callEat(&s);

    s.gatherNuts();
    s.gatherNuts();

    return 0;
}