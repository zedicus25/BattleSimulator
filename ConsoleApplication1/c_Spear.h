#pragma once
#include "c_Weapon.h"
class c_Spear : public c_Weapon
{
private:
	int shaft;
	
public:
	c_Spear() : c_Weapon()
	{
		this->shaft = 1+rand()%2+1;
	}

	virtual int attack();
		
};

