#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name)
{
	std::cout << "DiamondTrap constructor" << std::endl;
	return ;
}

void DiamondTrap::whoAmi(void) 
{
	std::cout << "I am " << _name << std::endl; 
}
