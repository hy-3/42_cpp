#include "span.hpp"

int main() {
	Span sp = Span(5);

	std::cout << "--- check error ---" << std::endl;
	try {
		sp.shortestSpan();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		sp.longestSpan();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n--- result 1 ---" << std::endl;
	sp.addNumber(0);
	sp.addNumber(100);
	sp.addNumber(INT_MAX);
	sp.addNumber(INT_MIN);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "\n--- result 2 ---" << std::endl;
	Span sp2 = Span(10000);
	std::vector<int> vec;
	srand(time(NULL));
	for (int i = 0; i < 10000; i++)
		vec.push_back(rand());
	sp2.addNumber(vec.begin(), vec.end(), vec.size());
	std::cout << "Shortest: " << sp2.shortestSpan() << std::endl;
	std::cout << "Longest: " << sp2.longestSpan() << std::endl;

	std::cout << "\n--- check copy ---" << std::endl;
	Span original = Span(2);
	original.addNumber(1);
	Span copy1 = original;
	original.addNumber(2);
	Span copy2 = Span(original);
	
	copy1.addNumber(3);

	std::cout << "- copy 1 -" << std::endl;
	std::cout << "Shortest: " << copy1.shortestSpan() << std::endl;
	std::cout << "Longest: " << copy1.longestSpan() << std::endl;
	std::cout << "- copy 2 -" << std::endl;
	std::cout << "Shortest: " << copy2.shortestSpan() << std::endl;
	std::cout << "Longest: " << copy2.longestSpan() << std::endl;

	std::cout << "\n--- check error ---" << std::endl;
	try {
		copy2.addNumber(3);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}