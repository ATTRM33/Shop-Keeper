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
	std::vector <Purchaseable*> inventory;
	
	
public:
	Player(std::string name, int gold, int health, int stamina, int magick);
	int getGold();
	void addGold(int amt) { gold = amt; }
	void removeGold(int amt) { gold = amt; }
	void addToInventory(Purchaseable* item);
	void removeFromInventory(std::string& itemName);
	void setGold(int goldAmt) { gold = goldAmt; }
	void displayInventory();
	

};

#endif

