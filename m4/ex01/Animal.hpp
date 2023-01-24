#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &a);
		Animal(std::string t);
		virtual ~Animal();
		std::string getType() const;
		virtual void makeSound() const;
		Animal &operator=(const Animal &a);
};

#endif