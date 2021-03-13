#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>

class Enemy
{
private:
	int				hp;
	std::string		type;
public:
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const &obj);
	virtual ~Enemy();
	std::string const getType() const;
	int getHP() const;
	virtual void takeDamage(int);
	Enemy const & operator=(Enemy const &obj);
};

#endif