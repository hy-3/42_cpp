#pragma once
#ifndef __HUMANA_H__
#define __HUMANA_H__

#include "Weapon.hpp"

class HumanA {
	private:
		Weapon &_weapon;
		std::string _name;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		std::string getName();
		Weapon getWeapon();
		void attack();
};

#endif