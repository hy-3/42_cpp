#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main() {
	std::cout << "--- start ---" << std::endl;
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	AMateria *materia = new Cure();
	src->learnMateria(materia);
	std::cout << ">>>>> print that array of materia is full." << std::endl;
	src->learnMateria(materia);
	src->learnMateria(materia);

	ICharacter *mike = new Character("Mike");
	ICharacter *lisa = new Character("Lisa");
	materia = src->createMateria("ice");
	mike->equip(materia);
	materia = src->createMateria("ice");
	mike->equip(materia);
	materia = src->createMateria("cure");
	mike->equip(materia);
	materia = src->createMateria("cure");
	mike->equip(materia);

	std::cout << ">>>>> print that array of equip is full." << std::endl;
	mike->equip(materia);
	mike->unequip(3);
	std::cout << ">>>>> print that idx is out of range." << std::endl;
	mike->unequip(4);
	std::cout << ">>>>> print no material in that index(3) because it is unequipped." << std::endl;
	mike->use(3, *lisa);
	mike->equip(materia);
	mike->use(0, *lisa);
	mike->use(2, *lisa);
	std::cout << ">>>>> print out of index because it is 4." << std::endl;
	mike->use(4, *lisa);

	Character *original = new Character("original");
	Character *clone1 = new Character(*original);
	AMateria *m = new Ice();
	original->equip(m);
	Character *clone2 = new Character(*original);
	std::cout << ">>>>> check if it is cloned" << std::endl;
	std::cout << "original : ";
	original->use(0, *mike);
	std::cout << "clone1   : ";
	clone1->use(0, *mike);
	std::cout << "clone2   : ";
	clone2->use(0, *mike);

	delete src;
	delete mike;
	delete lisa;
	delete original;
	delete clone1;
	delete clone2;
	std::cout << "--- end ---" << std::endl;
	return (0);
}
