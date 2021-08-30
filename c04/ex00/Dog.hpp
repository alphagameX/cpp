#ifndef __DOG_H__
#define __DOG_H__


#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog(void);
		Dog(const Dog & rhs);
		~Dog(void);
		Dog & operator=(const Dog & rhs);

		virtual void makeSound(void) const;
};
#endif // __DOG_H__