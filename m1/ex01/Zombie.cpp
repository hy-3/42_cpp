#include "Zombie.hpp"

void Zombie::setName(std::string name) {
	this->_name = name;
}

std::string Zombie::getName(void) {
	return this->_name;
}

Zombie::Zombie(void){}

Zombie::Zombie(std::string name) {
	setName(name);
}

Zombie::~Zombie(void) {
	std::cout << getName() << " is in peace now." << std::endl;
	setName("");
}

void Zombie::announce(void) {
	if (getName().empty())
		std::cout << "The zombie doesn't have a name." << std::endl;
	else
		std::cout << getName() << " BraiiiiiiinnnzzzZ..." << std::endl;
}
