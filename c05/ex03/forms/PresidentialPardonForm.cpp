
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("default", 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(std::string name): Form(name, 25, 5)
{}

PresidentialPardonForm::~PresidentialPardonForm(void) 
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src): Form(src)
{}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &src) 
{
	if (this == &src)
		return (*this);
	Form *tmp = new PresidentialPardonForm(src);
	return (static_cast<PresidentialPardonForm &>(*tmp));
}

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

std::ostream & operator<<(std::ostream &o, PresidentialPardonForm const &src) 
{
	o << "Form name: " << src.getName() << " | signed: " << src.getSigned() << " | required sign grade: " << src.getSignGrade() << " | required exec grade: " << src.getExecGrade();
	return (o);
}
