# Module_4 System Clone - RPG Shopkeeper buy/sell menu
A simple program that allows the player to buy weapons from the shopkeeper and sell the items they have acquired.

## File Description
- `Main_Program.cpp`: Contains the main function, the player and shopkeeper, the items generated to the shopkeeper, and the class function to run the program.
- `Purchaseable.h` and `Purchaseable.cpp`: contain the pure virtual base class functions and member variables such as price, buy, and sell. 
- `Weapon.h` , `Weapon.cpp`, `Armor.h`, `Armor.cpp`, `items.h`, and `items.cpp`: Contain the subclasses member functions of purchaseables and seperate member functions and variables.  
- `Vendor.h`, `Vendor.cpp`, `Player.h` and `Player.cpp` : Contain the shopkeeper and player attributes and fucntions that allow them both to store and remove items from an array of Purchaseables.
- `VendorMenu.h` and `VendorMenu.cpp`: Contains the interface for the buying and selling and controls the logic of buying and selling items as well as removing and adding gold from the player.
## How to run the program
- build and compile the files.
## Program Features
- Buy weapons, armor or items
- Sell weapons, armor or items back
- Remove items from vendors list and add items to players inventory
- Increment or subtract gold from players gold
