#pragma once
#include "c_Squad.h"
class c_Fight
{
private:
	c_Squad* squadOne;
	c_Squad* squadTwo;
public:
	c_Fight();
	c_Fight(std::string name1, std::string name2);

	void fight();
	
};

