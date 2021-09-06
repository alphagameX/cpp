
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("default", 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(std::string name): Form(name, 72, 45)
{}

void RobotomyRequestForm::execute(const Bureaucrat & rhs) 
{

	try
	{
		authorized(getExecGrade(), rhs);
		
		std::cout << "viiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii" << std::endl;
		std::cout << "AHHHHHHHHAHHHHHHHAHHAHAHHAHHHHHH HELP ME !!!!" << std::endl;

		srand (time(NULL));
		if (rand() % 2)
			rhs.executeForm(*this);
		else
			std::cout << "Thank i'm save..." << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << ERR << rhs.getName() << " cannot execute because the grade is too high" << DEF << std::endl;
	}
}
