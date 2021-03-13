#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad
{
private:
	typedef struct marines {
		ISpaceMarine 		*marine;
		struct marines	*next;
	}	marines;
	marines	*lst;
	int			cnt;
public:
	Squad();
	Squad(Squad *obj);
	~Squad();
	Squad & operator=(Squad const & obj);
	int getCount() const;
	ISpaceMarine* getUnit(int n) const;
	int push(ISpaceMarine* mar);
};

#endif