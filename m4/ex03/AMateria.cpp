#include "AMateria.hpp"

AMateria::AMateria(): type("undefined") {}

AMateria::AMateria(std::string const &type): type(type) {}

AMateria::~AMateria() {}

std::string const &AMateria::getType() const {
	return this->type;
}

void AMateria::use(ICharacter &target) {
	std::cout << "* use " << getType() << " a " << target.getName() << " *" << std::endl;
}
