#include "Cat.hpp"
#include "Dog.hpp"
int main(){
	Cat		c;
	Dog		d;
	Animal *e = new Cat();

	std::cout << e->getType() << std::endl;
	std::cout << c.getType() << std::endl;
	std::cout << d.getType() << std::endl;
	c.makeSound();
	d.makeSound();
	delete(e);
	return 0;
}
