#include "DiamondTrap.hpp"

/*
ref
https://stackoverflow.com/questions/57105923/c-for-a-class-that-inherited-multiple-classes-how-to-inherit-certain-attribu
*/

DiamondTrap::DiamondTrap(): ClapTrap("42_clap_name"), ScavTrap(), FragTrap(), _name("42") {
	// FragTrap::setHitPoints(FragTrap::getHitPoints());
	// ScavTrap::setEnergyPoints(ScavTrap::getEnergyPoints());
	// FragTrap::setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "DiamondTrap Constructor with default name(42) is called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) {
	// FragTrap::setHitPoints(FragTrap::getHitPoints());
	// ScavTrap::setEnergyPoints(ScavTrap::getEnergyPoints());
	// FragTrap::setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "DiamondTrap Constructor with specified name(" << name << ") is called." << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor called." << std::endl;
}

void DiamondTrap::attack(std::string const &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount) {
	ClapTrap::takeDamage(amount);
}

void DiamondTrap::beRepaired(unsigned int amount) {
	ClapTrap::beRepaired(amount);
}

std::string DiamondTrap::getName() {
	return this->_name;
}

void DiamondTrap::whoAmI() {
	std::cout << "Name: " << this->getName() << ", ClapTrap name: " << ClapTrap::getName() << std::endl;
}
