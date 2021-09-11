
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("default", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name): Form(name, 145, 137)
{}

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
