
#include "Base.hpp"

Base::~Base(void) {}

unsigned int hash3(void)
{
	struct timeval t;
	gettimeofday(&t, NULL);
	return (((t.tv_sec * 2654435789U) + (t.tv_usec * 2654435789U)) + getpid());
}

Base* generate(void) 
{
	int gen;
	BaseMaker *makers [3] = {
		make<A>, make<B>, make<C>
	};
	std::srand(hash3());
	gen = std::rand() % 3;
	if (gen == 0)
		std::cout << "generate an A" << std::endl;
	else if (gen == 1)
		std::cout << "generate an B" << std::endl;
	else if (gen == 2)
		std::cout << "generate an C" << std::endl;
	return (makers[gen]());
}

std::string isA(Base *p)
{
	Base * tmp = dynamic_cast<A *>(p);
	if (!tmp)
		throw std::bad_cast();
	return ("is A" );
}

std::string isB(Base *p)
{
	Base * tmp = dynamic_cast<B *>(p);
	if (!tmp)
		throw std::bad_cast();
	return ("is B");
}

std::string isC(Base *p)
{
	Base * tmp = dynamic_cast<C *>(p);
	if (!tmp)
		throw std::bad_cast();
	return ("is C");
}

void identify(Base *p) 
{
	int i = 0;
	std::string (*f[3])(Base *p) = {
		isA, isB, isC
	};

	while (i < 3)
	{
		try
		{
			std::string res = f[i](p);
			std::cout << "Real type " << res << std::endl;
			return;
		}
		catch (std::bad_cast & e)
		{
			i++;
		}
	}
	std::cerr << "Real type not found.." << std::endl;
}

void identify(Base &p) 
{
	try
	{
		Base &a = dynamic_cast<A&>(p);
		std::cout << "Real type is A" << std::endl;
	}
	catch (std::bad_cast & e)
	{
		try
		{
			Base &b = dynamic_cast<B&>(p);
			std::cout << "Real type is B" << std::endl;
		}
		catch (std::bad_cast & e)
		{
			try
			{
				Base &c = dynamic_cast<C&>(p);
				std::cout << "Real type is C" << std::endl;
			}
			catch (std::bad_cast & e)
			{
				std::cerr << "Real type not found.." << std::endl;
			}
		}
	}
}


