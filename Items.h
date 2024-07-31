#pragma once

#include <string>
#include "Purchaseable.h"

class Items : protected Purchaseable
{ private:
	std::string name;
	int numOfUses;
	
public:
	Items(std::string name, int numOfUses);
	int GetNumOfUses() { return numOfUses; }

};

