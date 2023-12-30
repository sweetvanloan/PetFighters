#include "Game.h"
#include <iostream>
#include <string>

void displayStartPage() {
    std::cout << "Welcome to Pet Adventure Game!\n";
    std::cout << "1. Start New Game\n";
    std::cout << "2. Load Game\n";
    std::cout << "3. Exit\n";
    std::cout << "Enter your choice: ";
}

void startNewGame(Game& game) {
    // Logic to start a new game
}

void loadGame(Game& game) {
    // Logic to load a game
}




int main() {
    Game game;
    Player player;

    bool exitGame = false;

    while (!exitGame) {
        displayStartPage();
        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
                startNewGame(game);
                break;
            case 2:
                loadGame(game);
                break;
            case 3:
                exitGame = true;
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";

    std::string playerName;
    std::cout << "Enter your player name: ";
    getline(std::cin, playerName);
    player.setName(playerName);

    game.addPlayer(player);

    // Continue with game setup and loop...
    return 0;
}

int main() {
    // Game setup and main loop with pet trading functionality
    return 0;
}
