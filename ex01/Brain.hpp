#pragma once

#include <iostream>

class Brain {
public:
  Brain();
  Brain(const Brain&);
  ~Brain();

  Brain& operator=(const Brain&);

  std::string ideas[100];

private:
};
