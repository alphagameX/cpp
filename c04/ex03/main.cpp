

#include "materia/Cure.hpp"
#include "materia/Ice.hpp"
#include "character/Character.hpp"
#include "materia/MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());

	// TOO MANY LEARNED MATERIA
	src->learnMateria(new Ice()); 

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);

	delete tmp;

	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp); 

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	// UNKNOWN MATERIA INDEX
	me->use(3, *bob);

	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	

	// UNKNOWN MATERIA INDEX


	delete bob;
	delete me;
	delete src;
	return 0;
}


// int main (void)
// {

// 	AMateria *ice = new Ice();
// 	AMateria *cure = new Cure();

// 	AMateria *ice_clone = ice->clone();
// 	AMateria *cure_clone = cure->clone();


// 	std::cout << std::endl;

// 	std::cout << "Default ice type: " << ice->getType() << std::endl;
// 	std::cout << "Ice address: " << ice << " Ice copy address: " << ice_clone << " " << ice_clone->getType() << std::endl;

// 	std::cout << "Default cure type: " << cure->getType() << std::endl;
// 	std::cout << "Cure address: " << cure << " Cure copy address: " << cure_clone << " " << cure_clone->getType() << std::endl;


// 	ICharacter *bob = new Character("Bob");
// 	std::cout << bob->getName() << std::endl;
	
	
// 	bob->equip(ice);
// 	bob->equip(cure);
// 	bob->use(0, *bob);
// 	bob->use(1, *bob);


// 	delete ice;
// 	delete cure;
// 	delete ice_clone;
// 	delete cure_clone;
// 	delete bob;

// 	return (0);
// }