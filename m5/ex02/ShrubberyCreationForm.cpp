#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137, "undefined") {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s): Form(s.getName(), s.getGradeToSign(), s.getGradeToExecute(), s.getTarget()) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): Form("ShrubberyCreationForm", 145, 137, target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

}