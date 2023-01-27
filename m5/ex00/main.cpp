#include "Bureaucrat.hpp"

int main() {
	// Bureaucrat();
	Bureaucrat b = Bureaucrat("b", 150);
	
	// error while constructing
	try {
		Bureaucrat b2 = Bureaucrat("b2", 200);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat b2 = Bureaucrat("b2", 0);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	// error while incrementing
	try {
		b.incrementeGrade();
		std::cout << b << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	// no error
	try {
		for (int i = 0; i < 149; i++)
			b.decrementeGrade();
		std::cout << "[b] " << b << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	// check copy constructor
	Bureaucrat bCopy = Bureaucrat(b);
	std::cout << "[b] " << b << std::endl;
	std::cout << "[bCopy] " << bCopy << std::endl;

	// error while decrementing
	try {
		bCopy.decrementeGrade();
		std::cout << bCopy << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}