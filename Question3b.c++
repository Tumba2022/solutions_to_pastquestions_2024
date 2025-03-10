#include <iostream>

int main() {
    int numbers[10], i, sum = 0;
    float average;

    std::cout << "Enter 10 numbers:\n";
    for (i = 0; i < 10; i++) {
        std::cout << "Number-" << i + 1 << ": ";
        std::cin >> numbers[i];
        sum += numbers[i];
    }

    average = static_cast<float>(sum) / 10.0f;

    std::cout << "The sum of the 10 numbers is: " << sum << std::endl;
    std::cout << "The average is: " << average << std::endl;

    return 0;
}
