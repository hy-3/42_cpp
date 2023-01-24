#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {
	std::cout << "Cat constructor (type: Cat)" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "[Cat] Meow Meow" << std::endl;
}