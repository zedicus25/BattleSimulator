#include <iostream>
#include <time.h>
#include <string>
#include "c_Fight.h"
int main()
{
	srand(time(0));
	std::string name1;
	std::string name2;
	std::getline(std::cin, name1);
	std::getline(std::cin, name2);
	c_Fight* fight = new c_Fight(name1, name2);
	fight->fight();
	
}


