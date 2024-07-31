#ifndef SHOP_H
#define SHOP_H

#include "Weapon.h"
#include "Potions.h"
#include "Armor.h"

class Shop{
private:

	Weapon weapons[5];
	Potions potions[2];
	Armor armor[4];
	int gold;

public:
	Weapon getWeapons();
	int getGold();
	void addWeapons();
	void addPotions();
	void addArmor();
};

#endif
