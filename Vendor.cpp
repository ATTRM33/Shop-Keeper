#include "Vendor.h"
#include "Purchaseable.h"
#include "Armor.h"
#include "Weapon.h"
#include "Potions.h"
#include "Items.h"
#include <vector>

#include <iostream>
Vendor::Vendor(std::string name) : name(name) {}



void Vendor::addItem(Purchaseable* item) {
    items.push_back(item);
}

void Vendor::removeItem(int itemIndex) {
    //Purchaseable* temp = items[itemIndex];
    items[itemIndex] = items[items.size() - 1];
    items.pop_back();
}



void Vendor::displayStock() {
    std::cout << "Vendor Stock:\n";
    for (int i = 0; i < items.size(); ++i) {
        std::cout << i << ". " << items[i]->getName() << " - " << items[i]->getPrice() << " gold" << std::endl;
    }
}



std::vector<Purchaseable*>& Vendor::getStock() {
    return items;
}