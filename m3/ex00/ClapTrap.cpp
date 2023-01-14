#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("42"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Constructor with default name(42) is called." << std::endl;
	
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	if (_name.empty())
		_name = "42";
	std::cout << "Constructor with specified name(" << name << ") is called." << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called." << std::endl;
}

void ClapTrap::attack(std::string const &target) {
	std::cout << getName() << " attacked to " << target;
	std::cout << ", caused " << getAttackDamage() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << getName() << " got " << amount << " points of damage. ";
	if (getEnergyPoints() < amount) {
		setEnergyPoints(0);
	} else {
		setEnergyPoints(getEnergyPoints() - amount);
	}
	std::cout << ", current energy point is " << getEnergyPoints() << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << getName() << " is repaired with " << amount << " points. ";
	setEnergyPoints(getEnergyPoints() + amount);
	std::cout << ", current energy point is " << getEnergyPoints() << std::endl;
}

std::string ClapTrap::getName() {
	return this->_name;
}

unsigned int ClapTrap::getHitPoints() {
	return this->_hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() {
	return this->_energyPoints;
}

unsigned int ClapTrap::getAttackDamage() {
	return this->_attackDamage;
}

void ClapTrap::setEnergyPoints(int i) {
	this->_energyPoints = i;
}