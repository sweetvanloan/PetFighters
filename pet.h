#ifndef PET_H
#define PET_H

#include <string>
#include "Item.h"

//  Elemental Types
enum class ElementType {
    Fire, Water, Earth, Air, Lightning, Wind, Ice
};

// Pet Moods
enum class Mood {
    Happy, Sad, Excited, Relaxed // Extend with additional moods
};

class Pet {
private:
    std::string name;
    int health, happiness, level;
    ElementType element;
    int currentHP, baseMaxHP, enhancedMaxHP;
    Mood currentMood;

public:
    // Constructor
    Pet(const std::string& petName = "Unnamed Pet", ElementType petElement = ElementType::Fire);

    // Setters and getters
    void setName(const std::string& newName);
    std::string getName() const;
    void setElement(ElementType newElement);
    ElementType getElement() const;
    Mood getCurrentMood() const;

    // HP management
    void increaseHP(int amount);
    void decreaseHP(int amount);
    void enhanceMaxHP(int amount);
    int getCurrentHP() const;
    int getMaxHP() const;

    // Elemental abilities
    void useElementalAttack() const;
    void useElementalDefense() const;

    // Item usage
    void useItem(const Item& item);

    // Mood and interaction
    void interactWithOtherPet(Pet& otherPet);
    void changeMood(Mood newMood);

    // Happiness
    void increaseHappiness(int amount);
    void decreaseHappiness(int amount);
    void updateStatus();
};

#endif
