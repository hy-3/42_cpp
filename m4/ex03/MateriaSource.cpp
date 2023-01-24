#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {}

MateriaSource::MateriaSource(const MateriaSource &ms){
	this->numOfMaterialSource = ms.getNumOfMaterialSource();
	int currNum = this->numOfMaterialSource;
	if (currNum > 0) {
		for (int i = 0; i < currNum; i++) {
			delete this->_materialSource[i];
			this->_materialSource[i] = ms._materialSource[i]->clone();
		}
	}
}

MateriaSource::~MateriaSource() {
	int currNum = getNumOfMaterialSource();
	for (int i = 0; i < currNum; i++)
		delete _materialSource[i];
}

void MateriaSource::learnMateria(AMateria *m) {
	int currNum = getNumOfMaterialSource();
	if (0 <= currNum && currNum <= 3) {
		_materialSource[currNum] = m;
		setNumOfMaterialSource(currNum + 1);
	} else {
		std::cout << "[LearnMateria error] MateriaSource's materia is full" << std::endl;
	}
}

AMateria* MateriaSource::createMateria(std::string const &type) {
	int currNum = getNumOfMaterialSource();
	for (int i = 0; i < currNum; i++)
		if (!type.compare(_materialSource[i]->getType()))
			return _materialSource[i]->clone();
	return NULL;
}

int MateriaSource::getNumOfMaterialSource() const {
	return this->numOfMaterialSource;
}

void MateriaSource::setNumOfMaterialSource(int i) {
	this->numOfMaterialSource = i;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &ms) {
	this->numOfMaterialSource = ms.getNumOfMaterialSource();
	int currNum = this->numOfMaterialSource;
	if (currNum > 0) {
		for (int i = 0; i < currNum; i++) {
			delete this->_materialSource[i];
			this->_materialSource[i] = ms._materialSource[i]->clone();
		}
	}
	return *this;
}