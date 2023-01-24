#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &wa);
		WrongAnimal(std::string t);
		virtual ~WrongAnimal();
		std::string getType() const;
		virtual void makeSound() const;
		WrongAnimal &operator=(const WrongAnimal &wa);
};

#endif