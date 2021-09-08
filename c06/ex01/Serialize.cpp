#include "Serialize.hpp"

void Data::hi(void)
{
	std::cout << str << std::endl;
}

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