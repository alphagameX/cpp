
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("random guys"), _grade(MAX) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade > MAX)
		throw Bureaucrat::GradeTooHighException();
	else if (grade < MIN)
		throw Bureaucrat::GradeTooLowException(); 
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & rhs) 
{
	*this = rhs;
}

Bureaucrat::~Bureaucrat(void) 
{
	// std::cout << "Destructor" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & rhs) 
{
	if (this == &rhs)
		return (*this);
	Bureaucrat *tmp = new Bureaucrat(rhs);
	return (*tmp);
}

std::string Bureaucrat::getName(void) const
{
	return (_name);
}

int Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void Bureaucrat::signForm(const Form & rhs) const
{
	if (rhs.getSigned())
	{
		std::string contractName = rhs.getName(*this);
		std::cout << _name << " signs " << contractName << std::endl;
	}
	else
		std::cout << "This forms is not signed..." << std::endl;
}

void Bureaucrat::executeForm(const Form & rhs) const
{
	std::cout << _name << " execute " << rhs.getName() << std::endl;
}

void Bureaucrat::inc(void) 
{
	if (_grade + 1 > MAX)
		throw Bureaucrat::GradeTooHighException();
	_grade++;
}

void Bureaucrat::dec(void) 
{
	if (_grade - 1 < MIN)
		throw Bureaucrat::GradeTooLowException();
	_grade--;
}

std::ostream & operator<<(std::ostream & flux, const Bureaucrat & rhs)
{
	flux << "name : " << rhs.getName() << " | grade : " << rhs.getGrade();
	return flux;
}
std::ostream & operator<<(std::ostream & flux, const Bureaucrat * rhs)
{
	flux << "name : " << rhs->getName() << " | grade : " << rhs->getGrade();
	return flux;
}

