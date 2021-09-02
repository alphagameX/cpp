

#include "materia/Cure.hpp"
#include "materia/Ice.hpp"
#include "character/Character.hpp"
#include "materia/MateriaSource.hpp"



int amateria_test (void)
{

	AMateria *ice = new Ice();
	AMateria *cure = new Cure();

	AMateria *ice_clone = ice->clone();
	AMateria *cure_clone = cure->clone();


	std::cout << std::endl;

	std::cout << "Default ice type: " << ice->getType() << std::endl;
	std::cout << "Ice address: " << ice << " Ice copy address: " << ice_clone << " " << ice_clone->getType() << std::endl;

	std::cout << "Default cure type: " << cure->getType() << std::endl;
	std::cout << "Cure address: " << cure << " Cure copy address: " << cure_clone << " " << cure_clone->getType() << std::endl;


	ICharacter *bob = new Character("Bob");
	std::cout << bob->getName() << std::endl;
	
	
	bob->equip(ice);
	bob->equip(cure);
	bob->use(0, *bob);
	bob->use(1, *bob);


	delete ice;
	delete cure;
	delete ice_clone;
	delete cure_clone;
	delete bob;

	return (0);
}


int default_main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	delete tmp;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}



int my_main()
{
	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());

	// TOO MANY LEARNED MATERIA
	src->learnMateria(new Ice()); 

	ICharacter* me = new Character("me");

	AMateria *tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete tmp;

	tmp = src->createMateria("cure");
	me->equip(tmp);
	delete tmp;

	tmp = src->createMateria("cure");
	me->equip(tmp); 
	me->equip(tmp); 

	delete tmp;
	

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	// UNKNOWN MATERIA INDEX
	me->use(4, *bob);
	
	me->unequip(0);
	me->unequip(0);
	me->unequip(0);
	me->unequip(0);

	// UNKNOWN MATERIA INDEX
	me->unequip(0);


	delete bob;
	delete me;
	delete src;
	return 0;
}



int main (void) 
{

	int (*f[3])(void) = {
		&amateria_test,
		&default_main,
		&my_main
	};

	for(int i = 0; i < 3; i++)
	{
		f[i]();
		std::cout << std::endl << std::endl;
	}


	return (0);
}
