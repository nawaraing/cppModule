#include "Data.hpp"
#include <iostream>

int		main(void)
{
	void * tmp = serialize();
	Data * data = deserialize(tmp);

	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "int: " << data->n << std::endl;
	std::cout << "s2: " << data->s2 << std::endl;
	delete(data);
}