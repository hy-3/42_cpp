#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor" << std::endl;
	setCurrNumOfIdeas(0);
}

Brain::~Brain() {
	std::cout << "Brain destructor" << std::endl;
}

void Brain::printAllIdeas() const {
	std::cout << "[Ideas] ";
	for (int i = 0; i < getCurrNumOfIdeas(); i++)
		std::cout << _ideas[i] << " ";
	std::cout << std::endl;
}

void Brain::addIdea(std::string str) {
	int currNum = getCurrNumOfIdeas();
	if (currNum < 100) {
		_ideas[currNum] = str;
		setCurrNumOfIdeas(currNum + 1);
	} else {
		std::cout << "[addIeaa] failed because there is no free space in the brain." << std::endl;
	}
}

std::string Brain::getIdea(int i) {
	return _ideas[i];
}

int Brain::getCurrNumOfIdeas() const {
	return this->_currNumOfIdeas;
}

void Brain::setCurrNumOfIdeas(int i) {
	this->_currNumOfIdeas = i;
}