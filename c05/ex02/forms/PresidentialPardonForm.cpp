
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("default", 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(std::string name): Form(name, 25, 5)
{}

void PresidentialPardonForm::execute(const Bureaucrat & executor) 
{

	try
	{
		authorized(getExecGrade(), executor);
		
		std::cout << executor.getName() << " was forgiven by " << getName() << std::endl;

		executor.executeForm(*this);
	}
	catch (std::exception & e)
	{
		std::cerr  << ERR << executor.getName() << " cannot execute because the grade is too high" << DEF << std::endl;
	}
}
