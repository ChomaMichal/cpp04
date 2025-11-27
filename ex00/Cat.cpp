#include "Cat.hpp"

Cat::Cat(){
	this->setType("Cat");
	std::cout << "Cat has been created" << std::endl;
}

Cat::Cat(const Cat& other){
	this->setType(other.type);
	std::cout << "Cat has been created" << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat has been destroyed" << std::endl;
}

Cat& Cat::operator=(const Cat&){
	this->setType("Cat");
	return (*this);
}

void	Cat::makeSound(void)const{
	std::cout << "Cat has made a sound" << std::endl;
}
