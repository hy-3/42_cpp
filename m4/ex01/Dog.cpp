#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog constructor (type: Dog)" << std::endl;
	Animal::setType("Dog");
	this->dogBrain = new Brain();
}

Dog::~Dog() {
	std::cout << "Dog destructor" << std::endl;
	delete this->dogBrain;
}

void Dog::makeSound() const {
	std::cout << "[Dog] Woof Woof" << std::endl;
}