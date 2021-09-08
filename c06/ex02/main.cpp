
#include "Base.hpp"

int main (void)
{
	std::cout << "--Proof of truth--" << std::endl;
	A real;
	// WE ALREADY KNOW THE REAL TYPE SO IDENTIFY SHOULD RETURN A
	Base *knew = &real;
	// FOR PROOF IT'S WORK
	std::cout << "Identify by pointer" << std::endl;
	identify(knew);
	std::cout << "Identify by ref" << std::endl;
	identify(*knew);

	std::cout << std::endl << "--Generation--" << std::endl;

	// WE DON'T KNOW WHAT IS THE REAL TYPE CURRENTLY
	Base *gen = generate();
	std::cout << "Identify by pointer" << std::endl;
	identify(gen);
	std::cout << "Identify by ref" << std::endl;
	identify(*gen);

	return (0);
}