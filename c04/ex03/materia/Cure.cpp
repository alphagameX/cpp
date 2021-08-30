
#include "Cure.hpp"

Cure::Cure(void): AMateria("Cure")
{
	if (DEBUG)
		std::cout << "Cure constructor" << std::endl;
}

Cure::~Cure(void) 
{
	if (DEBUG)
		std::cout << "Cure destructor" << std::endl;
}

Cure::Cure(const Cure & rhs) 
{
	*this = rhs;
}

Cure & Cure::operator=(const Cure & rhs) 
{
	if (this == &rhs)
		return (*this);
	type = rhs.type;
	return (*this);
}

AMateria* Cure::clone(void) const
{
	AMateria *real = new Cure(*this);
	return (real);
}
