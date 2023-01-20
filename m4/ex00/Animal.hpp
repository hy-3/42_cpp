#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string t);
		virtual ~Animal();

		/* getter, setter */
		std::string getType() const;
		void setType(std::string t);

		/* method */
		virtual void makeSound() const;
};

#endif