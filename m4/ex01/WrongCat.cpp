#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat constructor (type: WrongCat)" << std::endl;
	WrongAnimal::setType("WrongCat");
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "[WrongCat] Mmmmm Mmmmm" << std::endl;
}