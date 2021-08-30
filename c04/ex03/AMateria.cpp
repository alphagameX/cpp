
#include "AMateria.hpp"
#include <string>

AMateria::AMateria(void) 
{
	if (DEBUG)
		std::cout << "AMateria constructor" << std::endl;
}

AMateria::AMateria(std::string const & type) 
{
	if (DEBUG)
		std::cout << "AMateria constructor" << std::endl;
	std::string lower = type;
	for(int i = 0; i < lower.length(); i++)
		lower[i] = tolower(lower[i]);
	this->type = lower;
}

AMateria::~AMateria(void) 
{
	if (DEBUG)
		std::cout << "AMaterial destructor" << std::endl;
}

AMateria & AMateria::operator=(const AMateria & rhs) 
{
	if (this == &rhs)
		return (*this);
	type = rhs.type;
	return (*this);
}

std::string const & AMateria::getType(void) const
{
	return (type);
}

void AMateria::use(ICharacter& target) 
{
	if (type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (type == "cure")
		std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	else
		std::cout << "No user manual for this Materia" << std::endl;
}
