# Graph Implementation

This code implements a graph using an adjacency matrix representation. The program allows the user to input the number of vertices and edges of the graph, and then prompts for the edge data. It constructs the adjacency matrix, fills it with the provided edge information, and finally prints the adjacent vertices for each vertex.

## Code Explanation

The code can be divided into the following sections:

1. Variable Initialization:
   - `n` and `m` are initialized to hold the number of vertices and edges, respectively.

2. User Input:
   - The user is prompted to enter the number of vertices and edges of the graph.
   - The input is read using `cin` and stored in `n` and `m` variables.

3. Adjacency Matrix Declaration:
   - The adjacency matrix `Matrix` is declared as a vector of vectors.
   - The size of `Matrix` is set to `n` to accommodate `n` vertices.

4. Filling the Graph:
   - The user is prompted to input the edges of the graph.
   - A loop iterates `m` times to read the edge data.
   - For each edge, the user is asked to input the vertices `x` and `y`.
   - The vertices are added to each other's list of adjacent vertices in the adjacency matrix.

5. Printing the Graph:
   - Another loop iterates `n` times to print the adjacent vertices for each vertex.
   - The adjacent vertices of each vertex `i` are accessed using `Matrix[i]`.
   - A nested loop is used to iterate over the adjacent vertices and print them.
   - The adjacent vertices are printed on a single line, separated by spaces.
   - A newline is printed to move to the next line for the next vertex.

## Usage
- Compile and run the code in a C++ compiler.
- Follow the prompts to input the number of vertices and edges of the graph.
- Provide the edge data as pairs of vertices.
- The program will output the adjacent vertices for each vertex in the graph.

## Example

Here's an example of how the program can be used:

```
Insert the number of vertices in the graph:
5
Insert the number of edges in the graph:
6
Insert the data for the graph:
Insert the edges of the graph (x, y):
0 1
Insert the edges of the graph (x, y):
0 2
Insert the edges of the graph (x, y):
1 2
Insert the edges of the graph (x, y):
1 3
Insert the edges of the graph (x, y):
2 3
Insert the edges of the graph (x, y):
3 4

Adjacent vertices of 0: 1 2
Adjacent vertices of 1: 0 2 3
Adjacent vertices of 2: 0 1 3
Adjacent vertices of 3: 1 2 4
Adjacent vertices of 4: 3
```
This example demonstrates the construction of a graph with 5 vertices and 6 edges. The adjacent vertices for each vertex are then printed.

## Further Improvements
- Error handling can be added to validate user input and handle cases where incorrect values are entered.
- The code can be optimized by using a more efficient data structure for storing the adjacency matrix, such as a flat vector.
- Additional functions can be implemented to perform various operations on the graph, such as finding the shortest path between two vertices or checking if the graph is connected.


