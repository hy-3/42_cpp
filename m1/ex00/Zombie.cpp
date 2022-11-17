#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
}

std::string Zombie::getName(void) {
	return this->name;
}

void Zombie::announce(void) {
	std::cout << getName() << " BraiiiiiiinnnzzzZ..." << std::endl;
}
