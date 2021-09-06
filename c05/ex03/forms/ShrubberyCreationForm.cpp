
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("default", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name): Form(name, 145, 137)
{}

void ShrubberyCreationForm::execute(const Bureaucrat & rhs) 
{

	try
	{
		authorized(getExecGrade(), rhs);
		
		std::ofstream ofs(getName() + "_shrubbery");

		ofs << "      /\\      " << std::endl;
		ofs << "     /\\*\\     " << std::endl;
		ofs << "    /\\O\\*\\    " << std::endl;
		ofs << "   /*/\\/\\/\\   " << std::endl;
		ofs << "  /\\O\\/\\*\\/\\  " << std::endl;
		ofs << " /\\*\\/\\*\\/\\/\\ " << std::endl;
		ofs << "/\\O\\/\\/*/\\/O/\\" << std::endl;
		ofs << "      ||      " << std::endl;
		ofs << "      ||      " << std::endl;


		rhs.executeForm(*this);

	}
	catch (std::exception & e)
	{
		std::cerr << ERR << rhs.getName() << " cannot execute because the grade is too high" << DEF << std::endl;
	}
}
