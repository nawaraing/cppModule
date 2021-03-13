#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
{
	this->hp = hp;
	this->type = type;
}
Enemy::Enemy(Enemy const &obj)
{
	*this = obj;
}
Enemy::~Enemy()
{

}
std::string const Enemy::getType() const
{
	return this->type;
}
int Enemy::getHP() const
{
	return this->hp;
}
void Enemy::takeDamage(int dmg)
{
	if (this->getHP() >= dmg)
		this->hp -= dmg;
	else
		this->hp = 0;
}
Enemy const & Enemy::operator=(Enemy const &obj)
{
	this->hp = obj.hp;
	this->type = obj.type;
	return *this;
}