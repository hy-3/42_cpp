#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat constructor (type: Cat)" << std::endl;
	Animal::setType("Cat");
	this->catBrain = new Brain();
}

Cat::~Cat() {
	std::cout << "Cat destructor" << std::endl;
	delete this->catBrain;
}

void Cat::makeSound() const {
	std::cout << "[Cat] Meow Meow" << std::endl;
}