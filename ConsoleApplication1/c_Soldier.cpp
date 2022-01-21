#include "c_Soldier.h"

c_Soldier::c_Soldier()
{
	this->health = 100 + rand() % 150;
	this->armor = 25 + rand() % 75;
	this->weapon = new c_Weapon();
}

void c_Soldier::takeDamage(int damage)
{
	if (this->armor-damage > 0) {
		this->armor -= damage;
	}
	else {
		this->armor = 0;
		damage -= this->armor;
		this->health -= damage;
	}
	
}

void c_Soldier::attack(c_Soldier& target)
{
	int damage = this->weapon->attack();
	target.takeDamage(damage);
}




