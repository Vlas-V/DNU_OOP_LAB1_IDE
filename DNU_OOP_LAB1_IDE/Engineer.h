#pragma once
#include "Employer.h"

class Engineer :
	protected Employer
{
public:

	void give_bonuses(int bonuses) override;

protected:
	std::string level;
};

