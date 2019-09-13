#include "Employer.h"

Employer::Employer(std::string name, std::string surname, std::string birth_date, std::string social_number, int salary)
	:Person(name, surname, birth_date, social_number)
{
	this->salary = salary;
}

int Employer::get_salary()
{
	return salary;
}

void Employer::set_salary(int salary)
{
	this->salary = salary;
}

void Employer::give_bonuses(int bonuses)
{
	salary += bonuses;
}
