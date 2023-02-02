#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Error: the grade is too low.";
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Error: the grade is too high.";
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

void Bureaucrat::signForm(Form &f) {
	if (f.getSign()) {
		std::cout << f.getName() << " is already signed." << std::endl;
		return;
	}
	try {
		f.beSigned(*this);
		std::cout << this->getName() << " signs " << f.getName() << std::endl;
	} catch (std::exception &e) {
		std::cout << this->getName() << " cannot signs " << f.getName();
		std::cout << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form) {
	try {
		form.execute(*this);
		std::cout << this->getName() << " executes " << form.getName() << std::endl;
	} catch (std::exception &e) {
		std::cout << "File execution failed because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b) {
	out << "Name: " << b.getName();
	out << ", Grade: " << b.getGrade();
	return out;
}
