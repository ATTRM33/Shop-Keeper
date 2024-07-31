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
	void virtual sell();
	virtual int getPrice() { return price; }
};


#endif // !PURCHASEABLE_H