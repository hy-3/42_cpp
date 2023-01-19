#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap Constructor (name: 42)" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap Constructor (name: " << name << ")" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor" << std::endl;
}

void FragTrap::highFiveGuys() {
	std::cout << "[HighFive] by " << this->getName() << std::endl;
}