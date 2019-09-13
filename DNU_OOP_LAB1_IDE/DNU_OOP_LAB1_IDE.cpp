// DNU_OOP_LAB1_IDE.cpp 

#include <iostream>
#include "Manager.h"


int main()
{
	std::cout << "Hello world" << std::endl;
	
	Manager p = Manager("John", "Johnson", "12.01.1990", "123456789", 60000, "Design");
	std::cout << p.get_salary() << std::endl;
	p.give_bonuses(10);
	std::cout << p.get_salary() << std::endl;

	return 0;
}
