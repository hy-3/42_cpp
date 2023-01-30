#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45, "undefined") {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &r): Form(r.getName(), r.getGradeToSign(), r.getGradeToExecute(), r.getTarget()) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string target): Form("RobotomyRequestForm", 72, 45, target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	Form::checkExecution(executor);
	std::cout << "rizzz... bzzzzzz..." << std::endl;
	srand(time(NULL));
	if (rand() % 2)
		std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Robotization of " << this->getTarget() << " has been failed." << std::endl;
}