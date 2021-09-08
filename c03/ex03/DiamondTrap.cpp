#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("default_clap_name"), _name("default")
{
	std::cout << "DiamondTrap constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name)
{
	std::cout << "DiamondTrap constructor" << std::endl;
}

void DiamondTrap::whoAmi(void) 
{
	std::cout << "I am " << _name << std::endl; 
}
