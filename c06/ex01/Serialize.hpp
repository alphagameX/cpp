#include <iostream>

struct Data
{
	int i;
	char c;
	std::string str;

	void hi(void);
};

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);
std::ostream & operator<<(std::ostream & o, const Data & rhs);