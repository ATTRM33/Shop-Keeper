#include "Potions.h"
#include <iostream>


void Potions::buy() {
    
    std::cout << "Bought a " << name << " for " << price << " gold.\n";
}

void Potions::sell()  {
    
    std::cout << "Sold a " << name << " for " << price << " gold.\n";
}