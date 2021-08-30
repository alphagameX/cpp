
#include "Ice.hpp"

Ice::Ice(void): AMateria("Ice")
{
	std::cout << "Ice constructor" << std::endl;
}

Ice::~Ice(void) 
{
	std::cout << "Ice destructor" << std::endl;
}

Ice::Ice(const Ice & rhs) 
{
	*this = rhs;
}

Ice & Ice::operator=(const Ice & rhs) 
{
	if (this == &rhs);
		return (*this);
	type = rhs.type;
	return (*this);
}
