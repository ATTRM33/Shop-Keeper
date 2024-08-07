#ifndef POTIONS_H
#define POTIONS_H

#include "Purchaseable.h"

#include <string>

class Potions : public Purchaseable
{private:
	bool isHealingPotion = true;
public:
	Potions(std::string n, std::string d, int p, int q, bool healing);
	bool getIsHealingPotion() { return isHealingPotion; }
};

#endif 