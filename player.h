#ifndef PLAYER_H
#define PLAYER_H

#include "Pet.h"
#include <vector>
#include <string>

class Player {
private:
    std::string name;
    std::vector<Pet> pets;            // All pets owned by the player
    std::vector<Pet*> battleTeam;     // Pointers to pets in the battle team

public:
    Player(const std::string& playerName = "Unnamed Player") : name(playerName) {}

    void setName(const std::string& newName);
    void addPet(const Pet& pet);
    void setupBattleTeam(const std::vector<int>& petIndices);
    void interactWithPet(const std::string& petName, int actionType);
    // Other player methods...
};

#endif
