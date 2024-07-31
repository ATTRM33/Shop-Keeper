#pragma once

#include <string>

class Items
{ private:
	std::string description;
	int quantity;
	int price;
public:
	Items(std::string description, int weight, int quantity, int value);
	int getPrice() { return price; }
	int getQuantity() { return quantity; }

};

