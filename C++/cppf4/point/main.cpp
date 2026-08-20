#include <iostream> 
#include "point.h"

int main() {
    // auto p1 = Point();
    auto p2 = Point(1, 2);
    std::cout << p2.getX() << std::endl;
    std::cout << p2.getY() << std::endl;
    p2.setX(5);
    p2.setY(7);
    std::cout << p2.getX() << std::endl;
    std::cout << p2.getY() << std::endl;
    std::cout << p2.toString() << std::endl;
}