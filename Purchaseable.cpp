#include "Purchaseable.h"


#include <iostream>

Purchaseable::Purchaseable(std::string name, std::string description,int price, int quantity) : name(name), price(price), description(description), quantity(quantity)  {

}
void Purchaseable::buy() {
	std::cout << "Bought " << name << " for " << price << " units" <<std::endl;
}
void Purchaseable::sell() {
	std::cout << "Sold " << name << " for " << price << " units" << std::endl;
}