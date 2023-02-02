#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate() {
	srand(time(NULL));
	int randomNum = rand() % 3;
	if (randomNum == 0) {
		std::cout << "A is generated." << std::endl;
		return new A();
	} else if (randomNum == 1) {
		std::cout << "B is generated." << std::endl;
		return new B();
	} else {
		std::cout << "C is generated." << std::endl;
		return new C();
	}
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p) != NULL) {
		std::cout << "It is A." << std::endl;
	} else if (dynamic_cast<B*>(p) != NULL) {
		std::cout << "It is B." << std::endl;
	} else if (dynamic_cast<C*>(p) != NULL) {
		std::cout << "It is C." << std::endl;
	} else {
		std::cout << "Non of A ~ C." << std::endl;
	}
}

void identify(Base& p) {
	try {
		A a = dynamic_cast<A&>(p);
		std::cout << "It is A." << std::endl;
	} catch (std::exception e) {
		std::cout << "It is not A." << std::endl;
	}
	try {
		B b = dynamic_cast<B&>(p);
		std::cout << "It is B." << std::endl;
	} catch (std::exception e) {
		std::cout << "It is not B." << std::endl;
	}
	try {
		C c = dynamic_cast<C&>(p);
		std::cout << "It is C." << std::endl;
	} catch (std::exception e) {
		std::cout << "It is not C." << std::endl;
	}
}

int main() {
	std::cout << ">>> generate" << std::endl;
	Base* obj = generate();

	std::cout << "\n>>> identify (pointer)" << std::endl;
	identify(obj);

	std::cout << "\n>>> identify (reference)" << std::endl;
	identify(*obj);

	delete obj;

	return 0;
}