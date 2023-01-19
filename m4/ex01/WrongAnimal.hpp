#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(std::string t);
		~WrongAnimal();

		/* getter, setter */
		std::string getType() const;
		void setType(std::string t);

		/* method */
		virtual void makeSound() const {};
};

#endif