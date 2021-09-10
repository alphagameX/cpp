#include "easyfind.hpp"

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




int main (void)
{
	std::srand(time(NULL));

	std::list<int> lst;
	for (int i = 0; i < 100; i++)
	{
		lst.push_back(std::rand() % 100);
	}

	try
	{
		easyfind(lst, 10);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::vector<std::string> vec;
	for (int i = 0; i < 100; i++)
	{
		vec.push_back("string_" + std::to_string(std::rand() % 100));
	}




	

	return (0);
}

