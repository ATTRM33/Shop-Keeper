#ifndef WEAPON_H
#define WEAPON_H

#include "Items.h"
#include <string>

class Weapon : Items
{private:
	int damage;
public:
	virtual void attack();

};

#endif // !WEAPON_H