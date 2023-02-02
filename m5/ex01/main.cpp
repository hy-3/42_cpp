#include "Bureaucrat.hpp"

int main() {
	// Bureaucrat();
	Bureaucrat b1 = Bureaucrat("b1", 50);
	Bureaucrat b2 = Bureaucrat("b2", 1);
	// Form();
	Form f1 = Form("f1", 100, 100);
	Form f2 = Form("f2", 1, 1);

	std::cout << ">>> objects" << std::endl;
	std::cout << "[b1] " << b1 << std::endl;
	std::cout << "[b2] " << b2 << std::endl;
	std::cout << "[f1] " << f1 << std::endl;
	std::cout << "[f2] " << f2 << std::endl;
	
	std::cout << "\n>>> error while constructing" << std::endl;
	try {
		Form errorFrom = Form("errorForm", 200, 100);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form errorFrom = Form("errorForm", 200, 200);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form errorFrom = Form("errorForm", 200, 200);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n>>> check sign" << std::endl;
	b1.signForm(f1);
	b1.signForm(f2);
	b2.signForm(f1);
	b2.signForm(f2);

	return 0;
}