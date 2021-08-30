
#include "Animal.hpp"

Animal::Animal(void) : type("animal")
{
	std::cout << "Animal constructor" << std::endl;
}


Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(const Animal & rhs) 
{
	std::cout << "Animal copy constructor" << std::endl;
	*this = rhs;
}

Animal::~Animal(void) 
{
	std::cout << "Animal destructor" << std::endl;
}


Animal & Animal::operator=(const Animal & rhs)
{
	if (this == &rhs)
		return (*this);
	type = rhs.type;
	return (*this);
}

std::string Animal::getType(void) const
{
	return type;
}


void Animal::makeSound(void) const
{
	std::cout << "Class Animal makeSound" << std::endl;
	std::cout << '\a';
}

