
#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int a(void)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}

int b(void)
{
	Array<int> int_array(10);
	Array<std::string> str_array(10);

	for(unsigned int i = 0; i < int_array.size(); i++)
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

	for(unsigned int i = 0; i < int_array.size(); i++)
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
	for(unsigned int i = 0; i < cpy.size(); i++)
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
	for(unsigned int i = 0; i < str_array.size(); i++)
	{
		try
		{
			std::cout << str_array[i] << std::endl;
			str_array[i] = "string_" + patch::to_string(i);
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	for(unsigned int i = 0; i < str_array.size(); i++)
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

int main (void)
{
	std::cout << "42 main" << std::endl << std::endl;

	a();

	std::cout << std::endl << "My main" << std::endl << std::endl;

	b();
}