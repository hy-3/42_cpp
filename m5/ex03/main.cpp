#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

//TODO: delete objects
int main() {
	Bureaucrat *taro = new Bureaucrat("taro", 50);
	Bureaucrat *lisa = new Bureaucrat("lisa", 1);
	Intern *intern = new Intern();
	Form *p_form = intern->makeForm("presidential pardon", "mike");
	Form *r_form = intern->makeForm("robotomy request", "mike");
	Form *s_form = intern->makeForm("shrubbery creation", "mike");
	if (p_form == NULL || r_form == NULL || s_form == NULL)
		return 1;
	
	std::cout << ">>>>> Check: intern fails making the form" << std::endl;
	intern->makeForm("unknown form", "mike");

	std::cout << "\n>>>>> Check: file execusion fails (not signed)" << std::endl;
	taro->executeForm(*p_form);
	taro->executeForm(*r_form);
	taro->executeForm(*s_form);
	lisa->executeForm(*p_form);
	lisa->executeForm(*r_form);
	lisa->executeForm(*s_form);

	std::cout << "\n>>>>> Check: file execusion" << std::endl;
	p_form->beSigned(*lisa);
	r_form->beSigned(*lisa);
	s_form->beSigned(*lisa);
	std::cout << "-- taro: p_form --" << std::endl;
	taro->executeForm(*p_form);
	std::cout << "-- taro: r_form --" << std::endl;
	taro->executeForm(*r_form);
	std::cout << "-- taro: s_form --" << std::endl;
	taro->executeForm(*s_form);
	std::cout << "-- lisa: p_form --" << std::endl;
	lisa->executeForm(*p_form);
	std::cout << "-- lisa: r_form --" << std::endl;
	lisa->executeForm(*r_form);
	std::cout << "-- lisa: s_form --" << std::endl;
	lisa->executeForm(*s_form);

	delete taro;
	delete lisa;
	delete intern;
	delete p_form;
	delete r_form;
	delete s_form;

	return 0;
}