#pragma once
#include "c_Weapon.h"
class c_Sword : public c_Weapon
{
private:
	int coef;
	
public:
	c_Sword() : c_Weapon() {
		this->coef = 1+rand()%5+3;
	}
};

