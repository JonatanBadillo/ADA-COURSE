# Treasure Hunt Program 2

## Description

Write a program that, given a map with treasures and obstacles, calculates the distance from a given initial position to the nearest accessible treasure. The allowed movements are horizontal or vertical, but not diagonal.

## Input

The input consists of the following:

1. The number of rows `n` (> 0) and the number of columns `m` (> 0) of the map.
2. Followed by `n` rows with `m` characters each. The characters represent the map:
   - A period (.) indicates an empty position.
   - An "X" indicates an obstacle.
   - A "t" indicates a treasure.
3. Finally, two numbers `r` and `c` indicate the initial row and column (both starting at 1) where we should start searching for treasures. You can assume that `r` is between 1 and `n`, that `c` is between 1 and `m`, and that the initial position is always empty.

## Output

Print the minimum number of steps to reach a treasure from the initial position. If there are no accessible treasures, indicate it.

## Example

### Input
```
7 6 

......
..xxx.
......
tx..x.
.x..xt
.xx...
..t...

5 3
```

### Output
```
minimun distance: 4
```

## Example 2 

### Input
```
4 10

..t...x...
.....x..t.
xxxxx.x...
.......x.t

4 1
```

### Output
```
no treausre can be reached
```

In the given example, the map is a 5x5 grid with treasures represented by "t" and obstacles represented by "X". The initial position to start searching for treasures is at row 3, column 2. The minimum number of steps to reach the nearest accessible treasure is 3.


