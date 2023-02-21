#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
	private:
		unsigned int _size;
		std::vector<int> _numbers;

		class AlreadyFullException : public std::exception {
			public:
				const char* what() const throw();
		};
		class NoSpanException : public std::exception {
			public:
				const char* what() const throw();
		};
	public:
		Span();
		Span(const unsigned int n);
		Span(const Span &s);
		~Span();
		void addNumber(const int n);
		void addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end, int vectorSize);
		long int shortestSpan();
		long int longestSpan();
		Span &operator=(const Span &s);
};

#endif