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

		/* methods */
		std::string getName();
		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void whoAmI();
};

#endif