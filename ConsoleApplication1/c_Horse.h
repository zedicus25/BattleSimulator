#pragma once
class c_Horse
{
private:
	int health;
public:
	c_Horse()
	{
		this->health = 100;
	}
	inline bool isAlive() const {
		return this->health > 0;
	}
};

