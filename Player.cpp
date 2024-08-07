#include "Player.h"

#include <iostream>

Player::Player(std::string name, int gold):
name(name), gold(gold) {

}

void Player::addToInventory(Purchaseable* item) {
    inventory.push_back(item);
}


void Player::removeFromInventory(int itemIndex) {
    inventory[itemIndex] = inventory[inventory.size() - 1];
    inventory.pop_back();
}

void Player::displayInventory() {
    std::cout << "Player Inventory:\n";
    for (int i = 0; i < inventory.size(); ++i) {
        std::cout << i << ". " << inventory[i]->getName() << " - " << inventory[i]->getPrice() << " gold\n";
    }
}


std::vector<Purchaseable*>& Player::getInventory() {
    return inventory;
}