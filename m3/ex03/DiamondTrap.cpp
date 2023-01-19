#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("42_clap_name"), ScavTrap("42_clap_name"), FragTrap("42_clap_name"), _name("42") {
	ClapTrap::setEnergyPoints(50);
	std::cout << "DiamondTrap Constructor (name: 42)" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), _name(name) {
	ClapTrap::setEnergyPoints(50);
	std::cout << "DiamondTrap Constructor (name: " << name << ")" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor" << std::endl;
}

std::string DiamondTrap::getName() {
	return this->_name;
}

void DiamondTrap::whoAmI() {
	std::cout << "[WhoAmI] ";
	std::cout << "DiamondTrap (name: " << this->getName() << "), ClapTrap (name: " << ClapTrap::getName() << ")" << std::endl;
}
