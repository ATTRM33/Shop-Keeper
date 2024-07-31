#pragma once

#include "Items.h"


class Armor : protected Items
{private:
	int armorClass;
public:
	virtual void negateDamage();
};

