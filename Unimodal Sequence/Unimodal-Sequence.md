# Unimodal Sequence
An unimodal permutation refers to a sequence of numbers that first increases up to a certain point (the peak or maximum value), and then decreases from that point onwards.

The program aims to find the maximum value in a given unimodal sequence. It uses a divide and conquer approach, specifically a modified version of binary search, to efficiently locate the maximum value.

## The Top

The top function takes three parameters: the input vector v, and the indices inicio (start) and final (end) which represent the range of the subsequence being considered.

The program follows these steps to find the maximum value:

1. It checks if the size of the subsequence `(final - inicio + 1)` is less than or equal to 2. If so, it returns the maximum of the two values in that subsequence.

2. If the size is greater than 2, it calculates the index of the middle element (medio) in the subsequence.

3. It compares the value at index `medio` with the value at index `medio + 1`. If the value at `medio` is less than the value at `medio + 1`, it means the maximum value is located in the right half of the subsequence. The function is recursively called with the right half as the new subsequence.

4. If the condition in step 3 is not true, it means the maximum value is located in the left half of the subsequence. The function is recursively called with the left half as the new subsequence.

5. If neither of the conditions in steps 3 and 4 is true, it means the value at medio is the maximum value, as it is greater than both its neighboring elements. The function returns this value as the result.