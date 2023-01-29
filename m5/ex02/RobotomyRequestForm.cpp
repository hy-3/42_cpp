#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45, "undefined") {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &r): Form(r.getName(), r.getGradeToSign(), r.getGradeToExecute(), r.getTarget()) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string target): Form("RobotomyRequestForm", 72, 45, target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	
}