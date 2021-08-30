
#include "Cure.hpp"

Cure::Cure(void): AMateria("Cure")
{
	std::cout << "Cure constructor" << std::endl;
}

Cure::~Cure(void) 
{
	std::cout << "Cure destructor" << std::endl;
}

Cure::Cure(const Cure & rhs) 
{
	*this = rhs;
}

Cure & Cure::operator=(const Cure & rhs) 
{
	if (this == &rhs);
		return (*this);
	type = rhs.type;
	return (*this);
}
