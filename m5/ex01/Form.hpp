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
		Form(std::string name, int gradeToS, int gradeToE);
		~Form();
		std::string getName() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		bool getSign() const;
		void setSign(bool b);
		void beSigned(const Bureaucrat &b);
};

std::ostream &operator<<(std::ostream &out, const Form &f);

#endif