#pragma once
#include "Person.h"

class Employer :
	protected Person
{
public:

	Employer(std::string name, std::string surname, std::string birth_date, std::string social_number, int salary);

	
	// Accessors methods 
	int get_salary();
	void set_salary(int salary);


	virtual void give_bonuses(int bonuses);

protected:
	int salary;
};

