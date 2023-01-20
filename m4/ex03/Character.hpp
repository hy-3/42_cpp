#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

class Character {
	private:
		std::string _name;
		AMateria *_materia[4];
	public:
		Character();
		Character(std::string name);
		~Character();
		std::string getName() const;
		void setName(std::string n);
};

#endif