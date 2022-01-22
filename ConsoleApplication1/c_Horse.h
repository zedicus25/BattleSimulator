#pragma once
#include <iostream>
class c_Horse
{
private:
	int health;
	int speed;
public:
	c_Horse()
	{
		this->health = 100;
		this->speed = 5 + rand() % 10;
	}
	inline bool isAlive() const {
		return this->health > 0;
	}
	inline int getSpeed() const {
		return this->speed;
	}
	void takeDamage(int damage) {
		this->health -= damage;
	}
};

