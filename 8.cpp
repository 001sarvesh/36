// . Sort an array in descending order using sort() function in C++ STL

#include <iostream>
#include <algorithm>

bool compare(int a, int b) {
    return a > b; // Compare in descending order
}

int main() {
    int arr[] = {5, 2, 8, 1, 9};

    int size = sizeof(arr) / sizeof(arr[0]);

    std::sort(arr, arr + size, compare);

    std::cout << "Sorted array in descending order: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
