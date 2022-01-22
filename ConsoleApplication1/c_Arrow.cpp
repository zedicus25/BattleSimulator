#include "c_Arrow.h"

int c_Arrow::attack()
{
	if (this->canUse()) {
		this->numbersOfUses--;
		return this->damage * this->lenght;
	}
	return 1 + rand() % 1+3;
}
