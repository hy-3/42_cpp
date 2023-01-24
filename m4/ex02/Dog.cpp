#include "Dog.hpp"

Dog::Dog(): Animal("Dog"), _dogBrain(new Brain()) {
	std::cout << "Dog constructor (type: Dog)" << std::endl;
}

Dog::Dog(const Dog &d) {
	this->_dogBrain = new Brain();
	Brain *sourceBrain = d.getBrain();
	int numOfIdeas = sourceBrain->getCurrNumOfIdeas();
	for (int i = 0; i < numOfIdeas; i++)
		this->_dogBrain->addIdea(sourceBrain->getIdea(i));
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

Dog &Dog::operator=(const Dog &d) {
	this->_dogBrain = new Brain();
	Brain *sourceBrain = d.getBrain();
	int numOfIdeas = sourceBrain->getCurrNumOfIdeas();
	for (int i = 0; i < numOfIdeas; i++)
		this->_dogBrain->addIdea(sourceBrain->getIdea(i));
	return *this;
}