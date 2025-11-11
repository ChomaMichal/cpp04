#pragma once

#include "Animal.hpp"
#include <iostream>

class Cat : Animal {
public:
  Cat();
  Cat(const Cat&);
  ~Cat();

  Cat& operator=(const Cat&);

  void	makeSound(void)const;

private:
};

