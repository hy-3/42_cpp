#include "Fixed.hpp"

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPoint;
}

void Fixed::setRawBits(int const raw) {
	this->_fixedPoint = raw;
}

float Fixed::toFloat() const {

}

int Fixed::toInt() const {

}

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const int i) {
	std::cout << "Int constructor called" << std::endl;
	setRawBits(i);
}

Fixed::Fixed(const float  i) {
	std::cout << "Float constructor called" << std::endl;

}

Fixed::Fixed(const Fixed &f) {
	std::cout << "Copy constructor called" << std::endl;
	setRawBits(f.getRawBits());
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &f) {
	std::cout << "Assignation operator called" << std::endl;
	setRawBits(f.getRawBits());
	return *this;
}
