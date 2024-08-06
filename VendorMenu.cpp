#include "VendorMenu.h"
#include "Vendor.h"
#include "Player.h"

#include <iostream>

void VendorMenu::displayMainMenu() {
	int selection;
	while (true) {
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

void VendorMenu::buyMenu() {
	int selection;

	std::cout << "**Buy Menu**" << std::endl;
	std::cout << "What category would you like to buy from?" << std::endl;
	std::cout << "1. Weapons" << std::endl;
	std::cout << "2. Armor" << std::endl;
	std::cout << "3. Potions" << std::endl;
	std::cout << "4. Back to Main Menu" << std::endl;
	std::cout << "Enter your choice: ";
	std::cin >> selection;

	switch (selection) {
	case 1:
		displayItems("Weapons");
		break;
	case 2:
		displayItems("Armor");
		break;
	case 3:
		displayItems("Potions");
		break;
	case 4:
		return;
	default:
		std::cout << "Invalid choice, please try again." << std::endl;
	}

	
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
			break;
		}
	}
}

void VendorMenu::displayItems(const std::string& category) {
	std::cout << "\n**" << category << " Items**" << std::endl;

	vendor.displayStock();

	std::string itemName;
	std::cout << "Enter the name of the item you want to buy: ";
	std::cin.ignore(); // Ignore leftover newline character
	std::getline(std::cin, itemName);

	auto& inventory = vendor.getStock();
	for (auto it = inventory.begin(); it != inventory.end(); ++it) {
		if ((*it)->getName() == itemName) {
			if (playerHasEnoughGold((*it)->getPrice())) {
				player.addToInventory(*it);
				vendor.removeItem(itemName);
				(*it)->buy();
			}
			else {
				std::cout << "You do not have enough gold to buy this item." << std::endl;
			}
			break;
		}
	}
}

bool VendorMenu::playerHasEnoughGold(int price) {
	return true; 
}