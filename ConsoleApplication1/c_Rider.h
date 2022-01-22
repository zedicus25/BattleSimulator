#pragma once
#include "c_Soldier.h"
#include "c_Spear.h"
#include "c_Horse.h"
class c_Rider : public c_Soldier
{
private: 
	c_Horse* horse;
public:
	c_Rider() : c_Soldier()
	{
		this->weapon = new c_Spear();
		this->horse = new c_Horse();
		this->name = "Rider";
	}

	virtual int attack(c_Soldier& target, c_Horse& targetHorse);
	
};

