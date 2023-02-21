#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		MutantStack(): std::stack<T>() {};
		MutantStack(const MutantStack &ms): std::stack<T>(ms) {};
		~MutantStack() {};

		iterator begin() { return this->c.begin(); };
		const_iterator cbegin() const { return this->c.cbegin(); };
		iterator end() { return this->c.end(); };
		const_iterator cend() const { return this->c.cend(); };
		reverse_iterator rbegin() { return this->c.rbegin(); };
		const_reverse_iterator crbegin() const { return this->c.crebegin(); };
		reverse_iterator rend() { return this->c.rend(); };
		const_reverse_iterator crend() const { return this->c.crend(); };

		MutantStack &operator=(const MutantStack &ms);
};

#endif