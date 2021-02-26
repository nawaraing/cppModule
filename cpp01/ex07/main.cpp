#include "sed.hpp"

int		main(int argc, char *argv[])
{
	if (argc != 4)
		return 1;
	std::string		filename = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	if (sed(filename, s1, s2) == -1)
		return 1;
	return 0;
}