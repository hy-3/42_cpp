#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat") {
	std::cout << "WrongCat constructor (type: WrongCat)" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "[WrongCat] Mmmmm Mmmmm" << std::endl;
}