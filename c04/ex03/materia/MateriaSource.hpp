#ifndef __MATERIASOURCE_H__
#define __MATERIASOURCE_H__


#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource(void);
		~MateriaSource(void);
		MateriaSource(const MateriaSource & rhs);

		MateriaSource & operator=(const MateriaSource & rhs);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};
#endif // __MATERIASOURCE_H__