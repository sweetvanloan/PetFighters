#include "Game.h"
#include <iostream>

int main() {
    Game game;
    Player player;

    std::string playerName;
    std::cout << "Enter your player name: ";
    getline(std::cin, playerName);
    player.setName(playerName);

    game.addPlayer(player);

    // Continue with game setup and loop...
    return 0;
}
