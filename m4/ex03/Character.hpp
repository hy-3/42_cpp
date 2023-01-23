#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

class Character : public ICharacter {
	private:
		std::string _name;
		AMateria* _materia[4];
		int numOfMaterial;
	public:
		Character();
		Character(std::string name);
		Character(const Character &c);
		~Character();

		/* inheritated methods */
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);

		/* getter, setter */
		std::string const &getName() const;
		int getNumOfMaterial() const;
		void setName(std::string n);
		void setNumOfMaterial(int i);

		/* operator overload */
		Character &operator=(const Character &c);
};

#endif