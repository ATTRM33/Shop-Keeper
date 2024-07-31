#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "Items.h"
class Player
{
private:
	std::string name;
	int gold;
	std::vector <Items> items;
	
public:
	Player(std::string name, int gold);
	std::string getName();
	int getGold();
	void setGold();
	void buyItem();

};

#endif

