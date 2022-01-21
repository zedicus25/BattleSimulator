#include "c_Weapon.h"

c_Weapon::c_Weapon()
{
	this->damage = 5 + rand() % 15;
	this->numbersOfUses = 10 + rand() % 25;
}

c_Weapon::c_Weapon(int damage, int numbersOfUse)
{
	this->numbersOfUses = numbersOfUse;
	this->damage = damage;
}

int c_Weapon::attack()
{
	if (this->canUse()) {
		this->numbersOfUses--;
		return this->damage;
	}
	return 1;
}
