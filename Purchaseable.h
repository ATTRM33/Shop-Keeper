#pragma once
#ifndef PURCHASEABLE_H
#define PURCHASEABLE_H

#include <string>

class Purchaseable
{private:
	int price;
	int quantity;
	std::string name;
	std::string description;

public:
	Purchaseable(std::string name, std::string description,int price,  int quantity);
	virtual void buy();
	virtual void sell();
	std::string getName();
	int getPrice();
	void setQuantity(int q);
	int getQuantity();
	std::string getDescription();
};


#endif // !PURCHASEABLE_H