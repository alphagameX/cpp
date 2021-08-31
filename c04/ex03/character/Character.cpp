
#include "Character.hpp"


Character::Character(std::string name): garbage(NULL), count(0)
{
	if (DEBUG)
		std::cout << "Character constructor" << std::endl;
	this->name = name;
	current = 0;
}

Character::Character(void): garbage(NULL), count(0)
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
	for (int i = 0; i < count; i++)
		delete garbage[i];
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
	if (current == INVENTORY_COUNT && !m)
	{
		std::cout << name << "'s inventory is full !" << std::endl;
		return;
	}
	inventory[current] = m->clone();
	current++;
}

void Character::unequip(int idx) 
{
	AMateria *tmp;
	AMateria **garbage_;

	if (idx >= current || idx >= INVENTORY_COUNT || idx < 0)
	{
		std::cout << name << "'s invetory index is already empty or idx invalid" << std::endl;
		return;
	}
	while(idx + 1 < current)
	{
		tmp = inventory[idx];
		inventory[idx] = inventory[idx + 1];
		inventory[idx + 1] = tmp;
		idx++;
	}
	garbage_ = new AMateria*[count + 1];
	for(int i = 0; i < count; i++)
		garbage_[i] = garbage[i]; 
	garbage_[count] = inventory[idx];
	delete [] garbage;
	garbage = garbage_;
	count++;

	inventory[idx] = NULL;
	current = idx;
}

void Character::printInventory(void)
{

	for (int i = 0; i < current; i++)
		std::cout << inventory[i]->getType() << std::endl;
}

void Character::printGarbage(void)
{
	for (int i = 0; i < count; i++)
		std::cout << garbage[i]->getType() << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < current)
		inventory[idx]->use(target);
	else
		std::cout << "The inventory's index required is unset..." << std::endl;
}


