#include "Player.h"

#include <iostream>

Player::Player(std::string name, int gold):
name(name), gold(gold) {

}

void Player::addToInventory(Purchaseable* item) {
    inventory.push_back(item);
}


void Player::removeFromInventory(std::string& itemName) {
    auto it = std::remove_if(inventory.begin(), inventory.end(), [&](Purchaseable* item) {
        return item->getName() == itemName;
        });
    if (it != inventory.end()) {
        delete* it;
        inventory.erase(it, inventory.end());
    }
}


void Player::displayInventory() {
    std::cout << "Player Inventory:\n";
    for (Purchaseable* item : inventory) {
        std::cout << item->getName() << " - " << item->getDescription()
            << " (Price: " << item->getPrice() << ", Quantity: " << item->getQuantity() << ")\n";
    }
}

std::vector<Purchaseable*>& Player::getInventory() {
    return inventory;
}