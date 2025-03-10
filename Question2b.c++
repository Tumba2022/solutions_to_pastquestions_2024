#include <iostream>

int main() {
    int n, i, sum = 0;

    std::cout<<"Enter the number of elements in the array:";
    std::cin>>n;

    int arr[n];

    std::cout<<"Enter" <<n<< "elements:";
    for (i = 0; i < n; i++) {
        std::cout<<"Element: " << i + 1<< ":";
        std::cin>>arr[i];
        sum += arr[i];
    }

    std::cout<<"Sum of all elements in the array is:"<<sum<<std::endl;

    return 0;
}
