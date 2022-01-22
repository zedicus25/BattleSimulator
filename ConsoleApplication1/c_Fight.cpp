#include "c_Fight.h"

c_Fight::c_Fight()
{
	this->squadOne = new c_Squad("Squad1");
	this->squadTwo = new c_Squad("Squad2");
}

c_Fight::c_Fight(std::string name1, std::string name2)
{
	this->squadOne = new c_Squad(name1);
	this->squadTwo = new c_Squad(name2);
}

void c_Fight::fight()
{
	while (this->squadOne->notEmpty() || this->squadTwo->notEmpty()) {
		c_Soldier* sq1 = this->squadOne->takeSoldier();
		c_Soldier* sq2 = this->squadTwo->takeSoldier();
		if (sq1 && sq2) {
			while (sq1->isAlive() || sq2->isAlive()) {
				if (sq1->isAlive()) {
					std::cout << sq1->getName() << " from " << this->squadOne->getName() << " deals " <<
						sq1->attack(*sq2) << " to " << sq2->getName() << " from " << this->squadTwo->getName() << "\n";
				}
				else {
					break;
				}
				if (sq2->isAlive()) {
					std::cout << sq2->getName() << " from " << this->squadTwo->getName() << " deals " <<
						sq2->attack(*sq1) << " to " << sq1->getName() << " from " << this->squadOne->getName() << "\n";
				}
				else {
					break;
				}
			}
			if (sq1->isAlive()) {
				std::cout << sq1->getName() << " from " << this->squadOne->getName() << " kill " <<
					sq2->getName() << " from " << this->squadTwo->getName() << "\n\n";
			}
			else {
				std::cout << sq2->getName() << " from " << this->squadTwo->getName() << " kill " <<
					sq1->getName() << " from " << this->squadOne->getName() << "\n\n";
			}
		}
		else {
			break;
		}
	}
	if (this->squadOne->notEmpty() == false) {
		std::cout << this->squadTwo->getName() << " WIN!!" << "\n";
	}
	else {
		std::cout << this->squadOne->getName() << " WIN!!" << "\n";
	}
}
