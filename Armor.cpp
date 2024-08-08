#include "Armor.h"
#include <iostream>

//future implementation of attributes to the armor class
void Armor::negateDamage() {

}

void Armor::buy(){
	std::cout << "Great Choice! a new " << name << " for " << price << " gold.\n";
}
void Armor::sell() {
	std::cout << "Sold " << name << " for " << price << " gold.\n";
}