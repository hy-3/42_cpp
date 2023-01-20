#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain *_catBrain;
	public:
		Cat();
		~Cat();
		void makeSound() const;
		Brain *getBrain() const;
};

#endif