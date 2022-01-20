#pragma once
#include "c_Weapon.h"
#include <iostream>
class c_Arrow : public c_Weapon
{
private:
	int lenght;
	
public:
	c_Arrow() : c_Weapon()
	{
		this->lenght = 1 + rand() % 2;
	}
	c_Arrow(int damage, int lenght, int numberOfUses) : c_Weapon(damage, 1) {
		this->lenght = lenght;
	}

	virtual int attack();
		
	
	
};

