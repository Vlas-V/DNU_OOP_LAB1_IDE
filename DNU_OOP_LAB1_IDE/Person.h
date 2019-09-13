#pragma once

#include <string>
#include <stdexcept>

class Person
{
public:
	Person();
	Person(	std::string name,
			std::string surname,
			std::string birth_date,
			std::string social_number);

	virtual void set_social_number(std::string social_number);

protected:
	std::string name;
	std::string surname;
	std::string birth_date;
	std::string social_number;
};

