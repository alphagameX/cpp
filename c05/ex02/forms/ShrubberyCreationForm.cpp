
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("default", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name): Form(name, 145, 137)
{}

void ShrubberyCreationForm::execute(const Bureaucrat & rhs) 
{
	std::ofstream ofs;

	try
	{
		authorized(getExecGrade(), rhs);
		
		ofs = std::ofstream(getName() + "_shrubbery");

	}
	catch (std::exception & e)
	{
		std::cout << rhs.getName() << " cannot execute because the grade is too high" << std::endl;
	}
}
