#include "Dog.hpp"

Dog::Dog(): _dogBrain(new Brain()) {
	std::cout << "Dog constructor (type: Dog)" << std::endl;
	Animal::setType("Dog");
}

Dog::~Dog() {
	std::cout << "Dog destructor" << std::endl;
	delete getBrain();
}

void Dog::makeSound() const {
	std::cout << "[Dog] Woof Woof" << std::endl;
}

Brain *Dog::getBrain() const {
	return this->_dogBrain;
}