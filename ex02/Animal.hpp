#pragma once

#include <iostream>
#include <string>

class Animal {
protected:
  Animal();
  Animal(const Animal&);

public:
  virtual ~Animal();
  Animal& operator=(const Animal&);

  void			setType(const std::string &str);
  std::string	getType(void);
  virtual void	makeSound(void) const;

private:
  std::string type;
};
