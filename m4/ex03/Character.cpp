#include "Character.hpp"

Character::Character(): _name("undefined"), _numOfMaterial(0) {}

Character::Character(std::string name): _name(name), _numOfMaterial(0) {}

Character::Character(const Character &c) {
	this->_name.assign(c.getName());
	this->_numOfMaterial = c.getNumOfMaterial();
	int currNum = this->_numOfMaterial;
	for (int i = 0; i < currNum; i++)
		this->_material[i] = c._material[i]->clone();
}

Character::~Character() {
	int currNum = getNumOfMaterial();
	for (int i = 0; i < currNum; i++)
		delete _material[i];
}

void Character::equip(AMateria *m) {
	int currNum = getNumOfMaterial();
	if (0 <= currNum && currNum <= 3) {
		_material[currNum] = m;
		setNumOfMaterial(currNum + 1);
	} else {
		std::cout << "[Equip] no space to equip more material." << std::endl;
	}
}

void Character::unequip(int idx) {
	int currNum = getNumOfMaterial();
	if (0 <= idx && idx <= 3) {
		_material[idx] = NULL;
		if (idx < currNum - 1) {
			for (int i = idx; i < currNum - 1; i++)
				_material[i] = _material[i + 1];
			setNumOfMaterial(currNum - 1);
		}
	} else {
		std::cout << "[Unequip] idx is out of range." << std::endl;
	}
}

void Character::use(int idx, ICharacter &target) {
	if (0 <= idx && idx <= 3 && _material[idx])
		_material[idx]->use(target);
	else
		std::cout << "[Use] Specify 0 - 3 range index or no material in that index." << std::endl;
}

std::string const &Character::getName() const {
	return this->_name;
}

int Character::getNumOfMaterial() const {
	return this->_numOfMaterial;
}

void Character::setNumOfMaterial(int i) {
	this->_numOfMaterial = i;
}

Character &Character::operator=(const Character &c) {
	this->_name.assign(c.getName());
	this->_numOfMaterial = c.getNumOfMaterial();
	int currNum = this->_numOfMaterial;
	for (int i = 0; i < currNum; i++)
		this->_material[i] = c._material[i]->clone();
	return *this;
}