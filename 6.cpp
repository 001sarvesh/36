//  Using STL to check whether an array is empty or not.

#include <iostream>
#include <array>

int main() {
    std::array<int, 0> arr1; // Empty array
    std::array<int, 5> arr2 = {1, 2, 3, 4, 5}; // Non-empty array

    if (arr1.empty()) {
        std::cout << "arr1 is empty." << std::endl;
    } else {
        std::cout << "arr1 is not empty." << std::endl;
    }

    if (arr2.empty()) {
        std::cout << "arr2 is empty." << std::endl;
    } else {
        std::cout << "arr2 is not empty." << std::endl;
    }

    return 0;
}
