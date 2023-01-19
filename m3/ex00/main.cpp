#include "ClapTrap.hpp"

int main() {
	ClapTrap c1;
	ClapTrap c2("Taro");
	c1.attack("Taro");
	c2.takeDamage(0);
	c2.beRepaired(10);
	c2.attack("42");
	return 0;
}