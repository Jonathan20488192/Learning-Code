#include <iostream>
#include <string>

int main() {
    std::cout << "Please put the current temperature in fahrenheit: " << std::endl;
    int temperature;
    std::cin >> temperature;
    std::cout << (temperature - 32)/1.8 << std::endl;

    std::cout << "Please put an amount in dollars:  " << std::endl;
    int money;
    std::cin >> money;
    std::cout <<  money * 163.84 << std::endl;

    std::cout << "Please put an amount in dollars:  " << std::endl;
    std::cin >> money;
    std::cout <<  money * 6.77 << std::endl;
}