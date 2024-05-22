#include "Animal.h"

int Animal::animal_counter = 1;

Animal::Animal(std::string my_species)
{
    name = "no_name";
    species = my_species;
    id = animal_counter;
    animal_counter++;
}

std::string Animal::get_species()
{
    return species;
}

void Animal::set_name(std::string my_name)
{
    name = my_name;
}

std::string Animal::get_name()
{
    return name;
}

int Animal::get_id()
{
    return id;
}