#pragma once
#include "c_Arrow.h"
struct Node {
	c_Arrow* arrow;
	Node* next;
};
class c_Quiver
{
private:
	Node* first;
	int countArrows;

	void add();
	void init();
		
public:
	c_Quiver();

	c_Arrow* takeArrow();

	bool notEmpty() {
		return this->countArrows > 0;
	}

	
};

