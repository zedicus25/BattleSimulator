#include "c_Spear.h"

int c_Spear::attack()
{
	if (this->canUse()) {
		this->numbersOfUses--;
		return this->damage * this->shaft;
	}
	return 5 + rand() % 5+3;
}
