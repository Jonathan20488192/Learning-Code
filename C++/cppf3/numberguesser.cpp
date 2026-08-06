#include <iostream> 

int random(int a, int b);
void rungame();

int main() {
    srand(time(0));
    rungame();
}

int random(int a, int b) {
    return (rand()%(b-a+1))+a;
}

void rungame() {
    std::cout << "You have 5 guesses to guess the number!" << std::endl;
    int number;
    int low;
    int high;
    std::cin >> low;
    std::cin >> high;
    int number1 = random(low, high);
    for (int i = 0; i < 5; i++) {
        std::cin >> number;
        if (number == number1) {
            std::cout << "You win!" << std::endl;
            return; 
        } else if (number > number1) {
            std::cout << "Incorrect, your number is higher than the correct number. " << std::endl;
        } else {
            std::cout << "Incorrect, your number is lower than the correct number. " << std::endl;
        }
    }
    std::cout << "You lose. " << std::endl;
    return;
}