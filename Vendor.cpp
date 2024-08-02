#include "Vendor.h"
#include "Purchaseable.h"


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

void Vendor::displayItems() const {
    for (const auto& item : items) {
        std::cout << item->getName() << " - " << item->getPrice() << " gold" << std::endl;
    }
}