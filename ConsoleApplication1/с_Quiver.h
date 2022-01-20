#pragma once
#include "c_Arrow.h"
struct Node {
    c_Arrow* arrow;
    Node* next;
	Node(){
		arrow = new c_Arrow();
		next = nullptr;
	}
	Node(Node* node) {
		next = NULL;
		arrow = node->arrow;
	}
};
class ñ_Quiver
{
private:
	Node* first;
	int countArrows;
public:
	void add(c_Arrow& arr) {
		if (this->first == NULL) {
			this->first = new Node();
		}
		else {
			Node* tmp = this->first;
			while (tmp->next != nullptr) {
				tmp = tmp->next;
			}
			tmp->arrow = &arr;
			delete[] tmp;
		}
	}

	void init() {
		for (int i = 0; i < countArrows; i++)
		{
			c_Arrow* arr = new c_Arrow();
			this->add(*arr);
			delete[] arr;
		}
	}

	ñ_Quiver()
	{
		this->first = NULL;
		this->countArrows = 10 + rand() % 15;
		this->init();
	}

	
};

