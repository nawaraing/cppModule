#include "phonebook.hpp"

int		main(void)
{
	Phonebook		book[8];
	std::string		line;
	int				idx = 0;

	while (1)
	{
		std::cout << "PhoneBook>";
		std::getline(std::cin, line);
		if (line == "EXIT")
			exit(0);
		else if (line == "ADD")
		{
			if (idx == 8)
				std::cout << "The phonebook is FULL\n";
			else
				commandAdd(&(book[idx++]));
		}
		else if (line == "SEARCH")
		{
			if (idx == 0)
				std::cout << "There is NO entry\n";
			else
			{
				printHead();
				for (int i = 0; i < idx; i++)
					printBook(book[i], i);
				printTail();
				getAndPrintEntry(book, idx);
			}
		}
		else
			std::cout << "It is NOT correct command\n";
	}
	return 0;
}