#include "whatever.hpp"

int main (void)
{
	{
		int a = 8;
		int b = 10;

		std::cout << "a: " << a << ", b: " << b <<std::endl;
		::swap(a, b);
		std::cout << "a: " << a << ", b: " << b <<std::endl;
		std::cout << "Max between a and b: " << ::max(a, b) << std::endl;
		std::cout << "Min between a and b: " << ::min(a, b) << std::endl;
	}

	{
		float a = 8.4f;
		float b = 10.3434f;

		std::cout << "a: " << a << ", b: " << b <<std::endl;
		::swap(a, b);
		std::cout << "a: " << a << ", b: " << b <<std::endl;
		std::cout << "Max between a and b: " << ::max(a, b) << std::endl;
		std::cout << "Min between a and b: " << ::min(a, b) << std::endl;
	}

	{
		std::string a = "string a";
		std::string b = "string b";

		std::cout << "a: " << a << ", b: " << b <<std::endl;
		::swap(a, b);
		std::cout << "a: " << a << ", b: " << b <<std::endl;
		std::cout << "Max between a and b: " << ::max(a, b) << std::endl;
		std::cout << "Min between a and b: " << ::min(a, b) << std::endl;
	}
	return (0);
}