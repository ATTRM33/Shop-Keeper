#pragma once

#include <string>
#include <vector>
#include "Purchaseable.h"

class Vendor
{private:
	std::string name;
	std::vector<Purchaseable> stock;

};

