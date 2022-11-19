#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon) {
	this->_name = name;
}

HumanA::~HumanA(){}

std::string HumanA::getName() {
	return this->_name;
}

Weapon HumanA::getWeapon() {
	return this->_weapon;
}

void HumanA::attack() {
	std::cout << getName() << " attacks with his " << getWeapon().getType() << std::endl;
}
