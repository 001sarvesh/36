// 5. C++ STL program to demonstrate example of array::rbegin() and array::rend()
// functions

#include <iostream>
#include <array>

int main() {
    // Creating an array of integers
    std::array<int, 5> arr = {10, 20, 30, 40, 50};

    // Printing the array in reverse order using rbegin() and rend()
    std::cout << "Array elements in reverse order: ";
    for (auto it = arr.rbegin(); it != arr.rend(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
