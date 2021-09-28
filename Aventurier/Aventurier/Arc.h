#pragma once
#include <string>
#include "Arme.h"
class Arc : public Arme
{
public:
	Arc();
	~Arc();

	virtual std::string to_string();
};

