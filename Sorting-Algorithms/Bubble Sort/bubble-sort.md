# Bubble Sort

The bubble sort algorithm is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the entire list is sorted.

## Code Explanation

```cpp
void bubble_sort(vector<int>& v){
    bool sorted = false; // Variable to track if the vector is sorted
    int last = v.size() - 1; // Index of the last element

    while (not sorted){ // Repeat until the vector is sorted
        sorted = true; // Assume the vector is sorted

        for(int i = 0 ; i < last ; ++i){ // Iterate through the vector
            if(v[i] > v[i+1]){ // Check if adjacent elements are out of order
                swap(v[i],v[i+1]); // Swap the elements
                sorted = false; // Set sorted to false, indicating more sorting is required
            }
        }

        --last; // Decrement the index of the last element as it is now in its correct position
    }
}
```
## Bubble Sort

The `bubble_sort` function takes a reference to a vector of integers (`v`) as a parameter. This allows the function to modify the original vector.

The `sorted` variable is initialized as `false`. It serves as a flag to indicate whether the vector is sorted or not.

The `last` variable is set to the index of the last element in the vector (`v.size() - 1`).

The algorithm enters a loop that continues until the vector is sorted (`sorted` is `true`).

Inside the loop, the `sorted` variable is set to `true` initially, assuming that the vector is already sorted.

The `for` loop iterates through the vector from index 0 to `last - 1`.

Within the loop, it checks if the current element is greater than the next element.

If the elements are out of order, the `swap` function is used to swap them, and the `sorted` variable is set to `false`, indicating that the vector is not sorted yet.

After the inner loop completes, the `last` variable is decremented, as the last element is now in its correct sorted position.

The process continues until the vector is fully sorted (i.e., when `sorted` is `true`).

## Complexity Analysis

- The best-case time complexity of the bubble sort algorithm is $$O(n)$$ which occurs when the input vector is already sorted. In this case, the algorithm only requires a single pass through the vector to verify that it is sorted.

- The worst-case time complexity of the bubble sort algorithm is $$O(n^2)$$ which occurs when the input vector is in reverse order. In this case, the algorithm requires multiple passes through the vector, swapping adjacent elements to sort the vector.

- The average-case time complexity of the bubble sort algorithm is also $$O(n^2)$$, making it inefficient for large input sizes.

- The space complexity of the algorithm is $$O(1)$$ because it only requires a constant amount of additional space to store temporary variables.

Bubble sort is a simple and intuitive sorting algorithm, but it is not efficient for large datasets. Other sorting algorithms like merge sort or quicksort are typically preferred for better performance.
