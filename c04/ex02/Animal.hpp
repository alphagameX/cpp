#ifndef __ANIMAL_H__
#define __ANIMAL_H__


#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(std::string type);
		virtual ~Animal(void);
		Animal(const Animal & rhs);
		Animal & operator=(const Animal & rhs);

		std::string	getType(void) const;
		virtual void makeSound(void) const = 0;
};

#endif // __ANIMAL_H__


