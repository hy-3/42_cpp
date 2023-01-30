#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	Bureaucrat *taro = new Bureaucrat("taro", 50);
	Bureaucrat *lisa = new Bureaucrat("lisa", 1);
	Form *p_form = new PresidentialPardonForm("mike");
	Form *r_form = new RobotomyRequestForm("mike");
	Form *s_form = new ShrubberyCreationForm("mike");
	
	std::cout << ">>>>> Check: file execusion fails (not signed)" << std::endl;
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
	std::cout << "-- taro: p --" << std::endl;
	taro->executeForm(*p_form);
	std::cout << "-- taro: r --" << std::endl;
	taro->executeForm(*r_form);
	std::cout << "-- taro: s --" << std::endl;
	taro->executeForm(*s_form);
	std::cout << "-- lisa: p --" << std::endl;
	lisa->executeForm(*p_form);
	std::cout << "-- lisa: r --" << std::endl;
	lisa->executeForm(*r_form);
	std::cout << "-- lisa: s --" << std::endl;
	lisa->executeForm(*s_form);

	return 0;
}