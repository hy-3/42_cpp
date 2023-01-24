#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria *_materialSource[4];
		int numOfMaterialSource;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &ms);
		~MateriaSource();
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const &type);
		int getNumOfMaterialSource() const;
		void setNumOfMaterialSource(int i);
		MateriaSource &operator=(const MateriaSource &ms);
};

#endif