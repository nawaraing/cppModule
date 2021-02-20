#include <iostream>

int		main(int argc, char *argv[])
{
	char	*str;
	char	*tmp;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	for (int i = 1; i < argc; i++)
	{
		str = argv[i];
		tmp = str;
		while (*str)
		{
			if (*str >= 'a' && *str <= 'z')
				*str = *str - 'a' + 'A';
			str++;
		}
		std::cout << tmp;
		if (i == argc - 1)
			std::cout << "\n";
		else
			std::cout << " ";
	}
	return (0);
}