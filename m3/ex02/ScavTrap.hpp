#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private:
		bool _gateKeeperMode;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		void attack(std::string const &target);
		void guardGate();
		bool getGateKeeperMode();
		void setGateKeeperMode(bool b);
};

#endif