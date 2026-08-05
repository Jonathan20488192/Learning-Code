#include <iostream>

int add(int a, int b);
float average(float a, float b);
bool even(int a);
double smallest(double a, double b, double c);
int factorial(int a);
int exponent(int a, int b);

int main() {
    std::cout << add(1,2) << std::endl;
    std::cout << average(1,2) << std::endl;
    std::cout << even(2) << std::endl;
    std::cout << smallest(1,2,3) << std::endl;
    std::cout << factorial(4) << std::endl;
    std::cout << exponent(2,5) << std::endl;
}

int add(int a, int b) {
    return a + b;
}

float average(float a, float b) {
    return (a + b)/2;
}

bool even(int a) {
    if (a%2 == 0) {
        return true;
    } else {
        return false;
    }
}

double smallest(double a, double b, double c) {
    if (a < b) {
        if (a < c) {
            return a;
        } else{
            return c;
        }
    } else {
        if (b < c) {
            return b;
        } else {
            return c;
        }
    }
}

int factorial(int a) {
    int total = 1;
    for (int i = 1; i <= a; i++) {
        total *= i;
    }
    return total; 
}

int exponent(int a, int b) {
    int total = 1;
    for (int i = 1; i <= b; i++) {
        total *= a;
    }
    return total;
}
