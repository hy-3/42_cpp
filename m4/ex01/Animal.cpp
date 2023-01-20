#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal constructor (type: undefined)" << std::endl;
}

Animal::Animal(std::string t) {
	setType(t);
	std::cout << "Animal constructor (type: " << t << ")" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor" << std::endl;
}

std::string Animal::getType() const {
	return this->type;
}

void Animal::setType(std::string t) {
	this->type = t;
}

void Animal::makeSound() const {
	std::cout << "[Animal] make a certain sound" << std::endl;
}