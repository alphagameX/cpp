#ifndef __IMATERIASOURCE_H__
#define __IMATERIASOURCE_H__

#include "../AMateria.hpp"
#define LEARN 4

class AMateria;

class IMateriaSource
{
	protected:
		AMateria	*learned[LEARN];
		int			count;
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};
#endif // __IMATERIASOURCE_H__