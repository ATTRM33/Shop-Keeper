#include "VendorMenu.h"

#include <iostream>
void VendorMenu::displayMainMenu() {
	int selection;

	std::cout << " **Vendor Menu**" << std::endl;

	std::cout << "select an option from the menu" << std::endl;
	std::cout << "1.Buy " << std::endl;
	std::cout << "2.Buy " << std::endl;
	std::cout << "3.Buy " << std::endl;
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

void VendorMenu::buyMenu() {
	int selection;
	std::cout << "What would category would you like to buy from? "<< std::endl;
	std::cin >> selection;

	
}
void VendorMenu::sellMenu() {
	
}

void weaponMenu() {
}
void armorMenu() {

}
void itemMenu() {

}
void potionMenu() {

}