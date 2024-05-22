#include "Squirrel.h"

Squirrel::Squirrel(string pName) : Animal(pName, "Squirrel")
{
    nutsGathered = 0;
}
void Squirrel::gatherNuts()
{
    nutsGathered = nutsGathered*0.5;
    nutsGathered += 10;
    std::cout << name << " the " << species << " has gathered " << nutsGathered << " nuts." << std::endl;

}
void Squirrel::eat()
{
    cout << name << " the Squirrel nibbles at the nuts they have gathered." << endl;
}
