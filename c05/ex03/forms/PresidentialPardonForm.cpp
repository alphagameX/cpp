
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("default", 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(std::string name): Form(name, 25, 5)
{}

void PresidentialPardonForm::execute(const Bureaucrat & rhs) 
{

	try
	{
		authorized(getExecGrade(), rhs);
		
		std::cout << rhs.getName() << " was forgiven by " << getName() << std::endl;

		rhs.executeForm(*this);
	}
	catch (std::exception & e)
	{
		std::cerr  << ERR << rhs.getName() << " cannot execute because the grade is too high" << DEF << std::endl;
	}
}
