#include "sed.hpp"

int			sed(std::string filename, std::string s1, std::string s2)
{
	std::ifstream			readFile;
	std::ofstream			writeFile;
	std::string				line;
	std::string::size_type	idx;

	readFile.open(filename.c_str());
	if (readFile.is_open() == false)
	{
		std::cout << "Open error\n";
		return (-1);
	}
	writeFile.open(filename + ".replace");
	if (writeFile.is_open() == false)
	{
		std::cout << "Open error\n";
		readFile.close();
		return (-1);
	}
	while (std::getline(readFile, line))
	{
		while ((idx = line.find(s1)) != std::string::npos)
		{
			line.replace(idx, s1.length(), s2);
		}
		writeFile << line << "\n";
	}
	readFile.close();
	writeFile.close();
	return 1;
}