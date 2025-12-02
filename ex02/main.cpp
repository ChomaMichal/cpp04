#include "Cat.hpp"
#include "Dog.hpp"
int main(){
	// Animal a;
	
	Dog d;
	d.makeSound();

	Cat c;
	c.makeSound();

	Animal *ca = new Cat();
	ca->makeSound();
	delete(ca);

	return 0;
}
