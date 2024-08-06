#pragma once

#include "Purchaseable.h"

#include <string>

class Potions : Purchaseable
{private:
	std::string name;
	bool isHealingPotion = true;
public:
	using Purchaseable::Purchaseable;
	bool getIsHealingPotion() { return isHealingPotion; }
	std::string getName() {return name;}
};

