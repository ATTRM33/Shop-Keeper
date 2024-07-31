#include "Bow.h"

Bow::Bow() {

}
Bow::Bow(std::string weapName, int price) : name(weapName), price(price) {}
int Bow::getPrice() {
	return price;
}
std::string Bow::getName() {
	return name;
}