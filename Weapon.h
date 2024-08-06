#ifndef WEAPON_H
#define WEAPON_H

#include "Purchaseable.h"
#include <string>

class Weapon : public Purchaseable
{private:
	std::string name;
public:
	
	using Purchaseable::Purchaseable;
	Weapon() {}
	virtual void attack();
	std::string getName() { return name; }
	void setName(std::string nm) { name = nm; }
};

#endif // !WEAPON_H