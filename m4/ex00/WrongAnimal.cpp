#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("undefined") {
	std::cout << "WrongAnimal constructor (type: undefined)" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wa) {
	this->type = wa.getType();
}

WrongAnimal::WrongAnimal(std::string t) {
	this->type = t;
	std::cout << "WrongAnimal constructor (type: " << t << ")" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor" << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->type;
}

void WrongAnimal::makeSound() const {
	std::cout << "[WrongAnimal] make a certain sound" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wa) {
	this->type = wa.getType();
	return *this;
}