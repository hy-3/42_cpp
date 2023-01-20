#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria {
	protected:
		const std::string type;
	public:
		AMateria(std::string const &type);
		std::string const &getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif