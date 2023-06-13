# Merge Sort

Merge Sort is a recursive sorting algorithm that follows the divide-and-conquer approach to sort an array or a list. It works by dividing the input into smaller subarrays, sorting them, and then merging them back together to obtain a sorted array.

## Algorithm Steps

The Merge Sort algorithm can be divided into the following steps:

1. **Divide**: The input array is divided into two halves until each subarray contains only one element. This process is performed recursively until we reach the base case of single-element subarrays.

2. **Merge**: The sorted subarrays are then merged back together to produce a single sorted array. This is done by comparing the elements from the two subarrays and placing them in the correct order in a temporary array. The temporary array is then copied back to the original array.

3. **Repeat**: Steps 1 and 2 are repeated for each level of recursion until the entire array is sorted.

## Pseudocode

The following pseudocode outlines the Merge Sort algorithm:
```
mergeSort(arr, left, right)
    if left < right
    mid = (left + right) / 2
    mergeSort(arr, left, mid)
    mergeSort(arr, mid + 1, right)
    merge(arr, left, mid, right)

merge(arr, left, mid, right)
    n1 = mid - left + 1
    n2 = right - mid
    create temp arrays L[1..n1] and R[1..n2]
    copy data to temp arrays L[] and R[]
    i = 1, j = 1, k = left
    while i <= n1 and j <= n2
        if L[i] <= R[j]
            arr[k] = L[i]
            i = i + 1
        else
            arr[k] = R[j]
            j = j + 1
            k = k + 1
    copy the remaining elements of L[], if any
    copy the remaining elements of R[], if any
```


## Complexity Analysis

Merge Sort has a time complexity of $$O(n log n)$$ in all cases, where n is the number of elements to be sorted. The algorithm has a space complexity of O(n) since it requires auxiliary space for merging the subarrays.

## Advantages and Disadvantages

**Advantages:**
- Merge Sort guarantees a stable sorting algorithm, meaning that the order of equal elements is preserved.
- It performs well on large datasets due to its efficient time complexity.
- Merge Sort is widely used as a building block for other sorting algorithms.

**Disadvantages:**
- Merge Sort requires additional space to store the merged subarrays, which can be a concern when dealing with limited memory.
- It has a relatively higher space complexity compared to other sorting algorithms.
- The recursive nature of Merge Sort can lead to overhead and stack overflow issues on very large inputs if not implemented carefully.

Merge Sort is a reliable and efficient sorting algorithm that provides consistent performance and is widely used in practice.
