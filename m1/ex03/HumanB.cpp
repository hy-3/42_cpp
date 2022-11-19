#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->_name = name;
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
	std::cout << getName() << " attacks with his " << getWeapon()->getType() << std::endl;
}
