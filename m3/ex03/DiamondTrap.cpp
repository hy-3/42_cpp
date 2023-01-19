#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap("42_clap_name"), FragTrap("42_clap_name"), _name("42") {
	std::cout << "DiamondTrap Constructor (name: 42)" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), _name(name) {
	std::cout << "DiamondTrap Constructor (name: " << name << ")" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor" << std::endl;
}

std::string DiamondTrap::getName() {
	return this->_name;
}

void DiamondTrap::attack(std::string const &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount) {
	FragTrap::takeDamage(amount);
}

void DiamondTrap::beRepaired(unsigned int amount) {
	FragTrap::beRepaired(amount);
}

void DiamondTrap::whoAmI() {
	std::cout << "[WhoAmI] ";
	std::cout << "DiamondTrap Name: " << this->getName() << ", ClapTrap name: " << ScavTrap::getName() << std::endl;
}
