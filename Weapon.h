#ifndef WEAPON_H
#define WEAPON_H

#include "Purchaseable.h"
#include <string>

class Weapon : public Purchaseable
{private:
	std::string name;
	int damage;
public:
	std::string getName() { return name; }
	void setName(std::string nm) { name = nm; }
	using Purchaseable::Purchaseable;
	Weapon(std::string name, int damage);
	virtual void attack();

};

#endif // !WEAPON_H