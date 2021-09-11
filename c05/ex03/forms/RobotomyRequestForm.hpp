#ifndef RobotomyRequestForm_H
# define RobotomyRequestForm_H

# include <iostream>
# include <fstream>
# include <cstdlib>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string name);
		virtual ~RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm const &src);

		RobotomyRequestForm&		operator=(RobotomyRequestForm const &src);

		virtual void execute(const Bureaucrat & executor);
};



std::ostream &		operator<<(std::ostream &o, RobotomyRequestForm const &src);

#endif