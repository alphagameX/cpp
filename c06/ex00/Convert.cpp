#include "Convert.hpp"

Convert::Convert(void) : _value(0) {}

Convert::Convert(std::string value)
{
	try
	{
		_value = std::stold(value);
	}
	catch (std::invalid_argument & e)
	{
		std::cerr << ERR << "Invalid args is passed" << DEF << std::endl;
		exit(1);
	}
}

Convert::Convert(const Convert & rhs) 
{
	*this = rhs;
}

Convert & Convert::operator=(const Convert & rhs) 
{
	if (this == &rhs)
		return (*this);
	_value = rhs._value;
	return (*this);
}

Convert::~Convert(void) {}


void Convert::toInt(void) const
{
	std::cout << "Int: ";
	if (_value >= INT_MIN && _value <= INT_MAX)
		std::cout << static_cast<int>(_value) << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void Convert::toChar(void) const
{
	std::cout << "Char: ";
	if (_value >= 32 && _value <= 126)
		std::cout << "'" << static_cast<char>(_value) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void Convert::toDouble(void) const
{
	double d;
	int integer = static_cast<int>(_value);

	std::cout << "Double: " << _value;
	if (!(d = (_value - static_cast<double>(integer))))
		std::cout << ".0" << std::endl;
	else
		std::cout << std::endl;
}

void Convert::toFloat(void) const
{
	float floating;
	int integer = static_cast<int>(_value);

	std::string value = std::to_string(static_cast<float>(_value));

	std::cout << "Float: ";

	if (value != "nan" && value != "-nan" && value != "inf" && value != "-inf")
	{	
		std::cout << integer << ".";
		if (!(floating = (_value - static_cast<float>(integer))))
			std::cout << "0f" << std::endl;
		else
		{
			std::string f = std::to_string(floating).substr(floating < 0 ? 3 : 2, 2);
			int i = f.length() - 1;
			while(f[i] == '0')
				i--;
			std::cout << f.substr(0, i + 1) << "f" << std::endl;
		}
	}
	else
		std::cout << value << "f" << std::endl; 
}

long double Convert::getRawValue(void) const
{
	return (_value);
}


std::ostream & operator<<(std::ostream & o, const Convert & rhs) 
{
	o << rhs.getRawValue();
	return (o);
}
