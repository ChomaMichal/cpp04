#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
int main(){
	Cat		c;
	Dog		d;
	Animal *e = new Cat();
	WrongAnimal* wc = new WrongCat();
	
	std::cout << wc->getType() << std::endl;
	wc->makeSound();
	std::cout << e->getType() << std::endl;
	e->makeSound();
	std::cout << c.getType() << std::endl;
	c.makeSound();
	std::cout << d.getType() << std::endl;
	d.makeSound();
	delete(e);
	delete(wc);
	return 0;
}
