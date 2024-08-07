#pragma once

#include <string>
#include <vector>
#include "Purchaseable.h"
#include "Player.h"

class Vendor
{private:
	std::string name;
	std::vector<Purchaseable*> items;
public:
	Vendor(std::string name);
	std::string getName() { return name; }
	void addItem(Purchaseable* item);
	void removeItem(int itemIndex);
	void displayStock();
	std::vector<Purchaseable*>& getStock();
	
};

