#include "Person.h"

Person::Person()
{
	name = "";
	surname = "";
	birth_date = "";
	social_number = "";

}

Person::Person(std::string name, std::string surname, std::string birth_date, std::string social_number)
{
	this->name = name;
	this->surname = surname;
	this->birth_date = birth_date;
	// validate the social number
	set_social_number(social_number);
}

void Person::set_social_number(std::string social_number)
{
	if (social_number.size() != 9)
		throw std::invalid_argument("received social an invalid social number");
	else
		this->social_number = social_number;
}
