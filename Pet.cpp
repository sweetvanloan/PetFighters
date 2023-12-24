#include "Pet.h"
#include <iostream>

Pet::Pet(const std::string& petName, ElementType petElement)
    : name(petName), health(100), happiness(100), level(1), element(petElement),
      currentHP(100), baseMaxHP(100), enhancedMaxHP(100) {}

void Pet::setName(const std::string& newName) {
    name = newName;
}

std::string Pet::getName() const {
    return name;
}

void Pet::setElement(ElementType newElement) {
    element = newElement;
}

ElementType Pet::getElement() const {
    return element;
}

void Pet::increaseHP(int amount) {
    currentHP = std::min(currentHP + amount, enhancedMaxHP);
}

void Pet::decreaseHP(int amount) {
    currentHP = std::max(currentHP - amount, 0);
}

void Pet::enhanceMaxHP(int amount) {
    enhancedMaxHP += amount;
    if (enhancedMaxHP > baseMaxHP) {
        baseMaxHP = enhancedMaxHP;
    }
}

int Pet::getCurrentHP() const {
    return currentHP;
}

int Pet::getMaxHP() const {
    return enhancedMaxHP;
}

void Pet::useElementalAttack() const {
    // Implementation of elemental attack
}

void Pet::useElementalDefense() const {
    // Implementation of elemental defense
}

void Pet::useItem(const Item& item) {
    int hpIncrease = item.getHPIncrease();
    if (hpIncrease == -1) {
        currentHP = enhancedMaxHP; // Full HP for yellow gem
    } else {
        increaseHP(hpIncrease);
    }
}
 
