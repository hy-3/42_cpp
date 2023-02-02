#include "Form.hpp"

const char* Form::GradeTooLowException::what() const throw() {
	return "the grade is too low.";
}

const char* Form::GradeTooHighException::what() const throw() {
	return "the grade is too high.";
}

Form::Form(): _name("undefined"), _gradeToSign(1), _gradeToExecute(1), _sign(false) {}

Form::Form(const Form &f): _name(f.getName()), _gradeToSign(f.getGradeToSign()), _gradeToExecute(f.getGradeToExecute()), _sign(f.getSign()) {}

Form::Form(std::string name, int gradeToS, int gradeToE): _name(name), _gradeToSign(gradeToS), _gradeToExecute(gradeToE), _sign(false) {
	if (getGradeToSign() > 150 || getGradeToExecute() > 150)
		throw GradeTooLowException();
	if (getGradeToSign() < 1 || getGradeToExecute() < 1)
		throw GradeTooHighException();
}

Form::~Form() {}

std::string Form::getName() const { return this->_name; }

int Form::getGradeToSign() const { return this->_gradeToSign; }

int Form::getGradeToExecute() const { return this->_gradeToExecute; }

bool Form::getSign() const { return this->_sign; }

void Form::setSign(bool b) { this->_sign = b; }

void Form::beSigned(const Bureaucrat &b) {
	if (getSign())
		return ;
	if (b.getGrade() <= getGradeToSign())
		setSign(true);
	else
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const Form &f) {
	std::string isSigned = (f.getSign()) ? "yes" : "no";
	out << "Name: " << f.getName();
	out << ", Grade to sign: " << f.getGradeToSign();
	out << ", Grade to execute: " << f.getGradeToExecute();
	out << ", Signed: " << isSigned;
	return out;
}
