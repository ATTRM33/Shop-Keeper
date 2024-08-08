#pragma once

#include "Purchaseable.h"


class Armor : public Purchaseable
{private:
	int armorClass;
	std::string name;
public:
	using Purchaseable::Purchaseable;
	Armor(int price, std::string name) : Purchaseable(price), name(name) { armorClass = 15; }
	virtual void negateDamage();
	std::string getName() override { return name; }
	void setName(std::string nm) { name = nm; }
	void buy() override;
	void sell() override;
	int getArmorClass() { return armorClass;}
};

