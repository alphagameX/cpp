
#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog constructor" << std::endl;
}


Dog::~Dog(void) 
{
	std::cout << "Dog destructor" << std::endl;
}

Dog & Dog::operator=(const Dog & rhs) 
{
	if (this == &rhs)
		return (*this);
	type = rhs.type;
	return (*this);
}

Dog::Dog(const Dog & rhs) 
{
	*this = rhs;
}


void Dog::makeSound(void) const
{
	std::cout << "Class Dog MakeSound" << std::endl;
	std::cout << '\a' << std::endl;
}
