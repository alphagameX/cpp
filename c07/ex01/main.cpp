
#include "iter.hpp"



int main (void)
{
	int tab[10] = {0};
	char str[11] = "0123456789";

	std::cout << "print function" << std::endl << std::endl;

	std::cout << "--int tab--" << std::endl;
	::iter(tab, 10, print);	
	std::cout << "--char tab--" << std::endl;
	::iter(str, 10, print);

	std::cout << std::endl << std::endl << "inc function" << std::endl << std::endl;
	::iter(tab, 10, inc);
	std::cout << "--new int tab--" << std::endl;
	::iter(tab, 10, print);

	::iter(str, 10, inc);
	std::cout << "--new char tab--" << std::endl;
	::iter(str, 10, print);

	return (0);
} 