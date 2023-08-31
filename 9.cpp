//  9. C++ program to find the integers which come an odd number of times in an array
// using C++ STL

#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> findOddOccurrences(const std::vector<int>& arr) {
    std::unordered_map<int, int> countMap;

    // Count the occurrences of each integer
    for (int num : arr) {
        countMap[num]++;
    }

    std::vector<int> oddOccurrences;

    // Check if the count is odd and add to the result vector
    for (const auto& pair : countMap) {
        if (pair.second % 2 != 0) {
            oddOccurrences.push_back(pair.first);
        }
    }

    return oddOccurrences;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 2, 3, 1, 5};

    std::vector<int> oddOccurrences = findOddOccurrences(arr);

    std::cout << "Integers occurring an odd number of times: ";
    for (int num : oddOccurrences) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
