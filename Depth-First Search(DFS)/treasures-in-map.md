## Treasure Hunt Program

Write a program that determines if it is possible to reach any treasure from a given initial position on a map. The program takes a map as input, which includes treasures and obstacles, and outputs whether it is possible to reach any treasure.

### Input

The input consists of the following:

- The number of rows, `n` (> 0), and the number of columns, `m` (> 0), of the map.
- `n` rows, each containing `m` characters. A dot (`.`) indicates an empty position, an "x" indicates an obstacle, and a "t" indicates a treasure.
- Two integers `r` and `c`, indicating the initial row and column (both starting at 1) from where we should start searching for treasures. The initial position is always empty.

### Output

The program should output either "yes" or "no" depending on whether it is possible or not to reach any treasure from the initial position.

### Constraints

- The map will have at least one empty position and one treasure.
- The allowed movements are horizontal or vertical, but not diagonal.

### Example

Input:
```
4 4

....
.x.x
..t.
....

3 2
```
Output:
```
Yes
```
In the given example, it is possible to reach the treasure indicated by "t" starting from the initial position (3, 2).