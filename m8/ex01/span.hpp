#ifndef SPAN_HPP
#define SPAN_HPP

#include "iostream"

class Span {
	private:
		int _num;
		class AlreadyFilledException : public std::exception {
			public:
				const char* what() const throw();
		};
		class NoSpanException : public std::exception {
			public:
				const char* what() const throw();
		};
	public:
		Span();
		Span(int n);
		Span(const Span &s);
		~Span();
		void addNumber(int n);
		void shortestSpan();
		void longestSpan();
};

#endif