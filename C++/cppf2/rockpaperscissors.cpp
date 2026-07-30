#include <iostream> 
#include <string> 

int main() {   
    std::string player1;
    std::string player2;
    std::cout << "Type rock, paper, or scissors: " << std::endl;
    std::cin >> player1;
    std::cout << "Type rock, paper, or scissors: " << std::endl;
    std::cin >> player2;
    if (player1 == "rock") {
        if (player2 == "scissors") {
            std::cout << "Player 1 wins. " << std::endl;
        } else if (player2 == "paper") {
            std::cout << "Player 2 wins. " << std::endl;
        } else if (player2 == "rock") {
            std::cout << "Draw. " << std::endl;
        } else {
            std::cout << "Error." << std::endl;
        }
    } else if (player1 == "scissors") {
        if (player2 == "scissors") {
            std::cout << "Draw. " << std::endl;
        } else if (player2 == "paper") {
            std::cout << "Player 1 wins. " << std::endl;
        } else if (player2 == "rock") {
            std::cout << "Player 2 Wins. " << std::endl;
        } else {
            std::cout << "Error." << std::endl;
        }
    } else if (player1 == "paper") {
        if (player2 == "scissors") {
            std::cout << "Player 2 wins. " << std::endl;
        } else if (player2 == "paper") {
            std::cout << "Draw. " << std::endl;
        } else if (player2 == "rock") {
            std::cout << "Player 1 wins. " << std::endl;
        } else {
            std::cout << "Error." << std::endl;
        }
    } else {
        std::cout << "Error" << std::endl;
    }
        
}