#include "cat.h"

Cat::Cat() : name("Name"), breed("Breed"), age(10), color("Color") {}

Cat::Cat(std::string n, std::string b, int a, std::string c) : 
    name(n), 
    breed(b), 
    age(a), 
    color(c) 
{}

void Cat::setAge(int a) {
    age = a;
}

void Cat::setBreed(std::string b) {
    breed = b;
}

std::string Cat::toString() {
    return "Name: " + name + ", Breed: " + breed + ", Age: " + std::to_string(age) + ", Color: " + color;
}
