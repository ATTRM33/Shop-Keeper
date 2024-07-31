#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "Purchaseable.h"
class Player
{
private:
	std::string name;
	int gold;
	std::vector <Purchaseable> inventory;
	int health;
	int stamina;
	int magick;
	
public:
	Player(std::string name, int gold, int health, int stamina, int magick);
	std::string getName();
	int getGold();
	void setGold(int goldAmt);
	void buyItem();

};

#endif

