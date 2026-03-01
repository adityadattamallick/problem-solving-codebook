/**
 * Selection Sort:
 * Time Complexity: 
 *   - Best Case: O(N^2)
 *   - Average Case: O(N^2)
 *   - Worst Case: O(N^2)
 * Explanation: Selection Sort repeatedly selects the minimum element from the unsorted part and swaps it with the current position.
 * It always performs N(N-1)/2 comparisons regardless of initial order.
 * Space Complexity: O(1)
 * No extra space is required beyond the input array.
 */

#include <iostream>

int *selectionSort(int arr[], int array_length) {
    for (int i = 0; i < array_length; i++) {
        int minimum_index = i; // Starting the minimum index at current index, starts at 0 index
        // Finding the index of the smallest element in the remaining array
        for (int j = minimum_index; j < array_length; j++) {
            // Comparing values
            if (arr[j] < arr[minimum_index]) {
                minimum_index = j; // Update the minimum index if smaller element is found
            }
        }
        // Swap the found minimum element with the first element of unsorted part
        int temp = arr[minimum_index];
        arr[minimum_index] = arr[i];
        arr[i] = temp;
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
    selectionSort(a, length);

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
