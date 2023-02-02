#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Error: the grade is too low. (the grade should be <= 150)";
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Error: the grade is too high. (the grade should be >= 1)";
}

Bureaucrat::Bureaucrat(): _name("undefined"), _grade(150) {}

Bureaucrat::Bureaucrat(const Bureaucrat &b): _name(b.getName()), _grade(b.getGrade()) {}

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name) {
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat() {}

const std::string Bureaucrat::getName() const {
	return this->_name;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

void Bureaucrat::setGrade(int i) {
	this->_grade = i;
}

void Bureaucrat::incrementeGrade() {
	int newGrade = getGrade() - 1;
	if (newGrade > 150)
		throw GradeTooLowException();
	setGrade(newGrade);
}

void Bureaucrat::decrementeGrade() {
	int newGrade = getGrade() + 1;
	if (newGrade < 1)
		throw GradeTooHighException();
	setGrade(newGrade);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b) {
	out << "Name: " << b.getName();
	out << ", Grade: " << b.getGrade();
	return out;
}
