#include "Dog.hpp"

Dog::Dog(){
	this->setType("Dog");
	std::cout << "Dog has been created" << std::endl;
}

Dog::Dog(const Dog& other){
	this->setType(other.type);
	std::cout << "Dog has been created" << std::endl;
}

Dog::~Dog(){
	std::cout << "Dog has been destroyed" << std::endl;
}

Dog& Dog::operator=(const Dog&){
	this->setType("Dog");
	return (*this);
}

void	Dog::makeSound(void)const{
	std::cout << "Dog has made a sound" << std::endl;
}
