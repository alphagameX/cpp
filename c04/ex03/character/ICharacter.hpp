#ifndef __ICHARACTER_H__
#define __ICHARACTER_H__

#include "../AMateria.hpp"

#define INVENTORY_COUNT 4

#ifndef DEBUG
#define DEBUG 0
#endif

class AMateria;

class ICharacter
{
	protected:
		std::string name;
		AMateria *inventory[INVENTORY_COUNT];
		int current;

	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria * m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif // __ICHARACTER_H__

