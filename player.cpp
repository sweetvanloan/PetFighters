#include "Player.h"

void Player::setName(const std::string& newName) {
    name = newName;
}

void Player::addPet(const Pet& pet) {
    pets.push_back(pet);
}

void Player::setupBattleTeam(const std::vector<int>& petIndices) {
    battleTeam.clear();
    for (int index : petIndices) {
        if (index >= 0 && index < pets.size()) {
            battleTeam.push_back(&pets[index]);
        }
        if (battleTeam.size() == 4) {
            break;
        }
    }
}

void Player::interactWithPet(const std::string& petName, int actionType) {
    // Implement interaction logic...
}

void Player::tradePet(Player& otherPlayer, const std::string& yourPetName, const std::string& theirPetName) {
    // Implement pet trading logic, including pet name and owner updates
}

