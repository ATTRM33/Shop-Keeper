#ifndef POTIONS_H
#define POTIONS_H

#include "Purchaseable.h"

#include <string>

class Potions : public Purchaseable
{private:
	std::string name;
	bool isHealingPotion = true;
public:
	Potions(int price, std::string name) : Purchaseable(price), name(name) {}
	bool getIsHealingPotion() { return isHealingPotion; }
	std::string getName() override { return name; }
	void buy() override;
	void sell() override;
};

#endif 