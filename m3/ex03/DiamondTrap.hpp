#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string _name;
	public:
		/* constructor, destructor */
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();

		/* getter */
		std::string getName();
	
		/* method */
		void whoAmI();
};

#endif