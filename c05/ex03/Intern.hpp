#ifndef INTERN_H
# define INTERN_H

# include <iostream>
# include "forms/RobotomyRequestForm.hpp"
# include "forms/PresidentialPardonForm.hpp"
# include "forms/ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern(void);
		~Intern(void);
		Intern(Intern const &src);

		Form *makeForm(std::string request, std::string target);

		Intern&		operator=(Intern const &src);
};

std::ostream &		operator<<(std::ostream &o, Intern const &src);

#endif