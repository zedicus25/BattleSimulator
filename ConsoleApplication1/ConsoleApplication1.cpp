#include <iostream>
#include "c_Squad.h"
int main()
{
	srand(time(0));
	c_Squad* squad = new c_Squad();
	while (squad->notEmpty()) {
		if (squad->takeSoldier()) {
			std::cout << squad->takeSoldier()->getName() << "\n";
			squad->takeSoldier()->takeDamage(500);
		}
	}
	
}


