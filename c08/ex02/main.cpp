
#include "MutantStack.hpp"
#include <list>

int main (void)
{


	MutantStack<int> stack;

	std::cout << "---Empty stack---" << std::endl;

	std::cout << stack << std::endl;

	std::cout << "---Filled stack---" << std::endl;

	stack.push(9);
	stack.push(11);
	stack.push(12);
	stack.push(13);
	stack.push(14);
	stack.push(16);
	stack.push(17);

	std::cout << stack << std::endl;

	std::cout << "---COPY---" << std::endl;

	MutantStack<int> copy = stack;

	std::cout << stack << std::endl;

	std::cout << "---REVERSE ITERATOR---" << std::endl;

	MutantStack<int>::reverse_iterator it = copy.rbegin();

	while (it != copy.rend())
	{
		std::cout << *it++ << std::endl;
	}

	return (0);
}