#include "FragTrap.hpp"

int main() {
	FragTrap f1;
	FragTrap f2("Taro");
	f1.attack("Taro");
	f2.takeDamage(20);
	f2.beRepaired(10);
	f2.attack("42");
	f2.highFiveGuys();
	return 0;
}
