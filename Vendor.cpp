#include "Vendor.h"
#include "Purchaseable.h"
#include "Armor.h"
#include "Weapon.h"
#include "Potions.h"
#include "Items.h"
#include <vector>

#include <iostream>
Vendor::Vendor(std::string& name) : name(name) {}



void Vendor::addItem(Purchaseable* item) {
    items.push_back(item);
}

void Vendor::sellItem(Player& player, Purchaseable* item) {
    if (player.getGold() >= item->getPrice()) {
        player.removeGold(item->getPrice());
        player.addToInventory(item);
        removeItem(item);
    }
}

void Vendor::removeItem(Purchaseable* item) {
    items.erase(std::remove(items.begin(), items.end(), item), items.end());
}

void Vendor::displayStock() {
    for (Purchaseable* item : items) {
        std::cout << item << " - " << item->getPrice() << " gold" << std::endl;
    }
}

void Vendor::stock() {
    Purchaseable* items[11];
    items[0] = new Weapon("Longsword", 10);
    items[1] = new Weapon("Bow", 8);
    items[2] = new Weapon("Staff", 3);
}