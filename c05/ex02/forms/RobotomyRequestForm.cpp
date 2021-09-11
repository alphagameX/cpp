
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("default", 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(std::string name): Form(name, 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src): Form(src)
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &src) 
{
	if (this == &src)
		return (*this);
	Form *tmp = new RobotomyRequestForm(src);
	return (static_cast<RobotomyRequestForm &>(*tmp));
}

void RobotomyRequestForm::execute(const Bureaucrat & executor) 
{

	try
	{
		authorized(getExecGrade(), executor);
		
		std::cout << "viiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii" << std::endl;
		std::cout << "AHHHHHHHHAHHHHHHHAHHAHAHHAHHHHHH HELP ME !!!!" << std::endl;

		srand (time(NULL));
		if (rand() % 2)
			executor.executeForm(*this);
		else
			std::cout << "Thank i'm save..." << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << ERR << executor.getName() << " cannot execute because the grade is too high" << DEF << std::endl;
	}
}

std::ostream & operator<<(std::ostream &o, RobotomyRequestForm const &src) 
{
	o << "Form name: " << src.getName() << " | signed: " << src.getSigned() << " | required sign grade: " << src.getSignGrade() << " | required exec grade: " << src.getExecGrade();
	return (o);
}
