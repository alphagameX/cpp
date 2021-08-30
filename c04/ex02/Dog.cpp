
#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog constructor" << std::endl;
	_brain = new Brain();
}


Dog::~Dog(void) 
{
	std::cout << "Dog destructor" << std::endl;
	delete _brain;
}

Dog & Dog::operator=(const Dog & rhs) 
{
	if (this == &rhs)
		return (*this);
	type = rhs.type;
	*_brain = *rhs._brain;
	return (*this);
}

Dog::Dog(const Dog & rhs) 
{
	*this = rhs;
}


void Dog::makeSound(void) const
{
	std::cout << "Class Dog MakeSound" << std::endl;
	std::cout << '\a';
}

void Dog::setIdea(int i, std::string idea) 
{
	_brain->setIdea(i, idea);
}

Brain & Dog::getBrain(void) 
{
	return (*_brain);
}
