#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = 0;
}
MateriaSource::MateriaSource(MateriaSource const & obj)
{
	*this = obj;
}
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i])
			delete this->materia[i];
	}
}
MateriaSource & MateriaSource::operator=(MateriaSource const & obj)
{
	if (this == &obj)
		return *this;
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] != 0)
			delete this->materia[i];
		this->materia[i] = obj.materia[i]->clone();
	}
	return *this;
}
void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] == 0)
		{
			this->materia[i] = m;
			break ;
		}
	}
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] != 0)
		{
			if (this->materia[i]->getType() == type)
				return this->materia[i]->clone(); 
		}
	}
	return 0;
}
