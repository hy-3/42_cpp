#include <iostream>
#include <list>
#include <vector>
#include "easyfind.hpp"

int main() {
	int i1 = 10;
	int i2 = 50;
	std::list<int> lst;
	std::vector<int> vec;
	std::list<int>::const_iterator lst_iter;
	std::vector<int>::const_iterator vec_iter;

	for (int i = 0; i < 30; i++)
		lst.push_back(i);
	for (int i = 0; i <= 50; i++)
		vec.push_back(i);

	std::cout << "--- lst & i1 ---" << std::endl;
	try {
		lst_iter = easyfind(lst, i1);
		std::cout << *lst_iter << " is found." << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n--- lst & i2 ---" << std::endl;
	try {
		lst_iter = easyfind(lst, i2);
		std::cout << *lst_iter << " is found." << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n--- vec & i1 ---" << std::endl;
	try {
		vec_iter = easyfind(vec, i1);
		std::cout << *vec_iter << " is found." << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n--- vec & i2 ---" << std::endl;
	try {
		vec_iter = easyfind(vec, i2);
		std::cout << *vec_iter << " is found." << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}