#pragma once

#include "Purchaseable.h"

#include <string>

class Potions : Purchaseable
{private:
	std::string name;
	bool isHealingPotion;
public:
	using Purchaseable::Purchaseable;
	Potions(){}
	void use();
	bool getIsHealingPotion() { return isHealingPotion; }
	std::string getName() {return name;}
};

