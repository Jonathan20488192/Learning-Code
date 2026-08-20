#include "person.h"
#include <iostream>

int main() {
    auto test = Person();
    std::cout << test.toString() << std::endl;
    std::cout << test.getAge() << std::endl;
    std::cout << test.getName() << std::endl;
    std::cout << test.getHeight() << std::endl;
    test.setAge(5);
    test.setHeight(30);
    test.setName("test2");
    std::cout << test.toString() << std::endl;
}