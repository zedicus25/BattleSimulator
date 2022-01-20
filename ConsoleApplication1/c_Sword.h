#pragma once
#include "c_Weapon.h"
class c_Sword : public c_Weapon
{
private:
	int coef;
	c_Sword() : c_Weapon() {
		this->coef = 0;
	}
public:
	
	c_Sword(int damage, int coef, int numberOfUses) : c_Weapon(damage, numberOfUses) {
		this->coef = coef;
	}

	inline int block(int damage) {
        if(this->canUse())
			return damage / this->coef;
		return 1;
	}
};

