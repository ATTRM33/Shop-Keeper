#pragma once
#include "Player.h"
#include "Vendor.h"
class VendorMenu
{private:
	Player& player;
	Vendor& vendor;
	bool playerHasEnoughGold(int price);
public:
	VendorMenu(Player p, Vendor v) : player(p), vendor(v) {}
	void displayMainMenu();
	void buyMenu();
	void sellMenu();
	void displayItems(const std::string& category);
	
};

