#pragma once
#include "c_Weapon.h"
class c_Spear : public c_Weapon
{
private:
	int shaft;
	
public:
	c_Spear() : c_Weapon()
	{
		this->shaft = 1+rand()%2;
	}

	explicit c_Spear(int damage, int shaft, int numbersOfUses) : c_Weapon(damage, numbersOfUses) {
		this->shaft = shaft;
	}

	virtual int attack();
		
};

