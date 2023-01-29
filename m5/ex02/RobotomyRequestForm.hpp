#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
	private:
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(const RobotomyRequestForm &r);
		RobotomyRequestForm(const std::string target);
		~RobotomyRequestForm();
		void execute(Bureaucrat const & executor) const;
};

#endif