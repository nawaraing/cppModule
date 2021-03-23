#include "Converter.hpp"
#include <iostream>

int		main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "I want only one input\n";
		return 1;
	}
	Converter	conv(argv[1]);
	conv.toChar();
	conv.toInt();
	conv.toFloat();
	conv.toDouble();
}