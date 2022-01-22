#pragma once
#include "c_Soldier.h"
#include "c_Bow.h"
class c_BowMan : public c_Soldier
{
public:
	c_BowMan() : c_Soldier()
	{
		this->weapon = new c_Bow();
		this->name = "BowMan";
	}
};

