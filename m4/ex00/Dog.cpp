#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {
	std::cout << "Dog constructor (type: Dog)" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "[Dog] Woof Woof" << std::endl;
}