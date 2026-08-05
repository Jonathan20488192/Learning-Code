#include <iostream> 

int main() {
    srand(1);
    for (int i=0; i < 5; i++) {
        std::cout << (rand() % 50) + 15 << std::endl;
        std::cout << time(0) << std::endl;
    }
}