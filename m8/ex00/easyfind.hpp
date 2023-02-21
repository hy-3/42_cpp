#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iterator>

class NotFoundException : public std::exception {
	public:
		const char* what() const throw() {
			return "The element is not found.";
		}
};

template <typename T>
typename T::const_iterator easyfind(T &t, int i) {
	typename T::const_iterator res;
	res = std::find(t.begin(), t.end(), i);
	if (res == t.end())
		throw NotFoundException();
	return res;
}

#endif