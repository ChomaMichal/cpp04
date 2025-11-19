#pragma once

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal {
public:
  Dog();
  Dog(const Dog&);
  ~Dog();

  Dog& operator=(const Dog&);

  void	makeSound(void)const;

private:
};

