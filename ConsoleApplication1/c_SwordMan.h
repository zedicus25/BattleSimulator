#pragma once
#include "c_Soldier.h"
#include "c_Sword.h"
class c_SwordMan : public c_Soldier
{
public:
	c_SwordMan() : c_Soldier()
	{
		this->weapon = new c_Sword();
		this->name = "SwordMan";
	}
};

