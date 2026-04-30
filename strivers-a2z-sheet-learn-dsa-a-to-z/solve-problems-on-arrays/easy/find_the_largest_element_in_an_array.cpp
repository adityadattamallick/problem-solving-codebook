/**
 * Finding the Largest Element in an Array:
 * Time Complexity:
 *   - Best Case: O(N)
 *   - Average Case: O(N)
 *   - Worst Case: O(N log N) {If using brute force: sorting the array first in ascending order, then using the last element as the largest}
 * Explanation: Checking each element uses one loop and it checks for "N" number of time, hence, O(N).
 * Sorting first in ascending or descending order takes O(N log N) time, and then print the largest accordingly being the last or first element of the array
 * In this case, using the std::sort which is a built-in sorting algorithm provided by the STL <algorithm> header, yields to O(N log N) time complexity.
 *
 * Space Complexity: O(1)
 * Only a constant amount of extra space is used (for temporary swapping), independent of input size.
 */

#include <iostream>

int largestElementInAnArray(int arr[], int array_length) {
    int largest = 0;
    for (int i = 0; i < array_length; i++) {
        if (arr[i] >= largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int a[] = {1, 5, 9, 7, 3, 2, 8, 12, 15, 14, 16, 1299, 176, 31};
    int length = sizeof(a) / sizeof(a[0]); // Array length

    // Printing the given array
    std::cout << "Given array: [";
    for (int i = 0; i < length; i++) {
        std::cout << a[i];
        if (i < length - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;

    int largest_element = largestElementInAnArray(a, length);
    std::cout << "The largest element in the given array is: " << largest_element << std::endl;
    return 0;
}
