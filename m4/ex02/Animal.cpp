#include "Animal.hpp"

Animal::Animal(): type("undefined") {
	std::cout << "Animal constructor (type: undefined)" << std::endl;
}

Animal::Animal(const Animal &a) {
	this->type = a.getType();
}

Animal::Animal(std::string t) {
	this->type = t;
	std::cout << "Animal constructor (type: " << t << ")" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor" << std::endl;
}

std::string Animal::getType() const {
	return this->type;
}

Animal &Animal::operator=(const Animal &a) {
	this->type = a.getType();
	return *this;
}