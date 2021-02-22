#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>

class Pony
{
private:
	std::string		name;
public:
	Pony(std::string name)
	{
		this->name = name;
	}
	std::string		getName(void);
};
void	ponyOnTheHeap(void);
void	ponyOnTheStack(void);

#endif