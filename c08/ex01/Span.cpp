
#include "Span.hpp"

Span::Span(void): _initialize(false), _max_size(10000), _min(0), _max(0)
{
	_vec = std::vector<unsigned int> ();
}

Span::Span(unsigned int N): _initialize(false), _max_size(N), _min(0), _max(0)
{
	_vec = std::vector<unsigned int> ();
}

Span::Span(const Span & rhs)
{
	_max = rhs._max;
	_min = rhs._min;
	_vec = rhs._vec;
}

Span::~Span(void)
{}

Span & Span::operator=(const Span & rhs)
{
	if (this == &rhs)
		return (*this);
	Span *tmp = new Span(rhs);
	return (*tmp);
}

void	Span::addNumber(unsigned int nb)
{
	for (std::vector<unsigned int>::const_iterator it = _vec.begin(); it != _vec.end(); it++)
	{
		if (nb == *it)
			throw Span::DoubleNumberException();
	}
	if (_vec.size() + 1 > _max_size)
		throw Span::MaxSizeReachException();
	_vec.push_back(nb);

	if (!_initialize)
	{
		_min = nb;
		_initialize = true;
	}

	if (nb < _min)
		_min = nb;
	if (nb > _max)
		_max = nb;
}

unsigned int Span::shortestSpan(void) const
{
	
	unsigned int max = _max;

	for(std::vector<unsigned int>::const_iterator it = _vec.begin(); it != _vec.end(); it++)
	{
		if (*it < max && *it > _min)
			max = *it;
	}
	return (max - _min);
}

unsigned int Span::longestSpan(void) const
{
	return (_max - _min);
}

const std::vector<unsigned int> & Span::getVector(void) const
{
	return (_vec);
}

unsigned int Span::max(void) const
{
	return (_max);
}

unsigned int Span::min(void) const
{
	return (_min);
}

std::ostream & operator<<(std::ostream & o, const Span & rhs)
{
	const std::vector<unsigned int> & vec = rhs.getVector();
	std::vector<unsigned int>::const_iterator it = vec.begin(); 
	while(it != vec.end() - 1)
		o << *it++ << std::endl;
	o << *it;
	return (o);
}
