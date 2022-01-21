#pragma once
#include "c_Quiver.h"
class c_Bow : public c_Weapon
{
private:
	int coef;
	c_Quiver* quiver;
public:
	c_Bow() : c_Weapon()
	{
		this->coef = 2 + rand() % 5;
		this->quiver = new c_Quiver();
	}
	explicit c_Bow(int damage, int numberOfUses, int coef) : c_Weapon(damage, numberOfUses) {
		this->coef = coef;
		this->quiver = new c_Quiver();
	}

	virtual int attack();

	c_Quiver* getQuiver() {
		return this->quiver;
	}

	
};

