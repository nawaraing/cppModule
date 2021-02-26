#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <ctime>

class Zombie
{
private:
	std::string		name;
	std::string		type;
public:
	void	announce(void);
	void	set_name(std::string name);
	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();
};

#endif