#pragma once
#include "Purchaseable.h"
#include <string>

class Potion :
    public Purchaseable
{private:
    std::string name;
    bool isHealthPotion;
public:
    Potion(std::string name, bool isHealthPotion);
    void addHealth();
    void addMagicka();
};

