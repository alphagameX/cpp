
#include "Brain.hpp"

Brain::Brain(void) {}

Brain::~Brain(void) {}

Brain::Brain(const Brain & rhs) 
{
	*this = rhs;
}

Brain & Brain::operator=(const Brain & rhs) 
{
	if (this == &rhs)
		return (*this);
	for(int i = 0; i < 100; i++)
		_ideas[i] = rhs._ideas[i];
	return (*this);
}

std::string & Brain::operator[](int i) 
{
	return _ideas[i];
}

void Brain::setIdea(int i, std::string idea) 
{
	_ideas[i] = idea;
}
