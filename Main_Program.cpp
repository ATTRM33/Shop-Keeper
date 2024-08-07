//Zach Brown
//7/26/2024
//CS2 Module 4 lab

#include "Weapon.h"
#include "Player.h"
#include "Vendor.h"
#include "VendorMenu.h"
#include "Potions.h"

int main() {

	Player player("Player 1", 500);

	player.addToInventory(new Weapon("Sword", "A sharp blade", 100, 1));
	player.addToInventory(new Weapon("Bow", "A long range weapon type", 150, 1));
	player.addToInventory(new Potions("Healing Potion", "Restores health.", 50, 3, true));
	
	
	Vendor vendor("ShopKeeper");
	vendor.addItem(new Weapon("Axe", "A heavy weapon.", 120, 1));
	vendor.addItem(new Weapon("Dagger", "A small, quick blade.", 80, 1));
	vendor.addItem(new Potions("Mana Potion", "Restores mana.", 75, 2, false));
	
	
	VendorMenu menu(player, vendor);

	menu.displayMainMenu();
	
}