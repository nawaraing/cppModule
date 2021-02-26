#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
private:
	std::string			type;
public:
	std::string const	&getType();
	void				setType(std::string type);
	Weapon();
	Weapon(std::string type);
	~Weapon();
};

#endif