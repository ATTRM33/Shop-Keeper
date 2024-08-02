#ifndef WEAPON_H
#define WEAPON_H

#include "Items.h"
#include <string>

class Weapon : Purchaseable
{private:
	int damage;
public:
	using Purchaseable::Purchaseable;
	Weapon(Purchaseable::)
	virtual void attack();

};

#endif // !WEAPON_H