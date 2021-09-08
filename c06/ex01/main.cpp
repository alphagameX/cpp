
#include "Serialize.hpp"

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