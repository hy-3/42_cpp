#include "Zombie.hpp"

int main(void) {
	Zombie z1("zombie_A(on stack)");
	z1.announce();
	Zombie* z2 = newZombie("zombie_B(on heap)");
	z2->announce();
	delete z2;
	z2->announce();
	z1.announce();
	randomChump("zombie_C(on stack)");
	return 0;
}