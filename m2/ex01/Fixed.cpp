#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const int i) {
	std::cout << "Int constructor called" << std::endl;
	setRawBits(i << _fractionalPart);
}

Fixed::Fixed(const float f) {
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(f * (float)(1 << _fractionalPart)));
}

Fixed::Fixed(const Fixed &f) {
	std::cout << "Copy constructor called" << std::endl;
	setRawBits(f.getRawBits());
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

float Fixed::toFloat() const {
	return ((float)_value / (float)(1 << _fractionalPart));
}

int Fixed::toInt() const {
	return (_value >> _fractionalPart);
}

Fixed& Fixed::operator=(const Fixed &f) {
	std::cout << "Assignation operator called" << std::endl;
	setRawBits(f.getRawBits());
	return *this;
}

std::ostream& operator<<(std::ostream &out, const Fixed &f) {
	return (out << f.toFloat());
}
