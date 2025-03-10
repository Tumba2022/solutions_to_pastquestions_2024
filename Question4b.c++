#include <iostream>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    int n, i, target;

    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    int arr[n];

    std::cout << "Enter " << n << " elements:\n";
    for (i = 0; i < n; i++) {
        std::cout << "Element-" << i + 1 << ": ";
        std::cin >> arr[i];
    }

    std::cout << "Enter the target value to find: ";
    std::cin >> target;

    int position = linearSearch(arr, n, target);
    if (position != -1)
        std::cout << "The target value " << target << " is found at position: " << position + 1 << std::endl;
    else
        std::cout << "The target value " << target << " is not found in the array." << std::endl;

    return 0;
}
