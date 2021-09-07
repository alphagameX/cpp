
#include <iostream>

struct Data
{
	int i;
	char c;
	std::string str;

	void hi(void)
	{
		std::cout << str << std::endl;
	}
};

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

std::ostream & operator<<(std::ostream & o, const Data & rhs)
{
	o << "Int: '" << rhs.i << "', Char: '" << rhs.c << "', String: '" << rhs.str << "'";
	return (o);
}

int main (void)
{

	Data d = {.i = 0, .c = 'c', .str = "salut tout le monde"};

	

	std::cout << "Dump: " << d << std::endl << std::endl;

	uintptr_t serialized = serialize(&d);

	std::cout << "Default Data pointer:       " << &d << std::endl;
	std::cout << "Serialized data pointer:    " << serialized << std::endl;

	Data *deserialized = deserialize(serialized);

	std::cout << "Deserialized data pointer:  " << deserialized << std::endl;
	std::cout << "Dump deserialized data:     " << *deserialized << std::endl;


	std::cout << std::endl << "Structure methods work very well !" << std::endl;

	d.hi();
	deserialized->hi();

	return (0);
}