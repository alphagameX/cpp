#ifndef __MUTANTSTACK_H__
#define __MUTANTSTACK_H__

#include <iostream>
#include <stack>
#include <list>
#include <iterator>
#include <cstddef>

template<typename T>
class MutantStack: public std::stack<T>
{
	public:

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		MutantStack(void): std::stack<T>() {}
		MutantStack(const MutantStack & rhs): std::stack<T>()
		{
			this->c = rhs.c;
		}

		MutantStack & operator=(const MutantStack & rhs)
		{
			if (this == &rhs)
				return (*this);
			this->c = rhs.c;
			return (*this);
		}

		~MutantStack(void)
		{
			std::cout << "Destructor" << std::endl;
		}

		iterator begin(void)
		{
			return (std::stack<T>::c.begin());
		}

		const_iterator begin(void) const
		{
			return (std::stack<T>::c.begin());
		}

		iterator end(void)
		{
			return (std::stack<T>::c.end());
		}

		const_iterator end(void) const
		{
			return (std::stack<T>::c.end());
		}

		/* REVERSED ITERATOR */
		/*******************************************************/

		reverse_iterator rbegin(void)
		{
			return (std::stack<T>::c.rbegin());
		}

		const_reverse_iterator rbegin(void) const
		{
			return (std::stack<T>::c.rbegin());
		}

		reverse_iterator rend(void)
		{
			return (std::stack<T>::c.rend());
		}

		const_reverse_iterator rend(void) const
		{
			return (std::stack<T>::c.rend());
		}

		T & operator[](int i)
		{
			return (std::stack<T>::c[i]);
		}
		
};

template <typename T>
std::ostream & operator<<(std::ostream & o, const MutantStack<T> & rhs)
{
	typename MutantStack<T>::const_iterator it =  rhs.begin();

	while (it != rhs.end())
	{
		o << *it++ << std::endl;
	}
	return (o);
}


#endif // __MUTANTSTACK_H__