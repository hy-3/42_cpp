#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain *_dogBrain;
	public:
		Dog();
		~Dog();
		void makeSound() const;
		Brain *getBrain() const;
};

#endif
