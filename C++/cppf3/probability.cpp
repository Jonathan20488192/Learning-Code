#include <iostream>
#include <string>


std::string coin();
int dice();
std::string card();

int main() {
    srand(time(0));
    std::cout << coin() << std::endl;
    std::cout << dice() << std::endl;
    std::cout << card() << std::endl;
}

std::string coin() {
    int flip = rand()%2;
    if (flip == 0) {
        return "Heads";
    } else {
        return "Tails";
    }
}

int dice() {
    return (rand()%6+1) + (rand()%6+1);
}

std::string card() {
    int number = rand()%13+1;
    int suit = rand()%4;
    std::string suit1;
    std::string number1;
    if (suit == 0) {
        suit1 = "Spades";
    } else if (suit == 1) {
        suit1 = "Hearts";
    } else if (suit == 2) {
        suit1 = "Diamonds";
    } else {
        suit1 = "Clubs";
    }
    if (number == 13) {
        number1 = "King";
    } else if (number == 12) {
        number1 = "Queen";
    } else if (number == 11) {
        number1 = "Jack";
    } else if (number == 1) {
        number1 = "Ace";
    } else {
        number1 = std::to_string(number);
    }
    return number1 + " of " + suit1;
}