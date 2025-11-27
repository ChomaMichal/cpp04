#include "WrongCat.hpp"

WrongCat::WrongCat(){
	this->setType("WrongCat");
	std::cout << "WrongCat has been created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other){
	this->setType(other.type);
	std::cout << "WrongCat has been created" << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat has been destroyed" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat&){
	this->setType("WrongCat");
	return (*this);
}

void	WrongCat::makeSound(void)const{
	std::cout << "WrongCat has made a sound" << std::endl;
}
