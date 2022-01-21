#include "c_Rider.h"

void c_Rider::attack(c_Soldier& target)
{
	if (this->horse->isAlive())
	{
		int damage = this->weapon->attack() + this->horse->getSpeed();
		target.takeDamage(damage);
	}
	else {
		target.takeDamage(this->weapon->attack());
	}
}
