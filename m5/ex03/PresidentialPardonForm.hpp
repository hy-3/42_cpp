#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
	private:
		PresidentialPardonForm();
	public:
		PresidentialPardonForm(const PresidentialPardonForm &p);
		PresidentialPardonForm(const std::string target);
		~PresidentialPardonForm();
		void execute(Bureaucrat const & executor) const;
};

#endif