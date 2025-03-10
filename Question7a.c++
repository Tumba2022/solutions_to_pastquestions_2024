#include <iostream>

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    std::cout << "Input the number: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Error! Factorial of a negative number doesn't exist." << std::endl;
    } else {
        std::cout << "The factorial of " << num << " is: " << factorial(num) << std::endl;
    }

    return 0;
}
