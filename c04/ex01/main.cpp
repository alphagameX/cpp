#include "Dog.hpp"
#include "Cat.hpp"

#define COUNT 10 

int main (void)
{
	Animal *zoo[COUNT];

	for(int i = 0; i < COUNT; i++)
	{
		if (i < COUNT / 2)
			zoo[i] = new Cat();
		else
			zoo[i] = new Dog();
	}

	Dog *a = new Dog();
	Dog *b = new Dog();

	b->setIdea(0, "nouvelle idée");
	*a = *b;

	std::cout << &a->getBrain() << " " << a->getBrain()[0] << std::endl;
	std::cout << &b->getBrain() << " " << b->getBrain()[0] << std::endl;

	for(int i = 0; i < COUNT; i++)
		delete zoo[i];

	delete a;
	delete b;

	return (0);
}