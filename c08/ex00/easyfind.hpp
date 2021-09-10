
#include <algorithm>
#include <list>
#include <vector>
#include <iostream>

class EasyFindNotFoundException : public std::exception
{
	private:
		int _value;
	public:
		EasyFindNotFoundException(int value) : _value(value) {}
		EasyFindNotFoundException(void): _value(-1) {}
		virtual const char *what(void) const throw()
		{
			std::string msg = new std::string("Value " + std::to_string(_value) + " is not found");
			return (msg);
		}
};

template <typename T>
/**
 * ! only with a container
 */
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