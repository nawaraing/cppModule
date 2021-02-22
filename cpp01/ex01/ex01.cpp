#include <string>
#include <iostream>

void memoryLeak()
{
	std::string* panther = new std::string("String panther");

	std::cout << *panther << std::endl;
	delete(panther);
}

int		main(void)
{
	memoryLeak();
	// while (1) NULL;
	return (0);
}