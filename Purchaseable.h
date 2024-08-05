#pragma once
#ifndef PURCHASEABLE_H
#define PURCHASEABLE_H

#include <string>

class Purchaseable
{private:
	int price;
	std::string name;
	int quantity;
	std::string description;

public:
	Purchaseable();
	Purchaseable(std::string name, int price, std::string description, int quantity);
	virtual void buy();
	virtual void sell();
	virtual std::string getName() { return name; }
	virtual int getPrice() { return price; }
	virtual void setPrice(int p) { price = p; }
	virtual void setPrice(int q) { quantity = q; }
	std::string getDescription() { return description; }
};


#endif // !PURCHASEABLE_H