#include "Weapon.h"

class Bow : public Weapon
{private:
	std::string name;
	int price;
public:
	Bow();
	Bow(std::string weapName, int price);
	int getPrice();
	std::string getName();
};

