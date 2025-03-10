#include <iostream>

int main() {
    int n, i, j, temp;

    std::cout<<"Enter the number of elements to be stored in the array: ";
    std::cin>>n;

    int arr[n];

    std::cout<<"Enter"<<n<< "elements in the array:";
    for (i = 0; i < n; i++) {
        std::cout<<"Element-: "<<i + 1<<";";
        std::cin>>arr[i];
    }

    // Bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    std::cout<<"After sorting, the array is:";
    for (i = 0; i < n; i++) {
        std::cout<<arr[i]<<std::endl;
    }

    return 0;
}

