
#include "forms/ShrubberyCreationForm.hpp"
#include "forms/RobotomyRequestForm.hpp"
#include "forms/PresidentialPardonForm.hpp"

#include "Intern.hpp"


Bureaucrat *create_bureaucrat(std::string name, int grade)
{
	Bureaucrat *client = NULL;
	try
	{
		client = new Bureaucrat(name, grade);
	}
	catch(const std::exception& e)
	{
		std::cerr << ERR << e.what() << DEF << std::endl;
	}
	return (client);
}

int default_main (void)
{
	Bureaucrat *bill;
	try 
	{
		bill = new Bureaucrat();
	}
	catch (std::exception & e)
	{
		std::cerr << ERR << e.what() << DEF << std::endl;
	}
	std::cout << bill << std::endl;
	Bureaucrat *client = NULL;
	try 
	{
		client = new Bureaucrat("client", 155);
	}
	catch (std::exception & e)
	{
		std::cerr << ERR << e.what() << DEF << std::endl;
	}
	if (client)
		std::cout << client << std::endl;
	try
	{
		client = new Bureaucrat("client", -2);
	}
	catch(const std::exception& e)
	{
		std::cerr <<  ERR << e.what() << DEF << std::endl;
	}
	if (client)
		std::cout << client << std::endl;

	delete bill;

	return (0);
}


int main(void)
{
	default_main();
	std::cout << std::endl << std::endl << std::endl;

	/////////////////////////////////////////////////

	Intern *randomGuys = new Intern();

	randomGuys->makeForm("elon contracts", "Be friend with elon");
	
	
	Form *shrubbery = new ShrubberyCreationForm("Buy apple"); // sign 145 exec 137
	Form *robotomy = randomGuys->makeForm("robotomy request", "terminate sarah connor"); // sign 72 exec 45
	Form *presidential = new PresidentialPardonForm("So sorry guys"); // sign 25 exec 5
 
	Bureaucrat *admin = create_bureaucrat("admin", 1);
	Bureaucrat *client = create_bureaucrat("client", 73);
	Bureaucrat *sarah = create_bureaucrat("sarah connors", 145);

	std::cout << "Available contracts:" << std::endl;
	std::cout << *shrubbery << std::endl;
	std::cout << *robotomy << std::endl;
	std::cout << *presidential << std::endl;

	std::cout << "Available bureaucrats:" << std::endl;
	std::cout << admin << std::endl;
	std::cout << client << std::endl;
	std::cout << sarah << std::endl;

	
	Bureaucrat *bureaucrats [3] = {
		admin,
		client,
		sarah
	};

	Form *contracts [3] = {
		shrubbery,
		robotomy,
		presidential
	};

	std::cout << std::endl;
	std::cout << "Try getName of all contracts..." << std::endl;

	for (int i = 0; i < 3; i++)
	{
		std::cout << i << " - Contract: " << contracts[i]->getName() << std::endl;
		for (int e = 0; e < 3; e++)
		{
			std::cout << "#############" << std::endl;
			std::string contractName = contracts[i]->getName(*bureaucrats[e]);
			std::cout << contractName << std::endl;
		}
		std::cout << std::endl;
	}


	std::cout << "Try sign all contracts..." << std::endl;

	for (int i = 0; i < 3; i++)
	{
		std::cout << i << " - Contract: " << contracts[i]->getName() << std::endl ;
		for (int e = 0; e < 3; e++)
		{
			std::cout << "#############" << std::endl;
			contracts[i]->beSigned(*bureaucrats[e]);
		}
		std::cout << std::endl;
	}

	delete shrubbery;
	delete client;
	delete admin;
	delete robotomy;
	delete sarah;
	delete presidential;
	delete randomGuys;

	return (0);
}