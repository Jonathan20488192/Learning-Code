#include "person.h"

Person::Person() : name("Name"), age(10), height(60) {}

Person::Person(std::string n, int a, int h) :
    name(n), 
    age(a), 
    height(h) 
{}


std::string Person::heightConversion() {
    return "Height: " + std::to_string(height/12) + "'" + std::to_string(height%12) + "\"";
}

std::string Person::toString() {
    return "Name: " + name + ", Age: " + std::to_string(age) + ", " + heightConversion();
}

std::string Person::getName() {
    return name;
}

int Person::getAge() {
    return age;
}

int Person::getHeight() {
    return height;
}

void Person::setName(std::string n) {
    name = n;
}

void Person::setAge(int a) {
    age = a;
}

void Person::setHeight(int h) {
    height = h;
}

