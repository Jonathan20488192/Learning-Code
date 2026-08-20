#include "cat.h"
#include <iostream>

int main() {
    auto test = Cat();
    std::cout << test.toString() << std::endl;
    test.setAge(15);
    test.setBreed("test2");
    std::cout << test.toString() << std::endl;
}