#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Form *Intern::makeForm(const std::string formName, const std::string formTarget) {
	std::string form[3];
	Form *type[3];

	form[0] = "presidential pardon";
	form[1] = "robotomy request";
	form[2] = "shrubbery creation";
	type[0] = new PresidentialPardonForm(formTarget);
	type[1] = new RobotomyRequestForm(formTarget);
	type[2] = new ShrubberyCreationForm(formTarget);

	for (int i = 0; i < 3; i++) {
		if (!form[i].compare(formName))
			return type[i];
		else
			delete type[i];
	}
	std::cout << "Intern couldn't create the form." << std::endl;
	return NULL;
}
