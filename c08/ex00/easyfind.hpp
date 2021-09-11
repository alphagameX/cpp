#include <algorithm>
#include <list>
#include <vector>
#include <iostream>
#include <sys/time.h>
#include <unistd.h>
#include <sstream>
#include <map>
#include <deque>

/********************************************************************************/

unsigned int hash3(void)
{
	struct timeval t;
	gettimeofday(&t, NULL);
	return (((t.tv_sec * 2654435789U) + (t.tv_usec * 2654435789U)) + getpid());
}

namespace patch
{
	template <typename T>
	std::string to_string( const T& n )
	{
		std::ostringstream stm ;
		stm << n ;
		return stm.str() ;
	}
}

/********************************************************************************/

template <typename T> 
std::ostream & operator<<(std::ostream & o, const std::list<T> & lst)
{
	typename std::list<T>::const_iterator it = lst.begin();
	while (it != lst.end())
		o << *it++ << std::endl;
	o << *it;
	return (o);
}

template <typename T>
std::ostream & operator<<(std::ostream & o, const std::vector<T> & lst)
{
	typename std::vector<T>::const_iterator it = lst.begin();
	while (it != lst.end())
		o << *it++ << std::endl;
	o << *it;
	return (o);
}

template <typename T, typename U>
std::ostream & operator<<(std::ostream & o, const std::pair<T, U> & it)
{
	o << it.second;
	return (o);
}

template <typename T, typename U>
bool operator==(std::pair<T, U> pair, const U & rhs)
{
	return (pair.second == rhs);
}

/********************************************************************************/

class EasyFindNotFoundException : public std::exception
{
	private:
		int _value;
	public:
		EasyFindNotFoundException(int value) : _value(value) {}
		EasyFindNotFoundException(void): _value(-1) {}
		virtual const char *what(void) const throw()
		{
			std::string *msg = new std::string("Easyfind not found: " + patch::to_string(_value));
			return (msg->c_str());
		}
};


/********************************************************************************/

template <typename T>
void easyfind(const T & container, int search)
{
	int pos = 0;
	for (typename T::const_iterator it = container.begin(); it != container.end(); it++)
	{
		if (*it == search)
		{
			std::cout << "Item found at " << pos << " | value : " << *it << std::endl;
			return ;
		}
		pos++;
	}
	throw EasyFindNotFoundException(search);
}
