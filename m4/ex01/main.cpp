#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	// const Animal *dog = new Dog();
	// const Animal *cat = new Cat();
	Animal* arrayAnimal[100];

	std::cout << "/*** constructors ***/" << std::endl;
	for (int i = 0; i < 100;) {
		arrayAnimal[i++] = new Dog();
		arrayAnimal[i++] = new Cat();
	}

	std::cout << "/*** destructors ***/" << std::endl;
	for (int i = 0; i < 100;) {
		delete arrayAnimal[i++];
	}


	// delete dog;
	// delete cat;
	return 0;
}
