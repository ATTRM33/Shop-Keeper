#include "Player.h"

Player::Player(std::string name, int gold, int health, int stamina, int magick):
name(name), gold(gold), health(health), stamina(stamina), magick(magick) {

}
std::string Player::getName() {
	return name;
}
int Player::getGold() {
	return gold;
}
void Player::setGold(int goldAmt) {
	gold = goldAmt;
}
void Player::buyItem() {
	for (Purchaseable& p : inventory) {
		inventory.push_back(p);
	}
}