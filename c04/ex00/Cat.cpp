
#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat constructor" << std::endl;
}


Cat::~Cat(void) 
{
	std::cout << "Cat destructor" << std::endl;
}

Cat & Cat::operator=(const Cat & rhs) 
{
	if (this == &rhs)
		return (*this);
	type = rhs.type;
	return (*this);
}

Cat::Cat(const Cat & rhs) 
{
	*this = rhs;
}


void Cat::makeSound(void) const
{
	std::cout << "Class Cat MakeSound" << std::endl;
	std::cout << '\a' << std::endl;
}
