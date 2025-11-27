#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal is created" << std::endl;
}

Animal::Animal(const Animal& other){
	this->type = other.type;
	std::cout << "Animal is created with copy" << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal is destroyed" << std::endl;
}

Animal& Animal::operator=(const Animal& obj){
	this->type  = obj.type;
	return (*this);
}

void	Animal::setType(const std::string &str){
	this->type = str;
}

std::string		Animal::getType(void) {
	return (this->type);
}

void Animal::makeSound(void) const{
}
