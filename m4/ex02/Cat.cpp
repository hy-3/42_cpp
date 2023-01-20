#include "Cat.hpp"

Cat::Cat(): _catBrain(new Brain()) {
	std::cout << "Cat constructor (type: Cat)" << std::endl;
	Animal::setType("Cat");
}

Cat::~Cat() {
	std::cout << "Cat destructor" << std::endl;
	delete getBrain();
}

void Cat::makeSound() const {
	std::cout << "[Cat] Meow Meow" << std::endl;
}

Brain *Cat::getBrain() const {
	return this->_catBrain;
}