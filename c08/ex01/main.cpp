
#include "Span.hpp"

# define MAX_SIZE 10000


void print_span(Span & span)
{
	std::cout << span.min() << std::endl;
	std::cout << span.max() << std::endl;

	std::cout << std::endl;

	std::cout <<  "shortest: " <<  span.shortestSpan() << std::endl;
	std::cout << "longest: " <<  span.longestSpan() << std::endl;
}

void test_span(void)
{

	Span span = Span(MAX_SIZE);

	// 0 1 2 3 4 .... 9999
	for(int i = 0; i < MAX_SIZE - 1; i++)
		span.addNumber(i);

	span.addNumber(MAX_SIZE + 1);

	// add last number who is already in the list
	try
	{
		span.addNumber(MAX_SIZE + 2);
	} 
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	// add number when span is full
	try
	{
		span.addNumber(4);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	print_span(span);

}

int main_1(void)
{

	std::cout << "---BASIC TEST---" << std::endl;

	Span span = Span(10);

	span.addNumber(0); 
	span.addNumber(9);
	span.addNumber(19); 
	span.addNumber(25); // 25 - 19 = 6
	span.addNumber(1023);
	span.addNumber(32); // 32 - 25 = 7

	print_span(span);


	std::cout << "---COMPLEXE TEST---" << std::endl;

	test_span();

	
	return (0);
}

int main_2()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "shortest: " << sp.shortestSpan() << std::endl;
	std::cout << "longest: " << sp.longestSpan() << std::endl;

	return (0);
}


int main()
{

	main_1();
	main_2();

	return (0);
}