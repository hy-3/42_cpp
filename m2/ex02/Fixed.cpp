#include "Fixed.hpp"

Fixed::Fixed() {
	setRawBits(0);
}

Fixed::Fixed(const int i) {
	setRawBits(i << _fractionalPart);
}

Fixed::Fixed(const float f) {
	setRawBits(roundf(f * (float)(1 << _fractionalPart)));
}

Fixed::Fixed(const Fixed &f) {
	setRawBits(f.getRawBits());
}

Fixed::~Fixed() {}

int Fixed::getRawBits() const {
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

Fixed& Fixed::min(Fixed &a, Fixed &b) {
	return (a < b ? a : b);
}

const Fixed& Fixed::min(Fixed const &a, Fixed const &b) {
	return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
	return (a > b ? a : b);
}

const Fixed& Fixed::max(Fixed const &a, Fixed const &b) {
	return (a > b ? a : b);
}

Fixed& Fixed::operator=(const Fixed &f) {
	setRawBits(f.getRawBits());
	return *this;
}

bool Fixed::operator<(const Fixed &f) const {
	return (this->getRawBits() < f.getRawBits());
}

bool Fixed::operator>(const Fixed &f) const {
	return (this->getRawBits() > f.getRawBits());
}

bool Fixed::operator<=(const Fixed &f) const {
	return (this->getRawBits() <= f.getRawBits());
}

bool Fixed::operator>=(const Fixed &f) const {
	return (this->getRawBits() >= f.getRawBits());
}

bool Fixed::operator==(const Fixed &f) const {
	return (this->getRawBits() == f.getRawBits());
}

bool Fixed::operator!=(const Fixed &f) const {
	return (this->getRawBits() != f.getRawBits());
}

Fixed Fixed::operator+(const Fixed &f) const {
	Fixed res;
	res.setRawBits(this->getRawBits() + f.getRawBits());
	return res;
}

Fixed Fixed::operator-(const Fixed &f) const {
	Fixed res;
	res.setRawBits(this->getRawBits() - f.getRawBits());
	return res;
}

Fixed Fixed::operator*(const Fixed &f) const {
	Fixed res;
	res.setRawBits((long)this->getRawBits() * (long)f.getRawBits() >> _fractionalPart);
	return res;
}

Fixed Fixed::operator/(const Fixed &f) const {
	Fixed res;
	res.setRawBits((long)this->getRawBits() / (long)f.getRawBits() >> _fractionalPart);
	return res;
}

Fixed& Fixed::operator++() {
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed res(*this);
	this->setRawBits(res.getRawBits() + 1);
	return res;
}

Fixed& Fixed::operator--() {
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed res(*this);
	this->setRawBits(res.getRawBits() - 1);
	return res;
}

std::ostream& operator<<(std::ostream &out, const Fixed &f) {
	return (out << f.toFloat());
}
