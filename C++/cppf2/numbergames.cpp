#include <iostream>


int main() {
    std::cout << "Please input a number: " << std::endl;
    int number1;
    std::cin >> number1;
    std::cout << "Please a larger number: " << std::endl;
    int number2; 
    std::cin >> number2;
    int total = 0; 
    for (int i = number1; i <= number2; i++) {
        total += i;
    }
    std::cout << "Sum: " << total << std::endl;
    std::cout << "Average: " << total/(number2-number1+1) << std::endl;

    total = 0;
    while (number1 <= number2) {
        total += number1;
        number1 += 1;
    }
    std::cout << "Sum: " << total << std::endl;
    std::cout << "Average: " << total/(number2-number1+1) << std::endl;

    std::cout << "Please input how many numbers you want to add: " << std::endl;
    int number;
    std::cin >> number;
    total = 0;
    for (int i = 0; i < number; i++) {
        std::cout << "Please input a number: " << std::endl;
        std::cin >> number1;
        total += number1;
    }
    std::cout << "Sum: " << total << std::endl;
    std::cout << "Average: " << total/(number) << std::endl;

    number2 = 0;
    total = 0;
    while (number2 < number) {
        std::cout << "Please input a number: " << std::endl;
        std::cin >> number1;
        total += number1;
        number2 += 1;
    }
    std::cout << "Sum: " << total << std::endl;
    std::cout << "Average: " << total/(number) << std::endl;




}
