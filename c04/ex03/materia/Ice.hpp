#ifndef __ICE_H__
#define __ICE_H__

#include "../AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice(void);
		~Ice(void);
		Ice(const Ice & rhs);

		Ice & operator=(const Ice & rhs);

		AMateria* clone(void) const;
};


#endif // __ICE_H__