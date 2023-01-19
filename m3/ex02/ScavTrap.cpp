#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap::ClapTrap() {
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	setGateKeeperMode(false);
	std::cout << "ScavTrap Constructor (name: 42)" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap::ClapTrap(name) {
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	setGateKeeperMode(false);
	std::cout << "ScavTrap Constructor (name: " << name << ")" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor" << std::endl;
}

void ScavTrap::attack(std::string const &target) {
	std::cout << "*ScavTrap version ";
	ClapTrap::attack(target);
}

void ScavTrap::guardGate() {
	setGateKeeperMode(true);
	std::cout << "[GuardGate] ";
	std::cout << "mode is ON (name: " << this->getName() << ")" << std::endl;
}

bool ScavTrap::getGateKeeperMode() {
	return this->_gateKeeperMode;
}

void ScavTrap::setGateKeeperMode(bool b) {
	this->_gateKeeperMode = b;
}
