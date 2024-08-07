#pragma once
#ifndef PURCHASEABLE_H
#define PURCHASEABLE_H

#include <string>

class Purchaseable
{protected:
	int price;
	
public:
	Purchaseable(int price) : price(price) {}
	virtual void buy() = 0;
	virtual void sell() = 0;
	virtual std::string getName() = 0;
	int getPrice() { return price; }
};


#endif // !PURCHASEABLE_H