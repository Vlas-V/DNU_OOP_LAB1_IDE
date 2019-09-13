#include "Manager.h"

Manager::Manager(std::string name, std::string surname, std::string birth_date, std::string social_number, int salary, std::string department)
	:Employer(name, surname, birth_date, social_number, salary)
{
	this->department = department;
}

void Manager::give_bonuses(int bonuses)
{
	salary *= bonuses;
}

int Manager::get_salary()
{
	return salary;
}
