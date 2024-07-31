#include "Shop.h"


void Shop::addWeapons() {
	for (Weapon w: weapons) {
		addArmor();
		addPotions();
		addWeapons();
	}
}

void addPotions();
void addArmor();