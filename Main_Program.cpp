//Zach Brown
//7/26/2024
//CS2 Module 4 lab

#include "Weapon.h"
#include "Player.h"
#include "Vendor.h"
#include "VendorMenu.h"
#include "Potions.h"
#include "Armor.h"

int main() {

	Player player("Player 1", 500);
	Vendor shopkeeper("Shopkeeper");

	
	shopkeeper.addItem(new Weapon(50, "Bow"));
	shopkeeper.addItem(new Weapon(75, "Dagger"));
	shopkeeper.addItem(new Weapon(100, "Axe"));
	shopkeeper.addItem(new Potions(50, "Mana Potion"));
	shopkeeper.addItem(new Potions(50, "Healing Potion"));
	shopkeeper.addItem(new Armor(100, "Iron Cuirass"));
	shopkeeper.addItem(new Armor(150, "Steel Barbut"));

	
	VendorMenu menu(player, shopkeeper);

	menu.displayMainMenu();
	
}