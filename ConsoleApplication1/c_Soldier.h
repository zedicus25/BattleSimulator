#pragma once
#include"c_Weapon.h"
class c_Soldier
{
protected :
	int health;
	int armor;
	c_Weapon* weapon;
	std::string name;
public:
	c_Soldier();

	void takeDamage(int damage);
	virtual int attack(c_Soldier& target);

	inline bool isAlive() const {
		return this->health > 0;
	}

	inline std::string getName() const {
		return this->name;
	}

	
};

