#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5, "undefined") {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p): Form(p.getName(), p.getGradeToSign(), p.getGradeToExecute(), p.getTarget()) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string target): Form("PresidentialPardonForm", 25, 5, target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	Form::checkExecution(executor);
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}