#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal is created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){
	this->type = other.type;
	std::cout << "WrongAnimal is created with copy" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal is destroyed" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj){
	this->type  = obj.type;
	return (*this);
}

void	WrongAnimal::setType(const std::string &str){
	this->type = str;
}

std::string		WrongAnimal::getType(void) {
	return (this->type);
}

void WrongAnimal::makeSound(void) const{
	std::cout << "Wrong animal sound" << std::endl;
}
