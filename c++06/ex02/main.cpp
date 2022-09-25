#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	srand(time(0));
	int number = rand() % 3;

	if (number == 0)
	{
		A *a = new A;
		return (a);
	}
	else if (number == 1)
	{
		B *b = new B;
		return (b);
	}
	else
	{
		C *c = new C;
		return (c);
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::bad_cast &x) {}

	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::bad_cast &x) {}

	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (std::bad_cast &x)
	{
		std::cout << "Unknown type" << std::endl;
	}
}

int	main()
{
	std::cout << "-----POINTER-----" << std::endl;
	Base *type;
	type = generate();
	identify(type);

	std::cout << "-----REFERENCE-----" << std::endl;
	Base &ref = *type;
	identify(ref);

	delete (type);
}
