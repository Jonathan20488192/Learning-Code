#include <iostream>
#include <string>

int main() {
    std::cout << "Enter a noun:" << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "Enter a number:" << std::endl;
    std::string number;
    std::cin >> number;
    std::string sentence = "My name is " + name + " and I've known Sarah and Steven for " + number + " years.";
    std::cout << sentence << std::endl;
}