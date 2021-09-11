#ifndef __SPAN_H__
#define __SPAN_H__


#include <vector>
#include <iostream>

class Span
{
	private:
		bool			_initialize;
		unsigned int	_max_size;
		unsigned int	_min;
		unsigned int	_max;
		std::vector <unsigned int> _vec;
	
	public:
		Span(void);
		Span(unsigned int);
		Span(const Span &);

		~Span(void);

		Span & operator=(const Span &);

		void addNumber(unsigned int);
		unsigned int shortestSpan(void) const;
		unsigned int longestSpan(void) const;

		const std::vector <unsigned int> &	getVector(void) const;
		unsigned int					max(void) const;
		unsigned int					min(void) const;

		class DoubleNumberException: public std::exception
		{
			public:
				virtual const char *what(void) const throw ()
				{
					return ("You can't add this number because is already in the list !");
				}
		};

		class MaxSizeReachException: public std::exception
		{
			public:
				virtual const char *what(void) const throw()
				{
					return ("You have reach the limit size of the Span container !");
				}
		};
};

std::ostream & operator<<(std::ostream &, const Span &);


#endif // __SPAN_H__