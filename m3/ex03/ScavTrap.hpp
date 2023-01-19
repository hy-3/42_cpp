#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	private:
		bool _gateKeeperMode;
	public:
		/* constructor, destructor */
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();

		/* getter, setter */
		bool getGateKeeperMode();
		void setGateKeeperMode(bool b);

		/* methods */
		void attack(std::string const &target);
		void guardGate();
};

#endif