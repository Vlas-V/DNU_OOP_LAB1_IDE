#pragma once
#include "Employer.h"
class Manager :
	protected Employer
{
public:

	Manager(std::string name, std::string surname, std::string birth_date, std::string social_number, int salary, std::string department);

	void give_bonuses(int bonuses) override;
	int get_salary();



protected:
	std::string department;
};

