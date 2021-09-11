
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("default", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name): Form(name, 145, 137)
{}

ShrubberyCreationForm::~ShrubberyCreationForm(void) 
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src): Form(src)
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src) 
{
	if (this == &src)
		return (*this);
	Form *tmp = new ShrubberyCreationForm(src);
	return (static_cast<ShrubberyCreationForm &>(*tmp));
}

void ShrubberyCreationForm::execute(const Bureaucrat & executor) 
{

	try
	{
		authorized(getExecGrade(), executor);
		std::string name = getName() + "_shrubbery";
		std::ofstream ofs(name.c_str());

		ofs << "      /\\      " << std::endl;
		ofs << "     /\\*\\     " << std::endl;
		ofs << "    /\\O\\*\\    " << std::endl;
		ofs << "   /*/\\/\\/\\   " << std::endl;
		ofs << "  /\\O\\/\\*\\/\\  " << std::endl;
		ofs << " /\\*\\/\\*\\/\\/\\ " << std::endl;
		ofs << "/\\O\\/\\/*/\\/O/\\" << std::endl;
		ofs << "      ||      " << std::endl;
		ofs << "      ||      " << std::endl;


		executor.executeForm(*this);

	}
	catch (std::exception & e)
	{
		std::cerr << ERR << executor.getName() << " cannot execute because the grade is too high" << DEF << std::endl;
	}
}

std::ostream & operator<<(std::ostream &o, ShrubberyCreationForm const &src) 
{
	o << "Form name: " << src.getName() << " | signed: " << src.getSigned() << " | required sign grade: " << src.getSignGrade() << " | required exec grade: " << src.getExecGrade();
	return (o);
}
