#include "Convert.hpp"


int main (int argc, char *argv [])
{

	if (argc < 2)
	{
		std::cerr << ERR << "No args passed" << DEF << std::endl;
		exit(1);
	}
	else if (argc  > 2)
	{
		std::cerr << ERR << "Too many arguments" << DEF << std::endl;
		exit(1);
	}

	Convert elem = Convert(argv[1]);

	elem.toChar();
	elem.toInt();
	elem.toFloat();
	elem.toDouble();

	return (0);
}