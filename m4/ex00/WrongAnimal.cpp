#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal constructor (type: undefined)" << std::endl;
}

WrongAnimal::WrongAnimal(std::string t) {
	setType(t);
	std::cout << "WrongAnimal constructor (type: " << t << ")" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor" << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->type;
}

void WrongAnimal::setType(std::string t) {
	this->type = t;
}
