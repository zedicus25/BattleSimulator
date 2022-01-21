#include "c_Quiver.h"

c_Quiver::c_Quiver() {
	this->first = nullptr;
	this->countArrows = 1 + rand() % 15;
	this->init();
}

void c_Quiver::add() {
	Node* tmp = this->first;
	if (tmp == NULL) {
		tmp = new Node();
		tmp->arrow = new c_Arrow();
		tmp->next = nullptr;
		this->first = tmp;
	}
	else {
		while (tmp->next != nullptr) {
			tmp = tmp->next;
		}

		tmp->next = new Node();
		tmp->next->arrow = new c_Arrow();
		tmp->next->next = nullptr;
	}
}

void c_Quiver::init() {
	for (int i = 0; i < countArrows; i++) {
		this->add();
	}
}

c_Arrow* c_Quiver::takeArrow() {
	if (countArrows > 0) {
		c_Arrow* arr = this->first->arrow;
		this->first = this->first->next;
		this->countArrows--;
		return arr;
	}
	return nullptr;
}
