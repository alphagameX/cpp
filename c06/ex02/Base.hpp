
#include <iostream>
#include <sys/time.h>
#include <unistd.h>

class Base
{
	public:
		virtual ~Base(void);
};

class A: public Base
{};

class B: public Base
{};

class C: public Base
{};

typedef Base* BaseMaker(void);

template <class X> Base* make(void)
{
	return new X;
}

Base *generate(void);
void identify(Base *p);
void identify(Base &p);