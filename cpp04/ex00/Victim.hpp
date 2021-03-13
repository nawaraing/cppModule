#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
protected:
	std::string		name;
public:
	std::string		getName(void);
	void			setName(std::string name);
	virtual void	getPolymorphed() const;
	Victim(std::string name);
	Victim(Victim &obj);
	~Victim();
	Victim &operator=(Victim &obj);
};
std::ostream &operator<<(std::ostream &out, Victim &obj);

#endif