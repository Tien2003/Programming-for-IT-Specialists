#include "Tiger.h"

Tiger::Tiger(string pName) : Animal(pName, "Tiger")
{
    kills = 0;
}
void Tiger::hunt()
{
    kills++;
}
void Tiger::eat()
{
    cout << name << " the Tiger eats their meat voraciously!" << endl;
}
