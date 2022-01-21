#pragma once
#include"c_Weapon.h"
class c_Soldier
{
protected :
	int health;
	int armor;
	c_Weapon* weapon;
public:
	c_Soldier();

	void takeDamage(int damage);
	virtual void attack(c_Soldier& target);

	inline bool isAlive() const {
		return this->health > 0;
	}
};

