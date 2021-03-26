#include "Array.hpp"
#include <iostream>

int			main(void)
{
	Array<int>		a;
	Array<int>		b(10);

	try {
		std::cout << "a size: " << a.size() << std::endl;	
		std::cout << a[0] << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "b size: " << b.size() << std::endl;
	for (unsigned int i = 0; i < b.size(); i++)
		b[i] = i;
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;
	return 0;
}