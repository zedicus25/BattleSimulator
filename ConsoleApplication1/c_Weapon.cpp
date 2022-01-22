#include "c_Weapon.h"

c_Weapon::c_Weapon()
{
	this->damage = 10 + rand() % 10+20;
	this->numbersOfUses = 10 + rand() % 10+10;
}


int c_Weapon::attack()
{
	if (this->canUse()) {
		this->numbersOfUses--;
		return this->damage;
	}
	return 5+rand()%5+5;
}
