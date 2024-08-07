#include "Weapon.h"
#include <iostream>

void Weapon::attack() {
	std::cout << "You swing the " << name << " furiously in a slashing motion";
}


void Weapon::buy() {
   
    std::cout << "Bought a " << name << " for " << price << " gold.\n";
}

void Weapon::sell() {
    
    std::cout << "Sold a " << name << " for " << price << " gold.\n";
}