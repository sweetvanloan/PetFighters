#ifndef PET_H
#define PET_H

#include <string>
#include <vector>
#include "Item.h"

// Element and Mood Enumerations as before...

// Structure for pet's history
struct PetHistory {
    std::string name;
    std::string owner;
};

class Pet {
private:
    std::string name;
    int health, happiness, level, currentHP, baseMaxHP, enhancedMaxHP;
    ElementType element;
    Mood currentMood;
    std::vector<PetHistory> history;

public:
    Pet(const std::string& petName, ElementType petElement);

    // Getters, setters, and other existing methods...

    void changeName(const std::string& newName, const std::string& ownerName);
    const std::vector<PetHistory>& getHistory() const;
};

#endif
