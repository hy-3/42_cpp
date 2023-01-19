#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	public:
		/* constructor, destructor */
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();

		/* methods */
		void highFiveGuys();
};

#endif