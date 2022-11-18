#include "Zombie.hpp"

int main(void) {
	int n = 5;
	Zombie *zh = zombieHorde(n, "42zombie");
	for (int i = 0; i < n; i++) {
		zh[i].announce();
	}
	deleteZombieHorde(zh);
	return 0;
}