#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName();
		void whoAmI();
};

#endif