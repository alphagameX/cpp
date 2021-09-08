
#include "Array.hpp"

int main(void)
{
	Array<int> int_array(10);
	Array<std::string> str_array(10);

	for(int i = 0; i < int_array.size(); i++)
	{
		try
		{
			std::cout << int_array[i] << std::endl;
			int_array[i] = i;
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	for(int i = 0; i < int_array.size(); i++)
	{
		try
		{
			std::cout << int_array[i] << std::endl;
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}


	Array<int> cpy = int_array;
	for(int i = 0; i < cpy.size(); i++)
	{
		try
		{
			std::cout << cpy[i] << std::endl;
			cpy[i] = i;
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}




	for(int i = 0; i < str_array.size(); i++)
	{
		try
		{
			std::cout << str_array[i] << std::endl;
			str_array[i] = "string_" + std::to_string(i);
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	for(int i = 0; i < str_array.size(); i++)
	{
		try
		{
			std::cout << str_array[i] << std::endl;
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	return (0);
}