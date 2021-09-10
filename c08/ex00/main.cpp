#include "easyfind.hpp"

int main (void)
{
	std::srand(hash3());

	std::cout << "easyfind VECTOR" << std::endl << std::endl;

	std::list<int> lst;
	for (int i = 0; i < 100; i++)
		lst.push_back(std::rand() % 100);

	try
	{
		easyfind(lst, 10);
		easyfind(lst, 12);
		easyfind(lst, 14);
		easyfind(lst, 16);
		easyfind(lst, 18);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "easyfind DEQUE" << std::endl << std::endl;

	std::deque<int> deq;
	for (int i = 0; i < 100; i++)
		deq.push_back(std::rand() % 100);

	try
	{
		easyfind(deq, 10);
		easyfind(deq, 12);
		easyfind(deq, 14);
		easyfind(deq, 16);
		easyfind(deq, 18);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "easyfind VECTOR" << std::endl << std::endl;

	std::vector<int> vec;
	for (int i = 0; i < 100; i++)
		vec.push_back(std::rand() % 100);


	try
	{
		easyfind(vec, 10);
		easyfind(vec, 12);
		easyfind(vec, 14);
		easyfind(vec, 16);
		easyfind(vec, 18);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}


	std::cout << std::endl << "easyfind MAP" << std::endl << std::endl;

	std::map<std::string, int> ma ;
	for (int i = 0; i < 100; i++)
		ma[patch::to_string(std::rand() % 100)] = i;

	try
	{
		easyfind(ma, 10);
		easyfind(ma, 12);
		easyfind(ma, 14);
		easyfind(ma, 16);
		easyfind(ma, 18);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}



	return (0);
}


