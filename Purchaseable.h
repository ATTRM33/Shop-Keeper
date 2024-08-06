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
	Purchaseable() : price(0), quantity(0){}
	Purchaseable(std::string name, std::string description,int price,  int quantity);
	virtual void buy();
	virtual void sell();
	virtual std::string getName() { return name; }
	virtual int getPrice() { return price; }
	virtual void setPrice(int p) { price = p; }
	virtual void setQuantity(int q) { quantity = q; }
	virtual int getQuantity() { return quantity; }
	std::string getDescription() { return description; }
};


#endif // !PURCHASEABLE_H