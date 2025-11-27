#pragma once

#include <iostream>
#include <string>

class Animal {
public:
  Animal();
  Animal(const Animal&);
  virtual ~Animal();
  Animal& operator=(const Animal&);

  void			setType(const std::string &str);
  std::string	getType(void);
  virtual void	makeSound(void) const;

protected:
  std::string type;
};
