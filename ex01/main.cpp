#include "Cat.hpp"
#include "Dog.hpp"
int main(){
	Animal *arr[100];

	for (int i = 0 ; i < 50 ; i++){
		arr[i] = new Cat();
	}
	for (int i = 50 ; i < 100 ; i++){
		arr[i] = new Dog();
	}
	for (int i = 0; i < 100 ; i ++){
		arr[i]->makeSound();
	}
	for (int i = 0; i < 100 ; i ++){
		delete arr[i];
	}


	return 0;
}
