#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap(), FragTrap() {
	FragTrap::setHitPoints(FragTrap::getHitPoints());
	ScavTrap::setEnergyPoints(ScavTrap::getEnergyPoints());
	FragTrap::setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "DiamondTrap Constructor with default name(42) is called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ScavTrap(name), FragTrap(name) {
	FragTrap::setHitPoints(FragTrap::getHitPoints());
	ScavTrap::setEnergyPoints(ScavTrap::getEnergyPoints());
	FragTrap::setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "DiamondTrap Constructor with specified name(" << name << ") is called." << std::endl;
}

DiamondTrap::~DiamondTrap() {
	ScavTrap::~ScavTrap();
	FragTrap::~FragTrap();
	std::cout << "DiamondTrap Destructor called." << std::endl;
}

void DiamondTrap::attack(std::string const &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount) {
	ScavTrap::takeDamage(amount);
}

void DiamondTrap::beRepaired(unsigned int amount) {
	ScavTrap::beRepaired(amount);
	
}

void DiamondTrap::whoAmI() {
	// std::cout << "name: " << getName() << std::endl;
	// std::cout << "ClapTrap name: " << ClapTrap::getName() << std::endl;
}