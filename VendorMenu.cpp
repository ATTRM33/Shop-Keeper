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
			std::cin >> selection;

			switch (selection) {
			case 1:
				buyMenu();
				break;
			case 2:
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
	std::string category = "All";
	displayItems(category);
	
}
void VendorMenu::sellMenu() {
	std::cout << "\n**Sell Menu**" << std::endl;
	player.displayInventory();

	std::string itemName;
	std::cout << "Enter the name of the item you want to sell: ";
	std::cin >> itemName;

	bool found = false;
	for (auto& item : player.getInventory()) {
		if (item->getName() == itemName) {
			player.removeFromInventory(itemName);
			vendor.addItem(item);
			item->sell();
			found = true;
		}
	}
}

void VendorMenu::displayItems(const std::string& category) {
	std::cout << "\n** " << category << " Items **" << std::endl;

	vendor.displayStock();

	std::string itemName;
	std::cout << "Enter the name of the item you want to buy: ";
	std::cin.ignore(); // Ignore leftover newline character
	std::getline(std::cin, itemName);

	auto& inventory = vendor.getStock();

	auto it = std::find_if(inventory.begin(), inventory.end(), [&](Purchaseable* item) {
		return item->getName() == itemName;
		});

	if (it != inventory.end()) {
		if (playerHasEnoughGold((*it)->getPrice())) {
			player.addToInventory(*it);
			vendor.removeItem(itemName);
			(*it)->buy();
			std::cout << "You bought " << itemName << "." << std::endl;
		}
		else {
			std::cout << "You do not have enough gold to buy this item." << std::endl;
		}
	}
	else {
		std::cout << "Item not found in the vendor's inventory." << std::endl;
	}
}

bool VendorMenu::playerHasEnoughGold(int price) {
	return true; 
}