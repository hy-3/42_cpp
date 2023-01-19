#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	private:
		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;
	public:
		/* constructor, destructor */
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();

		/* getter, setter */
		std::string getName();
		unsigned int getHitPoints();
		unsigned int getEnergyPoints();
		unsigned int getAttackDamage();
		void setName(std::string n);
		void setHitPoints(int i);
		void setEnergyPoints(int i);
		void setAttackDamage(int i);

		/* methods */
		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
