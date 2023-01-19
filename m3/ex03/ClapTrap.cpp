#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("42"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap Constructor (name: 42)" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	if (getName().empty())
		setName("42");
	std::cout << "ClapTrap Constructor (name: " << name << ")" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor" << std::endl;
}

void ClapTrap::attack(std::string const &target) {
	std::cout << "[Attack] ";
	if (getEnergyPoints() > 0) {
		std::cout << getName() << " attacked to " << target;
		std::cout << ", caused " << getAttackDamage() << " points of damage! ";
		setEnergyPoints(getEnergyPoints() - 1);
		std::cout << "(EP: " << getEnergyPoints() << ")" << std::endl;
	} else {
		std::cout << "Attack failed " << std::endl;
		std::cout << "(EP: " << getEnergyPoints() << ")" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "[Damage] ";
	std::cout << getName() << " got " << amount << " points of damage ";
	if (getHitPoints() < amount) {
		setHitPoints(0);
	} else {
		setHitPoints(getHitPoints() - amount);
	}
	std::cout << "(HP: " << getHitPoints() << ")" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "[Repair] ";
	std::cout << getName() << " is repaired with " << amount << " points ";
	setHitPoints(getHitPoints() + amount);
	std::cout << "(HP: " << getHitPoints() << ")" << std::endl;
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

void ClapTrap::setName(std::string n) {
	this->_name = n;
}

void ClapTrap::setHitPoints(int i) {
	this->_hitPoints = i;
}

void ClapTrap::setEnergyPoints(int i) {
	this->_energyPoints = i;
}

void ClapTrap::setAttackDamage(int i) {
	this->_attackDamage = i;
}