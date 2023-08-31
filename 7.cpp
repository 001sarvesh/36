// 7. Sort an array in ascending order using sort() function in C++ STL

#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {5, 2, 8, 1, 9};

    int size = sizeof(arr) / sizeof(arr[0]);

    std::sort(arr, arr + size);

    std::cout << "Sorted array in ascending order: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
