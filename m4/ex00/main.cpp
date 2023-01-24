#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal("test");
	const Animal* copy = new Animal(*meta);
	std::cout << (meta->getType() == copy->getType()) << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "Type: " << j->getType() << std::endl;
	std::cout << "Type: " << i->getType() << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;

	const WrongAnimal *wrongAnimal = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();
	std::cout << "Type: " << wrongCat->getType() << std::endl;
	wrongAnimal->makeSound();
	wrongCat->makeSound();
	delete wrongAnimal;
	delete wrongCat;
	return 0;
}
