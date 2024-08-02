#include "Player.h"

Player::Player(std::string name, int gold, int health, int stamina, int magick):
name(name), gold(gold) {

}

int Player::getGold() {
	return gold;
}
void Player::setGold(int goldAmt) {
	gold = goldAmt;
}
