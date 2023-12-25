#ifndef PET_H
#define PET_H

#include <string>
#include "Item.h"

enum class ElementType {
    Fire, Water, Earth, Air, Wind, Ice, Lightening // Extend as needed
};

class Pet {
private:
    std::string name;
    int health;
    int happiness;
    int level;
    ElementType element;
    int currentHP;
    int baseMaxHP;
    int enhancedMaxHP;

public:
    Pet(const std::string& petName = "Unnamed Pet", ElementType petElement = ElementType::Fire);

    void setName(const std::string& newName);
    std::string getName() const;

    void setElement(ElementType newElement);
    ElementType getElement() const;

    void increaseHP(int amount);
    void decreaseHP(int amount);
    void enhanceMaxHP(int amount);
    int getCurrentHP() const;
    int getMaxHP() const;

    void useElementalAttack() const;
    void useElementalDefense() const;

    void useItem(const Item& item);
};

#endif 
