#include "point.h"

Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(int a, int b) {
    x = a;
    y = b;
}

std::string Point::toString() {
    return "The x is: " + std::to_string(x) + ". The y is: " + std::to_string(y);
}

int Point::getX() {
    return x;
}

int Point::getY() {
    return y;
}

void Point::setX(int a) {
    x = a;
}

void Point::setY(int a) {
    y = a;
}