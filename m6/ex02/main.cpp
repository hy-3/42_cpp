#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate() {
	srand(time(NULL));
	if (rand() % 3 == 0) {
		std::cout << "A is generated." << std::endl;
		return new A();
	} else if (rand() % 3 == 1) {
		std::cout << "B is generated." << std::endl;
		return new B();
	} else {
		std::cout << "C is generated." << std::endl;
		return new C();
	}
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p) != NULL) {
		std::cout << "A is identified (pointer)." << std::endl;
	} else if (dynamic_cast<B*>(p) != NULL) {
		std::cout << "B is identified (pointer)." << std::endl;
	} else if (dynamic_cast<C*>(p) != NULL) {
		std::cout << "C is identified (pointer)." << std::endl;
	} else {
		std::cout << "Non of A ~ C is identified (pointer)." << std::endl;
	}
}

void identify(Base& p) {
	try {
		dynamic_cast<A&>(p);
		std::cout << "A is identified (pointer)." << std::endl;
	} catch (std::exception e) {
		std::cout << e.what() << std::endl;
	}
	try {
		dynamic_cast<B&>(p);
		std::cout << "B is identified (pointer)." << std::endl;
	} catch (std::exception e) {
		std::cout << e.what() << std::endl;
	}
	try {
		dynamic_cast<B&>(p);
		std::cout << "C is identified (pointer)." << std::endl;
	} catch (std::exception e) {
		std::cout << e.what() << std::endl;
	}
}

int main() {

	return 0;
}