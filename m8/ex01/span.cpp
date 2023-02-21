#include "span.hpp"

class AlreadyFilledException : public std::exception {
	public:
		const char* what() const throw() {
			return "It is already filled.";
		}
};
class NoSpanException : public std::exception {
	public:
		const char* what() const throw() {
			return "No span found.";
		}
};

Span::Span() {}
Span::Span(int n) {}
Span::Span(const Span &s) {}
Span::~Span() {}
void Span::addNumber(int n) {}
void Span::shortestSpan() {}
void Span::longestSpan() {}