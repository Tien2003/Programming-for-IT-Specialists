#include "Squirrel.h"

Squirrel::Squirrel(string pName) : Animal(pName, "Squirrel")
{
    nutsGathered = 0;
}
void Squirrel::gatherNuts()
{
    nutsGathered = nutsGathered*0.5;
    nutsGathered += 10;
}
void Squirrel::eat()
{
    cout << name << " the Squirrel nibbles at the nuts they have gathered." << endl;
}

void Squirrel::sleep()
{
    cout << "The squirrel sleeps silently..." <<endl;
}
