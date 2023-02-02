#include "Bureaucrat.hpp"

int main() {
	// Bureaucrat();
	Bureaucrat b = Bureaucrat("b", 150);
	
	std::cout << ">>> error while constructing" << std::endl;
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

	std::cout << "\n>>> error while incrementing" << std::endl;
	try {
		b.incrementeGrade();
		std::cout << b << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n>>> no error" << std::endl;
	try {
		for (int i = 0; i < 149; i++)
			b.decrementeGrade();
		std::cout << "[b] " << b << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n>>> check copy constructor" << std::endl;
	Bureaucrat bCopy = Bureaucrat(b);
	std::cout << "[b] " << b << std::endl;
	std::cout << "[bCopy] " << bCopy << std::endl;

	std::cout << "\n>>> error while decrementing" << std::endl;
	try {
		bCopy.decrementeGrade();
		std::cout << bCopy << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}