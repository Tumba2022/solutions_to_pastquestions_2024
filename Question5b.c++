#include <iostream>

bool isPalindrome(int num) {
    int original = num, reversed = 0, remainder;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int num;
    std::cout << "Input a number: ";
    std::cin >> num;

    if (isPalindrome(num)) {
        std::cout << num << " is a palindrome number." << std::endl;
    } else {
        std::cout << num << " is not a palindrome number." << std::endl;
    }

    return 0;
}
