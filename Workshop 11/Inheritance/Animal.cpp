#include "Animal.h"

Animal::Animal(string pName, string pSpecies)
{
    name = pName;
    species = pSpecies;
}

void Animal::eat()
{
    cout << name << " the " << species << " eats some generic food" << endl;
}