#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
	private:
		const std::string _name;
		int _grade;
		Bureaucrat();
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
	public:
		Bureaucrat(const Bureaucrat &b);
		Bureaucrat(std::string const name, int grade);
		~Bureaucrat();
		const std::string getName() const;
		int getGrade() const;
		void setGrade(int i);
		void incrementeGrade();
		void decrementeGrade();

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);

#endif