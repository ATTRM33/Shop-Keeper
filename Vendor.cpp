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

void Vendor::removeItem(std::string& itemName) {
    for (auto it = items.begin(); it != items.end(); ++it) {
        if ((*it)->getName() == itemName) {
            delete* it;
            items.erase(it);
            break;
        }
    }
}

void Vendor::displayStock() {
    std::cout << "Shopkeeper Items: " << std::endl;
    for (const auto& item : items) {
        std::cout << item->getName() << " - " << item->getDescription()
            << " (Price: " << item->getPrice() << ", Quantity: " << item->getQuantity() << ")\n";
    }
}



std::vector<Purchaseable*>& Vendor::getStock() {
    return items;
}