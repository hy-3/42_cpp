#pragma once
#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>

class Zombie {
	private:
		std::string _name;
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void setName(std::string name);
		std::string getName(void);
		void announce(void);
};

Zombie* zombieHorde(int N, std::string name);
void deleteZombieHorde(Zombie *zh);

#endif