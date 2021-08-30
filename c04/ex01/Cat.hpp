#ifndef __CAT_H__
#define __CAT_H__


#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *_brain;

	public:
		Cat(void);
		Cat(const Cat & rhs);
		virtual ~Cat(void);
		Cat & operator=(const Cat & rhs);

		virtual void makeSound(void) const;
};
#endif // __CAT_H__