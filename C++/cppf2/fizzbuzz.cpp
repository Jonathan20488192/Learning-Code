#include <iostream>

int main() {
    for (int i = 1; i <= 50; i++) {
        if (i%3 == 0 || i%5 == 0) {
            if (i%5 != 0) {
                std::cout << "Fizz" << std::endl;
            } else if (i%3 != 0) {
                std::cout << "Buzz" << std::endl;
            } else {
                std::cout << "FizzBuzz" << std::endl;
            }

        } else {
            std::cout << i << std::endl;
        }
    }
}