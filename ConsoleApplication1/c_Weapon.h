#pragma once
#include <iostream>
class c_Weapon
{
protected:
	int damage;
	int numbersOfUses;
	c_Weapon();
public:
	c_Weapon(int damage, int numbersOfUses);

	inline int getDamage() const {
		return this->damage;
	}

	virtual int attack();
		
	inline bool canUse() const {
		return this->numbersOfUses > 0;
	}
};

