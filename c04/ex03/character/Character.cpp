
#include "Character.hpp"


Character::Character(std::string name)
{
	if (DEBUG)
		std::cout << "Character constructor" << std::endl;
	this->name = name;
	current = 0;	
}

Character::Character(void)
{
	if (DEBUG)
		std::cout << "Character constructor" << std::endl;
}

Character::~Character(void) 
{
	if (DEBUG)
		std::cout << "Character destructor" << std::endl;
	for (int i = 0; i < current; i++)
		delete inventory[i];
}

Character::Character(const Character & rhs) 
{
	*this = rhs;
}

Character & Character::operator=(const Character & rhs) 
{
	if (this == &rhs)
		return (*this);
	current = rhs.current;
	for(int i = 0; i < INVENTORY_COUNT; i++)
		*inventory[i] = *rhs.inventory[i];
	name = rhs.name;
	return (*this);
}

std::string const & Character::getName(void) const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	if (current == INVENTORY_COUNT)
	{
		std::cout << name << "'s inventory is full !" << std::endl;
		return;
	}
	inventory[current] = m->clone();
	current++;
}

void Character::unequip(int idx) 
{
	if (idx > current && idx < 0 && !inventory[idx])
	{
		std::cout << name << "'s invetory index is already empty or idx invalid" << std::endl;
		return;
	}

	inventory[idx] = NULL;
	current--;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < current)
		inventory[idx]->use(target);
	else
		std::cout << "The inventory's index required is unset..." << std::endl;
}


