#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{

	private:
		Brain *_brain;

	public:
		Dog(void);
		Dog(const Dog & rhs);
		virtual ~Dog(void);
		Dog & operator=(const Dog & rhs);

		virtual void	makeSound(void) const;
		void			setIdea(int i, std::string idea);
		Brain &			getBrain(void);
};
#endif // __DOG_H__