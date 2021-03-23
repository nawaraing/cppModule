#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <iostream>

Base * generate(void)
{
	int key = rand() % 3;
	if (key == 0)
	{
		std::cout << "generate A" << std::endl;
		return new A;
	}
	else if (key == 1)
	{
		std::cout << "generate B" << std::endl;
		return new B;
	}
	else
	{
		std::cout << "generate C" << std::endl;
		return new C;
	}
}
void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "this is A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "this is B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "this is C" << std::endl;
}
void identify_from_reference(Base & p)
{
	identify_from_pointer(&p);
}

int		main(void)
{

	srand(time(0));

	Base * one = generate();
	identify_from_pointer(one);
	identify_from_reference(*one);
	Base * two = generate();
	identify_from_pointer(two);
	identify_from_reference(*two);
	Base * three = generate();
	identify_from_pointer(three);
	identify_from_reference(*three);
	return 0;
}