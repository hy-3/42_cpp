#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain *_catBrain;
	public:
		Cat();
		Cat(const Cat &c);
		~Cat();
		void makeSound() const;
		Brain *getBrain() const;
		Cat &operator=(const Cat &c);
};

#endif