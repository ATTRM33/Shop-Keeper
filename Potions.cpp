#include "Potions.h"


Potions::Potions(std::string name, std::string description, int price, int quantity, bool healthPotion)
    : Purchaseable(name, description, price, quantity), isHealingPotion(healthPotion) {}