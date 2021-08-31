#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#include "ICharacter.hpp"


class Character: public ICharacter
{
	private:
		AMateria	**garbage;
		int			count;

	public:
		Character(std::string name);
		Character(void);
		~Character(void);
		Character(const Character & rhs);

		Character & operator=(const Character & rhs);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

		void printInventory(void);
		void printGarbage(void);
		
};

#endif // __CHARACTER_H__