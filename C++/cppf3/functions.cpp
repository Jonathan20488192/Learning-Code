#include <iostream>

int add(int a, int b);

int main() {
    std::cout << add(1,2) << std::endl;
}

int add(int a, int b) {
    return a + b;
}