#pragma once
#include "c_BowMan.h"
#include "c_Rider.h"
#include "c_SwordMan.h"
struct NodeSq {
	c_Soldier* soldier;
	NodeSq* next;
};
class c_Squad
{
private:
	NodeSq* first;
	int countInSquad;

	void add();
	void init();
	int getCount() {
		return this->countInSquad;
	}
public:
	c_Squad();
	c_Squad(int countInSquad);
	inline bool notEmpty() const {
		return this->countInSquad > 0;
	}

	c_Soldier* takeSoldier();
};

