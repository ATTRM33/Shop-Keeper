#include "VendorMenu.h"
#include "Vendor.h"
#include "Player.h"

#include <iostream>

void VendorMenu::displayMainMenu() {
	int selection;
	while(true){
		{
			std::cout << " **Vendor Menu**" << std::endl;

			std::cout << "select an option from the menu" << std::endl;
			std::cout << "1.Buy " << std::endl;
			std::cout << "2.Sell " << std::endl;
			std::cout << "3.Exit " << std::endl;
			std::cout << std::endl;
			std::cout << "Gold: " << player.getGold() << std::endl;
			std::cin >> selection;

			switch (selection) {
			case 1:
				system("cls"); //clear menu to make console cleaner
				buyMenu();
				
				break;
			case 2:
				system("cls");
				sellMenu();
				break;
			case 3:
				exit;
				break;
			default:
				std::cout << "Invalid choice" << std::endl;
			}
		}
	}
}

void VendorMenu::buyMenu() {
	
	displayItems("Buy"); //display items will have "buy" displayed above menu
	
}
void VendorMenu::sellMenu() {
	player.displayInventory();

	int itemIndex;
	std::cout << "Enter the index of the item you want to sell: ";
	std::cin >> itemIndex;

	auto& inventory = player.getInventory();

	std::cout << std::endl;
	std::cout << "Gold: " << player.getGold() << std::endl;

	if (itemIndex >= 0 && itemIndex < inventory.size()) {
		Purchaseable* item = inventory[itemIndex];
		vendor.addItem(item);
		player.removeFromInventory(itemIndex);
		item->sell();
		std::cout << "You sold " << item->getName() << " for " << item->getPrice() << " gold." << std::endl;
		player.addGold(player.getGold() + item->getPrice()); //increment player gold
	}
	else {
		std::cout << "Invalid item index." << std::endl;
	}
	
}

void VendorMenu::displayItems(const std::string& category) {

	vendor.displayStock(); //vendors items

	int itemIndex;

	std::cout << "Enter the index of the item you want to buy: ";
	std::cin >> itemIndex;

	//reference variable created to store the array of shopkeepers items
	auto& inventory = vendor.getStock();

	std::cout << std::endl;
	std::cout << "Gold: " << player.getGold() << std::endl;

	if (itemIndex >= 0 && itemIndex < inventory.size()) {
		Purchaseable* item = inventory[itemIndex];
		if (playerHasEnoughGold(item->getPrice())) {
			player.addToInventory(item);
			vendor.removeItem(itemIndex);
			item->buy();
			std::cout << "You bought " << item->getName() << "." << std::endl;
			player.addGold(player.getGold() - item->getPrice());
		}
		else {
			std::cout << "You do not have enough gold to buy this item." << std::endl;
		}
	}
	else {
		std::cout << "Invalid item index." << std::endl;
	}
	
}


bool VendorMenu::playerHasEnoughGold(int price) {
	if (player.getGold() >= price) {
		return true;
	}
	else {
		return false;
	}
}