#pragma once

#include "Purchaseable.h"


class Potions : Purchaseable
{private:
	std::string name;
	bool isHealingPotion;
public:
	using Purchaseable::Purchaseable;
	Potions();
	Potions(int price, std::string name, bool isHPotion);
	bool getIsHealingPotion() { return isHealingPotion; }
	std::string getName() {return name;}
};

