#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
	private:
		ShrubberyCreationForm();
	public:
		ShrubberyCreationForm(const ShrubberyCreationForm &s);
		ShrubberyCreationForm(const std::string target);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const & executor) const;
};

#endif