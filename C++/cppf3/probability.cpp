#include <iostream>
#include <string>

std::string coin();
int dice();
std::string card();

int main() {
    srand(time(0));
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
    }
}