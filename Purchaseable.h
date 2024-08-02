#pragma once
#ifndef PURCHASEABLE_H
#define PURCHASEABLE_H



#include "Items.h"
#include <vector>


class Purchaseable
{private:
	std::vector <Items> itemsOffered;
	int price;

public:
	Purchaseable();
	Purchaseable(int price);
	virtual void buy();
	virtual void sell();
	virtual int getPrice() { return price; }
	virtual void setPrice(int p) { price = p; }
};


#endif // !PURCHASEABLE_H