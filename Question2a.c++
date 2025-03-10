#include <iostream>

int main() {
    int num, i, isPrime = 1;

    std::cout<<"Enter a number: ";
    std::cin>>num;

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        std::cout<<num<< "is a prime number";
    else
        std::cout<<num<<  "is not a prime number.";

    return 0;
}
