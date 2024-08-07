#pragma once
#include "Player.h"
#include "Vendor.h"
class VendorMenu
{private:
	Player& player;
	Vendor& vendor;
	bool playerHasEnoughGold(int price);
public:
	VendorMenu(Player& player, Vendor& vendor) : player(player), vendor(vendor) {}
	void displayMainMenu();
	void buyMenu();
	void sellMenu();
	void displayItems(const std::string& category);
	
};

