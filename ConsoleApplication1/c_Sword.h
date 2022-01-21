#pragma once
#include "c_Weapon.h"
class c_Sword : public c_Weapon
{
private:
	int coef;
	
public:
	c_Sword() : c_Weapon() {
		this->coef = 1+rand()%3;
	}
	explicit c_Sword(int damage, int coef, int numberOfUses) : c_Weapon(damage, numberOfUses) {
		this->coef = coef;
	}

};

