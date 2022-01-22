#include "c_Rider.h"

int c_Rider::attack(c_Soldier& target, c_Horse& targetHorse)
{
	if (this->horse->isAlive())
	{
		int damage = this->weapon->attack() + this->horse->getSpeed();
		if(targetHorse.isAlive())
			targetHorse.takeDamage(damage);
		else
			target.takeDamage(damage);
		return damage;
	}
	else {
		target.takeDamage(this->weapon->attack());
		return this->weapon->attack();
	}
}
