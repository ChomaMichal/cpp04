#pragma once

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal {
public:
  WrongCat();
  WrongCat(const WrongCat&);
  ~WrongCat();

  WrongCat& operator=(const WrongCat&);

  void	makeSound(void)const;

private:
};

