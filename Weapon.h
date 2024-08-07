#ifndef WEAPON_H
#define WEAPON_H

#include "Purchaseable.h"
#include <string>

class Weapon : public Purchaseable
{private:
	std::string name;
public:
	
	using Purchaseable::Purchaseable;
	Weapon(int price, std::string name): Purchaseable(price), name(name) {}
	virtual void attack();
	std::string getName() override { return name; }
	void setName(std::string nm) { name = nm; }
	void buy() override;
	void sell() override;
};

#endif // !WEAPON_H