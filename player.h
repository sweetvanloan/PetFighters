#ifndef PLAYER_H
#define PLAYER_H

#include "Pet.h"
#include <vector>
#include <string>

class Player {
private:
    std::string name;
    std::vector<Pet> pets;
    std::vector<Pet*> battleTeam;

public:
    Player(const std::string& playerName);

    // Existing methods...

    void tradePet(Player& otherPlayer, const std::string& yourPetName, const std::string& theirPetName);
};

#endif
