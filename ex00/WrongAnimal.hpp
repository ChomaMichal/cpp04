#pragma once

#include <iostream>
#include <string>

class WrongAnimal {
public:
  WrongAnimal();
  WrongAnimal(const WrongAnimal& obj);
  virtual ~WrongAnimal();
  WrongAnimal& operator=(const WrongAnimal& obj);

  void			setType(const std::string &str);
  std::string	getType(void);
  void	makeSound(void)const;

protected:
  std::string type;
};
