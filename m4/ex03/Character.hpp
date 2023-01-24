#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string _name;
		AMateria* _material[4];
		int _numOfMaterial;
	public:
		Character();
		Character(std::string name);
		Character(const Character &c);
		~Character();
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
		std::string const &getName() const;
		int getNumOfMaterial() const;
		void setNumOfMaterial(int i);
		Character &operator=(const Character &c);
};

#endif