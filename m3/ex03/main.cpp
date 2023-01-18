#include "DiamondTrap.hpp"

int main() {
	DiamondTrap d1;
	DiamondTrap d2("Taro");
	d1.attack("Taro");
	d2.takeDamage(20);
	d2.beRepaired(10);
	d2.attack("42");
	d1.highFiveGuys();
	d2.highFiveGuys();
	d1.guardGate();
	d2.guardGate();
	d1.whoAmI();
	d2.whoAmI();
	return 0;
}
