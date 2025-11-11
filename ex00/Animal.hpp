#pragma once

#include <iostream>
#include <string>

class Animal {
public:
  Animal();
  Animal(const Animal&);
  ~Animal();
  Animal& operator=(const Animal&);

  void			setType(const std::string &str);
  std::string	getType(void);

private:
  std::string type;
};
