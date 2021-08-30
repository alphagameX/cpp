
#include "Ice.hpp"

Ice::Ice(void): AMateria("Ice")
{
	if (DEBUG)
		std::cout << "Ice constructor" << std::endl;
}

Ice::~Ice(void) 
{
	if (DEBUG)
		std::cout << "Ice destructor" << std::endl;
}

Ice::Ice(const Ice & rhs) 
{
	*this = rhs;
}

Ice & Ice::operator=(const Ice & rhs) 
{
	if (this == &rhs)
		return (*this);
	type = rhs.type;
	return (*this);
}

AMateria* Ice::clone(void) const
{
	AMateria *real = new Ice(*this);
	return (real);
}


