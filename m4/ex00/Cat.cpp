#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat constructor (type: Cat)" << std::endl;
	Animal::setType("Cat");
}

Cat::~Cat() {
	std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "[Cat] Meow Meow" << std::endl;
}