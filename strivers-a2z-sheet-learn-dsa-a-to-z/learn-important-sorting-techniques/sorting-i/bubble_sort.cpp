/**
 * Bubble Sort:
 * Time Complexity:
 *   - Best Case: O(N); if the array is already sorted (optimized version with a swapped flag)
 *   - Average Case: O(N^2)
 *   - Worst Case: O(N^2)
 * Explanation: Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order.
 * Each pass "bubbles" the largest unsorted element to its correct position.
 * It uses two nested loops (or one loop with repeated passes), leading to approximately N(N-1)/2 comparisons in the average/worst case.
 *
 * Space Complexity: O(1)
 * Only a constant amount of extra space is used (for temporary swapping), independent of input size.
 */

#include <iostream>

int *bubbleSort(int arr[], int array_length) {
    bool swapped = true; // Using this flag to make the solution optimal
    for (int i = 0; i < array_length - 1; i++) {
        for (int j = 0; j < array_length - i - 1; j++) {
            // Comparing values and updating
            if (arr[j + 1] < arr[j]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
        // Using this to make the solution optimal
        if (!swapped) break;
    }
    return arr;
}

int main() {
    int a[] = {1, 5, 9, 7, 3, 2, 8, 12, 14};
    int length = sizeof(a) / sizeof(a[0]); // Array length

    // Printing the given array
    std::cout << "Given array:  [";
    for (int i = 0; i < length; i++) {
        std::cout << a[i];
        if (i < length - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
    bubbleSort(a, length);

    std::cout << "Sorted array: [";
    // Printing the sorted elements
    for (int i = 0; i < length; i++) {
        std::cout << a[i];
        if (i < length - 1)
            std::cout << ", ";
        else
            std::cout << "]\n";
    }
    return 0;
}
