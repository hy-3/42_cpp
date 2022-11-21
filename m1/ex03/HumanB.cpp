#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB(){}

std::string HumanB::getName() {
	return this->_name;
}

Weapon* HumanB::getWeapon() {
	return this->_weapon;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

void HumanB::attack() {
	Weapon* weapon = getWeapon();
	if (weapon == NULL)
		std::cout << "Weapon is not set yet." << std::endl;
	else
		std::cout << getName() << " attacks with his " << getWeapon()->getType() << std::endl;
}
