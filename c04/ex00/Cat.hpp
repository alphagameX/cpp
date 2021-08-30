#ifndef __CAT_H__
#define __CAT_H__


#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat(void);
		Cat(const Cat & rhs);
		~Cat(void);
		Cat & operator=(const Cat & rhs);

		virtual void makeSound(void) const;
};
#endif // __CAT_H__