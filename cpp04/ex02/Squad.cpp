#include "Squad.hpp"

Squad::Squad()
{
	lst = new marines;
	lst->marine = 0;
	lst->next = 0;
	cnt = 0;
}
Squad::Squad(Squad *obj)
{
	*this = obj;
}
Squad::~Squad()
{
	marines *cur = this->lst;
	while (cur->next)
	{
		marines *tmp = cur;
		cur = cur->next;
		delete tmp->marine;
		delete tmp;
	}
	delete cur->marine;
	delete cur;
}
Squad & Squad::operator=(Squad const & obj)
{
	this->cnt = obj.getCount();
	this->lst = new marines;
	this->lst->marine = 0;
	this->lst->next = 0;
	marines *cur = obj.lst;
	marines *cur2 = this->lst;
	while (cur->next)
	{
		cur2->next = new marines;
		cur2->next->marine = cur->next->marine->clone();
		cur2->next->next = 0;
		cur = cur->next;
	}
	return *this;
}
int Squad::getCount() const
{
	return this->cnt;
}
ISpaceMarine* Squad::getUnit(int n) const
{
	if (n > cnt) return 0;
	marines *cur = this->lst;
	while (cur->next)
	{
		cur = cur->next;
		if (!n) break ;
		n--;
	}
	return cur->marine;
}
int Squad::push(ISpaceMarine* mar)
{
	marines *cur = this->lst;
	if (mar == 0) return 0;
	while (cur->next)
	{
		cur = cur->next;
		if (mar == cur->marine)
			return 0;
	}
	cur->next = new marines;
	cur->next->marine = mar->clone();
	cur->next->next = 0;
	cnt++;
	return cnt;
}
