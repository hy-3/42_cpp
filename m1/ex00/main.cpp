#include "Zombie.hpp"

int main(void) {
	Zombie z1("zombie on stack: ");
	z1.announce();
	Zombie* z2 = newZombie("zombie on heap: ");
	z2->announce();
	delete z2;
	z2->announce();
	z1.announce();
	randomChump("zombie on stack: ");
	return 0;
}