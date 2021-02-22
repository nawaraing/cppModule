#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string		name;
	std::string		type;
public:
	void	announce(void);
	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();
};

#endif