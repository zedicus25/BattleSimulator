#pragma once
#include <iostream>
class c_Weapon
{
protected:
	int damage;
	int numbersOfUses;
public:
	c_Weapon();

	c_Weapon(int damage, int numbersOfUses);

	inline int getDamage() const {
		return this->damage;
	}

	virtual int attack();
		
	inline bool canUse() const {
		return this->numbersOfUses > 0;
	}
};

