# Selection Sort Algorithm

Selection sort is a simple comparison-based sorting algorithm. It works by dividing the input array into two parts: the sorted part at the beginning and the unsorted part at the end. The algorithm repeatedly selects the smallest (or largest) element from the unsorted part and swaps it with the element at the beginning of the unsorted part. This process is repeated until the entire array is sorted.

## Algorithm Steps

The steps involved in the selection sort algorithm are as follows:

1. Find the minimum (or maximum) element in the unsorted part of the array.
2. Swap the minimum (or maximum) element with the first element of the unsorted part.
3. Move the boundary of the sorted part one element ahead.
4. Repeat steps 1-3 until the entire array is sorted.

![image](https://github.com/JonatanBadillo/ADA-COURSE/assets/120596087/2f8b5673-94bf-429f-9112-67f599d95775)


## Pseudocode

The pseudocode for the selection sort algorithm can be written as:

```
procedure selectionSort(arr: array)
n = length(arr)
for i from 0 to n-1
minIndex = i
for j from i+1 to n
if arr[j] < arr[minIndex]
minIndex = j
swap arr[i] and arr[minIndex]
end for
end procedure
```


## Time Complexity

The time complexity of the selection sort algorithm is O(n^2), where n is the number of elements in the array. This is because, in the worst case, the algorithm requires n-1 comparisons for each of the n elements.

## Space Complexity

The space complexity of the selection sort algorithm is O(1) since it only requires a constant amount of additional space for storing indices and temporary variables.


## Usage

Selection sort is suitable for small arrays or when the number of elements is very small compared to the computational resources available. It is not recommended for large or heavily unsorted arrays due to its relatively slow performance.


