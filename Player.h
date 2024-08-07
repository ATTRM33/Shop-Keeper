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
	Player(std::string name, int gold);
	int getGold() { return gold; }
	void addGold(int amt) { gold = amt; }
	void removeGold(int amt) { gold = amt; }
	void addToInventory(Purchaseable* item);
	void removeFromInventory(int itemIndex);
	void displayInventory();
	std::vector<Purchaseable*>& getInventory();
	

};

#endif

