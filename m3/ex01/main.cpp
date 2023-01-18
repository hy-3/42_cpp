#include "ScavTrap.hpp"

int main() {
	ScavTrap s1;
	ScavTrap s2("Taro");
	s1.attack("Taro");
	s2.takeDamage(20);
	s2.beRepaired(10);
	s2.attack("42");
	s1.guardGate();
	s2.guardGate();
	return 0;
}
