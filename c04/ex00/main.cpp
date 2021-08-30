#include "Dog.hpp"
#include "Cat.hpp"

int main (void)
{

	const Animal * meta = new Animal();

	const Animal * d = new Dog();
	const Animal * c = new Cat();

	std::cout << meta->getType() << std::endl;
	std::cout << d->getType() << std::endl;
	std::cout << c->getType() << std::endl;

	meta->makeSound();
	d->makeSound();
	c->makeSound();

	return (0);
}