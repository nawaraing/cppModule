#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include <string>

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*materia[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const & obj);
	~MateriaSource();
	MateriaSource & operator=(MateriaSource const & obj);
	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};

#endif