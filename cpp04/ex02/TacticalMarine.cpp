#include "TacticalMarine.hpp"

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh...\n";
}
TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!\n";
}
TacticalMarine::TacticalMarine(TacticalMarine const & obj)
{
	// std::cout << "Tactical Marine ready for battle!\n";
	*this = obj;
}
TacticalMarine & TacticalMarine::operator=(TacticalMarine const & obj)
{
	if (this == &obj)
		return *this;
	return *this;
}
TacticalMarine* TacticalMarine::clone() const
{
	return new TacticalMarine(*this);
}
void TacticalMarine::battleCry() const
{
	std::cout <<  "For the holy PLOT!\n";
}
void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *\n";
}
void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *\n";
}
