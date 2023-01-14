#include "ClapTrap.hpp"

int main() {
	ClapTrap c1;
	ClapTrap c2("Taro");
	c1.attack("Taro");
	c2.takeDamage(3);
	c2.beRepaired(2);
	c2.attack("42");
	return 0;
}