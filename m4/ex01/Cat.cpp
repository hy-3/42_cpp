#include "Cat.hpp"

Cat::Cat(): Animal("Cat"), _catBrain(new Brain()) {
	std::cout << "Cat constructor (type: Cat)" << std::endl;
}

Cat::Cat(const Cat &c) {
	this->_catBrain = new Brain();
	Brain *sourceBrain = c.getBrain();
	int numOfIdeas = sourceBrain->getCurrNumOfIdeas();
	for (int i = 0; i < numOfIdeas; i++)
		this->_catBrain->addIdea(sourceBrain->getIdea(i));
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

Cat &Cat::operator=(const Cat &c) {
	this->_catBrain = new Brain();
	Brain *sourceBrain = c.getBrain();
	int numOfIdeas = sourceBrain->getCurrNumOfIdeas();
	for (int i = 0; i < numOfIdeas; i++)
		this->_catBrain->addIdea(sourceBrain->getIdea(i));
	return *this;
}