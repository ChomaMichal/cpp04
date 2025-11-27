#include "Cat.hpp"

Cat::Cat(){
	this->brain = new Brain();
	this->setType("Cat");
	std::cout << "Cat has been created" << std::endl;
}

Cat::Cat(const Cat& other){
	this->brain = new Brain;
	*this->brain = *other.brain;
	this->setType("Cat");
	std::cout << "Cat has been created" << std::endl;
}

Cat::~Cat(){
	delete(this->brain);
	std::cout << "Cat has been destroyed" << std::endl;
}

Cat& Cat::operator=(const Cat& obj){
	*this->brain = *obj.brain;
	this->setType("Cat");
	return (*this);
}

void	Cat::makeSound(void)const{
	std::cout << "Cat has made a sound" << std::endl;
}
