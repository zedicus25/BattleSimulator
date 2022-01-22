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
	std::string name;

	void add();
	void init();
	int getCount() {
		return this->countInSquad;
	}
public:
	c_Squad();
	c_Squad(int countInSquad);
	c_Squad(std::string name);
	c_Squad(int countInSquad, std::string name);
	
	inline bool notEmpty() const {
		return this->countInSquad > 0;
	}
	void setName(std::string name) {
		this->name = name;
	}
	inline std::string getName() const {
		return this->name;
	}
	c_Soldier* takeSoldier();
};

