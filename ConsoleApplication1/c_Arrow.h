#pragma once
#include "c_Weapon.h"
class c_Arrow : public c_Weapon
{
private:
	int lenght;
public:
	c_Arrow() : c_Weapon()
	{
		this->lenght = 1 + rand() % 2;
	}

	virtual int attack();
};

