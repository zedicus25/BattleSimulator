#include "c_Squad.h"

void c_Squad::add()
{
	int id = 1 + rand() % 3;
	NodeSq* tmp = this->first;
	if (tmp == nullptr) {
		tmp = new NodeSq();
		switch (id)
		{
		case 1:
			tmp->soldier = new c_SwordMan();
			break;
		case 2:
			tmp->soldier = new c_BowMan();
			break;
		case 3:
			tmp->soldier = new c_Rider();
			break;
		}
		tmp->next = nullptr;
		this->first = tmp;
	}
	else {
		while (tmp->next != nullptr) {
			tmp = tmp->next;
		}

		tmp->next = new NodeSq();
		switch (id)
		{
		case 1:
			tmp->next->soldier = new c_SwordMan();
			break;
		case 2:
			tmp->next->soldier = new c_BowMan();
			break;
		case 3:
			tmp->next->soldier = new c_Rider();
			break;
		default:
			tmp->next->soldier = new c_Soldier();
		}
		tmp->next->next = nullptr;
	}
}

void c_Squad::init()
{
	for (int i = 0; i < this->countInSquad; i++)
	{
		this->add();
	}
}

c_Squad::c_Squad()
{
	this->countInSquad = 5 + rand() % 15;
	this->first = nullptr;
	this->init();
}

c_Squad::c_Squad(int countInSquad)
{
	this->countInSquad = countInSquad;
	this->first = nullptr;
	this->init();
}

c_Soldier* c_Squad::takeSoldier()
{
	if (this->first == nullptr) {
		return nullptr;
	}
	c_Soldier* tmp = this->first->soldier;
	if (tmp && tmp->isAlive()) {
		return tmp;
	}
	else if (tmp && tmp->isAlive() == false ) {
		this->first = this->first->next;
		if (this->first == nullptr) {
			this->countInSquad--;
			return nullptr;
		}
		tmp = this->first->soldier;
		this->countInSquad--;
		return tmp;
	}

	return nullptr;
}
