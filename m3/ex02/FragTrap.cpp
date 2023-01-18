#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap Constructor with default name(42) is called." << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap Constructor with specified name(" << name << ") is called." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called." << std::endl;
}

void FragTrap::highFiveGuys() {
	std::cout << "High five! by " << this->getName() << std::endl;
}