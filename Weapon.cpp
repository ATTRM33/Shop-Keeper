#include "Weapon.h"
#include <iostream>
Weapon::Weapon(std::string name, int damage) :  name(name), damage(damage) {

}

void Weapon::attack() {
	std::cout << "You swing the " << name << " furiously in a slashing motion";
}