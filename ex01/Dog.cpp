#include "Dog.hpp"

Dog::Dog(){
	this->brain = new Brain();
	this->setType("Dog");
	std::cout << "Dog has been created" << std::endl;
}

Dog::Dog(const Dog& other){
	this->brain = other.brain;
	this->setType("Dog");
	std::cout << "Dog has been created" << std::endl;
}

Dog::~Dog(){
	delete(this->brain);
	std::cout << "Dog has been destroyed" << std::endl;
}

Dog& Dog::operator=(const Dog& obj){
	this->brain = obj.brain;
	this->setType("Dog");
	return (*this);
}

void	Dog::makeSound(void)const{
	std::cout << "Dog has made a sound" << std::endl;
}
