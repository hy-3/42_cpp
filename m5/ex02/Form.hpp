#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string _name;
		const int _gradeToSign;
		const int _gradeToExecute;
		bool _sign;
		const std::string _target;
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		Form();
	public:
		Form(const Form &f);
		Form(std::string name, int gradeToS, int gradeToE, std::string target);
		virtual ~Form();
		std::string getName() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		bool getSign() const;
		std::string getTarget() const;
		void setSign(bool b);
		void beSigned(const Bureaucrat &b);
		virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, const Form &f);

#endif