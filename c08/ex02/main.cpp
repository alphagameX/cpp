
#include "MutantStack.hpp"
#include <list>

int main (void)
{

	MutantStack<int> stack;

	stack.push(9);
	stack.push(11);
	stack.push(12);
	stack.push(13);
	stack.push(14);
	stack.push(16);

	MutantStack<int>::iterator it = stack.begin();

	while (it != stack.end())
	{
		*it += 1;
		std::cout << *it++ << std::endl;
	}	

	std::cout << stack[1] << std::endl;

	return (0);
}