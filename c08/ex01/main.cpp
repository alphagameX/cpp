
#include "Span.hpp"

int main(void)
{
	Span span = Span(10);


	span.addNumber(19);
	span.addNumber(12);
	span.addNumber(17);
	span.addNumber(9);
	span.addNumber(1);
	span.addNumber(1110);

	
	std::cout << span.min() << std::endl;
	std::cout << span.max() << std::endl;


	std::cout << std::endl;
	
	std::cout << span << std::endl;

	std::cout << std::endl;

	std::cout << span.longestSpan() << std::endl;
	std::cout << span.shortestSpan() << std::endl;

	return (0);
}
// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(5);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// }
