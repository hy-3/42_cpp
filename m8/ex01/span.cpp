#include "span.hpp"

const char* Span::AlreadyFullException::what() const throw() {
	return "It is already full.";
};
const char* Span::NoSpanException::what() const throw() {
	return "No span found.";
};

Span::Span(): _size(0), _numbers() {}
Span::Span(const unsigned int n): _size(n), _numbers() {}
Span::Span(const Span &s) {
	this->_size = s._size;
	std::vector<int> copyNumbers(s._numbers);
	this->_numbers = copyNumbers;
}
Span::~Span() {}

void Span::addNumber(const int n) {
	if (_size > _numbers.size())
		_numbers.push_back(n);
	else
		throw AlreadyFullException();
}

void Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end, int vectorSize) {
	if (_size >= _numbers.size() + vectorSize)
		_numbers.insert(_numbers.end(), start, end);
	else
		throw AlreadyFullException();
}

long int Span::shortestSpan() {
	if (_numbers.size() > 1) {
		long int min = longestSpan();
		long int tmp;
		std::sort(_numbers.begin(), _numbers.end());
		for (std::vector<int>::iterator i = _numbers.begin(); i < _numbers.end(); i++) {
			tmp = std::abs(static_cast<long int>(*i) - static_cast<long int>(*(i + 1)));
			if (tmp < min)
				min = tmp;
			if (min == 0)
				break;
		}
		return min;
	} else {
		throw NoSpanException();
	}
}

long int Span::longestSpan() {
	if (_numbers.size() > 1) {
		std::vector<int>::iterator max;
		std::vector<int>::iterator min;

		max = std::max_element(_numbers.begin(), _numbers.end());
		min = std::min_element(_numbers.begin(), _numbers.end());
		return static_cast<long int>(*max) - static_cast<long int>(*min);
	} else {
		throw NoSpanException();
	}
}

Span &Span::operator=(const Span &s) {
	this->_size = s._size;
	std::vector<int> copyNumbers(s._numbers);
	this->_numbers = copyNumbers;
	return *this;
}