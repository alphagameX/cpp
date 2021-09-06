
#include "Intern.hpp"

Intern::Intern(void) {}

Intern::~Intern(void) {}

Intern::Intern(Intern const &src) {}

typedef Form* FormMaker(std::string name);

template <class X> Form* make(std::string name)
{
	return new X(name);
}

Form* Intern::makeForm(std::string request, std::string target) 
{
	FormMaker* makers[3] = {
		make<ShrubberyCreationForm>,
		make<RobotomyRequestForm>,
		make<PresidentialPardonForm>
	};

	std::string db [3] = {
		"shrubbery request",
		"robotomy request",
		"presidentialPardon request"
	};

	for(int i = 0; i < 3; i++)
	{
		if (db[i] == request)
		{
			Form *tmp = makers[i](target);
			std::cout << "Intern creates " << tmp->getName() << std::endl;
			return (tmp);
		}
	}
	std::cerr << ERR << "Unknown contract, please make coffee !" << DEF << std::endl;
	return (NULL);
}

Intern& Intern::operator=(Intern const &src)
{
	return (*this);
}

std::ostream & operator<<(std::ostream &o, Intern const &src)
{
	o << "Im currently nothing...";
	return (o);
}
