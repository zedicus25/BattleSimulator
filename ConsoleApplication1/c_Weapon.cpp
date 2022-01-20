#include "c_Weapon.h"

c_Weapon::c_Weapon()
{
	this->damage = 0;
	this->numbersOfUses = 0;
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
