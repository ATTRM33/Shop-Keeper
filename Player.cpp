#include "Player.h"

#include <iostream>

Player::Player(std::string name, int gold):
name(name), gold(gold) {

}

void Player::addToInventory(Purchaseable* item) {
    inventory.push_back(item);
}


void Player::removeFromInventory(std::string& itemName) {
    for (auto it = inventory.begin(); it != inventory.end(); ++it) {
        if ((*it)->getName() == itemName) {
            delete* it;
            inventory.erase(it);
            break;
        }
    }
}

void Player::displayInventory() {
    std::cout << "Player Inventory:\n";
    for (Purchaseable* item : inventory) {
        std::cout << item->getName() << " - " << item->getDescription()
            << " (Price: " << item->getPrice() << ", Quantity: " << item->getQuantity() << ")\n";
        std::cout << std::endl;
    }
}

std::vector<Purchaseable*>& Player::getInventory() {
    return inventory;
}