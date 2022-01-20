#pragma once
#include "c_Weapon.h"
class c_Spear : public c_Weapon
{
private:
	int shaft;
	c_Spear() : c_Weapon()
	{
		this->shaft = 0;
	}
public:
	
	c_Spear(int damage, int shaft, int numbersOfUses) : c_Weapon(damage, numbersOfUses) {
		this->shaft = shaft;
	}

	virtual int attack();
		
};

