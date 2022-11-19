#include "Karen.hpp"

int main(int argc, char **argv) {
	Karen k;
	if (argc == 1) {
		std::cout << "Good. The karen says nothing." << std::endl;
	} else if (argc == 2) {
		k.complain(argv[1]);
	} else {
		std::cout << "The karen complains too much. Don't complain more than one." << std::endl;
	}
	return 0;
}
