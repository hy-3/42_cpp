#include "DiamondTrap.hpp"

int main() {
	DiamondTrap d1;
	DiamondTrap d2("Taro");
	d1.attack("Taro");
	d2.takeDamage(20);
	d2.beRepaired(10);
	d2.attack("42");
	d2.highFiveGuys();
	d2.guardGate();
	return 0;
}
