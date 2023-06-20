# Two Colors

Write a program that, given an undirected graph, determines if we can color all vertices with only two colors in such a way that no two neighboring vertices have the same color.

## Input

The input consists of several cases, each with the number of vertices `n` and the number of edges `m`, followed by `m` pairs `x y` indicating an edge between `x` and `y`. Assume that `1 ≤ n ≤ 104`, `0 ≤ m ≤ 5n`, that the vertices are numbered from 0 to `n - 1`, `x ≠ y`, and that there is at most one edge between any pair `x` and `y`.

## Output

For each case, output "YES" if the graph is two-colorable, and "NO" otherwise.

**Example:**
### Input
```
2 1
0 1

4 3
1 2  3 2  3 1

1 0

4 2
0 3  2 1

```
### Output
```
yes
no
yes
yes

```

The example shows a sample input with 2 vertices and 1 edge, and the corresponding output indicating that the graph can be colored with two colors. 