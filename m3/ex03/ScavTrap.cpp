#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap::ClapTrap() {
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	setGateKeeperMode(false);
	std::cout << "ScavTrap Constructor with default name(42) is called." << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap::ClapTrap(name) {
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	setGateKeeperMode(false);
	std::cout << "ScavTrap Constructor with specified name(" << name << ") is called." << std::endl;
}

ScavTrap::~ScavTrap() {
	ClapTrap::~ClapTrap();
	std::cout << "ScavTrap Destructor called." << std::endl;
}

void ScavTrap::attack(std::string const &target) {
	std::cout << "[ScavTrap attack] " << this->getName() << " attacked to " << target;
	std::cout << ", caused " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
	setGateKeeperMode(true);
	std::cout << this->getName() << " is now in Gate keeper mode." << std::endl;
}

bool ScavTrap::getGateKeeperMode() {
	return this->_gateKeeperMode;
}

void ScavTrap::setGateKeeperMode(bool b) {
	this->_gateKeeperMode = b;
}
