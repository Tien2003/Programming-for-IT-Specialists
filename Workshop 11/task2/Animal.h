#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
protected:
  std::string name;
  std::string species;
  int id;
  static int animal_counter;

public:
  Animal(std::string my_species);
  void set_name(std::string my_name);
  std::string get_species();
  std::string get_name();
  int get_id();
};

#endif /* ANIMAL_H */