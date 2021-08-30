
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	if (DEBUG)
		std::cout << "MateriaSource constructor" << std::endl;
	count = 0;
}

MateriaSource::~MateriaSource(void) 
{
	if (DEBUG)
		std::cout << "MateriaSource destructor" << std::endl;
	for (int i = 0; i < count; i++)
		delete learned[i];
}

MateriaSource::MateriaSource(const MateriaSource & rhs) 
{
	*this = rhs;
}

MateriaSource & MateriaSource::operator=(const MateriaSource & rhs) 
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

void MateriaSource::learnMateria(AMateria * materia) 
{
	if (count < LEARN)
	{
		this->learned[count] = materia;
		count++;
	}
	else
	{
		std::cout << "Limit reached of learned materia" << std::endl;
		delete materia;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) 
{
	AMateria *tmp;
	AMateria *f;

	for(int i = count - 1; i >= 0; i--)
	{
		if (learned[i]->getType() == type)
		{
			for (int e = i; e < count; e++)
			{
				if (e + 1 < count)
				{
					tmp = learned[e];
					learned[e] = learned[e + 1];
					learned[e + 1] = tmp; 
				}
			}
			tmp = learned[count - 1];
			f = tmp->clone();
			delete tmp;
			count--;
			return f;
		}
	}
	std::cout << "Unknown type..." << std::endl;
	return (NULL);
}
