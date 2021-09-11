#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include <iostream>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string name);
		virtual ~ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);

		ShrubberyCreationForm&		operator=(ShrubberyCreationForm const &src);

		virtual void execute(const Bureaucrat & executor);
};



std::ostream &		operator<<(std::ostream &o, ShrubberyCreationForm const &src);

#endif