#include <iostream>

int main() {
    int num;
    std::cout << "Input a number (integer): ";
    std::cin >> num;

    if (num == 0) {
        std::cout << "The number is Zero." << std::endl;
    } else {
        std::string sign = (num > 0) ? "positive" : "negative";
        std::string parity = (num % 2 == 0) ? "even" : "odd";

        std::cout << "Number is " << sign << "-" << parity << "." << std::endl;
    }

    return 0;
}

