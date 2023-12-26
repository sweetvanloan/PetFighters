#include "Pet.h"
#include <algorithm>

// Constructor
Pet::Pet(const std::string& petName, ElementType petElement)
    : name(petName), health(100), happiness(50), level(1), element(petElement),
      currentHP(100), baseMaxHP(100), enhancedMaxHP(100), currentMood(Mood::Happy) {}

// Setters and getters implementations
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

Mood Pet::getCurrentMood() const {
    return currentMood;
}

// HP management methods
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

// Elemental abilities
void Pet::useElementalAttack() const {
    // Implement elemental attack based on pet's element
}

void Pet::useElementalDefense() const {
    // Implement elemental defense based on pet's element
}

// Item usage
void Pet::useItem(const Item& item) {
    // Item usage logic
}

// Mood and interaction
void Pet::interactWithOtherPet(Pet& otherPet) {
    // Example interaction logic
    // Expand with more complex rules and effects
    if (currentMood == Mood::Happy && otherPet.getCurrentMood() == Mood::Happy) {
        increaseHP(5);  // Both pets gain some HP
        otherPet.increaseHP(5);
    }

    // ... Other interactions based on mood need to be added ...
}

void Pet::changeMood(Mood newMood) {
    currentMood = newMood;
}

// Happiness management
void Pet::increaseHappiness(int amount) {
    happiness = std::min(happiness + amount, 100);
}

void Pet::decreaseHappiness(int amount) {
    happiness = std::max(happiness - amount, 0);
}

void Pet::updateStatus() {
    // Implement status updates based on happiness
}
