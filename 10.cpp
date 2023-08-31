// 0. Given an integer array nums , return an array answer such that answer[i] is equal to
// the product of all the elements of nums except nums[i] 

#include <iostream>
#include <vector>

std::vector<int> productExceptSelf(const std::vector<int>& nums) {
    int n = nums.size();

    // Create two arrays to store the left and right products
    std::vector<int> leftProducts(n, 1);
    std::vector<int> rightProducts(n, 1);

    // Calculate the left products
    for (int i = 1; i < n; ++i) {
        leftProducts[i] = leftProducts[i - 1] * nums[i - 1];
    }

    // Calculate the right products
    for (int i = n - 2; i >= 0; --i) {
        rightProducts[i] = rightProducts[i + 1] * nums[i + 1];
    }

    // Calculate the answer by multiplying left and right products
    std::vector<int> answer(n);
    for (int i = 0; i < n; ++i) {
        answer[i] = leftProducts[i] * rightProducts[i];
    }

    return answer;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};

    std::vector<int> answer = productExceptSelf(nums);

    std::cout << "Resulting array: ";
    for (int num : answer) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
