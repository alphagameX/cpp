#ifndef __AMATERIA_H__
#define __AMATERIA_H__

#include <iostream>
#include "character/ICharacter.hpp"

#ifndef DEBUG
#define DEBUG 0
#endif

class ICharacter;

class AMateria
{
	protected:
		std::string type;

	public:
		AMateria(void);
		virtual ~AMateria(void);
		AMateria(std::string const & type);
		AMateria & operator=(const AMateria & rhs);
		std::string const & getType(void) const; //Returns the materia type
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
};
#endif // __AMATERIA_H__