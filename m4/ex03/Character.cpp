#include "Character.hpp"

Character::Character(): _name("undefined") {}

Character::Character(std::string name): _name(name) {}

Character::Character(const Character &c) {
	this->setName(c.getName());
	this->numOfMaterial = c.getNumOfMaterial();
	int currNum = this->numOfMaterial;
	if (currNum > 0) {
		for (int i = 0; i < currNum; i++) {
			delete this->_material[i];
			this->_material[i] = c._material[i]->clone();
		}
	}
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
		std::cout << "[Equip error] no space to equip more material." << std::endl;
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
		std::cout << "[Unequip error] idx is out of range." << std::endl;
	}
}

void Character::use(int idx, ICharacter &target) {
	_material[idx]->use(target);
}

std::string const &Character::getName() const {
	return this->_name;
}

int Character::getNumOfMaterial() const {
	return this->numOfMaterial;
}

void Character::setName(std::string n) {
	this->_name = n;
}

void Character::setNumOfMaterial(int i) {
	this->numOfMaterial = i;
}

Character &Character::operator=(const Character &c) {
	this->setName(c.getName());
	this->numOfMaterial = c.getNumOfMaterial();
	int currNum = this->numOfMaterial;
	if (currNum > 0) {
		for (int i = 0; i < currNum; i++) {
			delete this->_material[i];
			this->_material[i] = c._material[i]->clone();
		}
	}
	return *this;
}