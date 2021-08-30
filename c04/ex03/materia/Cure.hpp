#ifndef __CURE_H__
#define __CURE_H__

#include "../AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure(void);
		~Cure(void);
		Cure(const Cure & rhs);

		Cure & operator=(const Cure & rhs);

		AMateria* clone(void) const;
};
#endif // __CURE_H__