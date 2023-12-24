#ifndef GAME_H
#define GAME_H

#include "Pet.h"
#include <vector>

class Game {
private:
    std::vector<Pet> pets;
    std::vector<Pet*> favorites;

public:
    void addPet(const Pet& newPet);
    void addToFavorites(const std::string& petName);
    void removeFromFavorites(const std::string& petName);
    // Other game-related methods...
};

#endif
