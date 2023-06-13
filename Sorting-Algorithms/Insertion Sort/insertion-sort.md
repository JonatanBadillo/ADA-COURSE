# Insertion Sort Algorithm

The insertion sort algorithm is a simple comparison-based sorting algorithm. It works by dividing the input into a sorted and an unsorted region. Initially, the sorted region contains only the first element of the input, and the unsorted region contains the remaining elements. The algorithm iterates through the unsorted region, taking one element at a time and inserting it into the correct position within the sorted region. This process is repeated until the entire input is sorted.

## Algorithm Steps

1. Start with an unsorted vector of elements.
2. Iterate through the vector starting from the second element (index 1) to the last element.
3. For each iteration, consider the current element as the key to be inserted into the sorted region.
4. Store the current element in a temporary variable, `x`.
5. Initialize a variable, `j`, to the index of the current element.
6. Compare the key (`x`) with the elements in the sorted region, moving from right to left.
7. While `j` is greater than 0 and the element at position `j-1` is greater than `x`, shift the element to the right.
8. Decrement `j` by 1 to move to the previous position.
9. Repeat steps 7 and 8 until either `j` becomes 0 or the element at position `j-1` is not greater than `x`.
10. Insert the key (`x`) at position `j`, which is the correct position in the sorted region for the current element.
11. Repeat steps 4 to 10 for the remaining elements in the unsorted region.
12. After iterating through all elements, the vector will be sorted.

## Pseudocode

```
InsertionSort(vector):
    for i = 1 to n-1
        x = vector[i]
        j = i
        while j > 0 and vector[j-1] > x
            vector[j] = vector[j-1]
            j = j - 1
        vector[j] = x
```


In the pseudocode above, `vector` represents the input vector to be sorted, and `n` is the size of the vector.

## Example

Let's walk through an example to understand how the insertion sort algorithm works:

Input: [6, 5, 8, 3, 1]

1. Initially, the first element (6) is considered as the sorted region.
2. The next element (5) is chosen as the key to be inserted into the sorted region.
3. Since 5 is less than 6, we shift 6 to the right and insert 5 at the first position.
   Sorted region: [5, 6], Unsorted region: [8, 3, 1]
4. The next element (8) is greater than the last element in the sorted region (6), so no shifting is needed.
   Sorted region: [5, 6, 8], Unsorted region: [3, 1]
5. The next element (3) is less than the last element in the sorted region (8).
   We shift 8 to the right, then shift 6 to the right, and finally insert 3 at the first position.
   Sorted region: [3, 5, 6, 8], Unsorted region: [1]
6. The next element (1) is less than all the elements in the sorted region (3, 5, 6, 8).
   We shift all the elements to the right and insert 1 at the first position.
   Sorted region: [1, 3, 5, 6, 8], Unsorted region: []

The final sorted vector is [1, 3, 5, 6, 8].

## Complexity Analysis

The time complexity of the insertion sort algorithm is 
$$O(n^2)$$ 
in the worst case, where n is the number of elements in the input vector. The best case time complexity is $$O(n)$$ when the input is already sorted. The space complexity is $$O(1)$$ since the sorting is performed in-place without requiring additional memory.

Insertion sort is efficient for small-sized or partially sorted lists, but it becomes inefficient for large lists compared to more advanced sorting algorithms like merge sort or quicksort.
