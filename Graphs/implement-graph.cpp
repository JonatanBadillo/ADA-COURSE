// Implementing a graph

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n; // number of vertices in the graph
    int m; // number of edges in the graph

    cout << "Insert the number of vertices in the graph: \n";
    cin >> n;
    cout << "Insert the number of edges in the graph: \n";
    cin >> m;

    // Declaring the adjacency matrix
    vector< vector<int> > Matrix(n); // graph G

    // Filling the graph
    cout << "Insert the data for the graph: \n";

    for(int i = 0 ; i< m ; ++i){
        int x, y;
        cout << "Insert the edges of the graph (x, y): \n";
        cin >> x >> y; // Reading edges (x, y)

        Matrix[x].push_back(y); // Adding y to the list of adjacent vertices for x
        Matrix[y].push_back(x); // Adding x to the list of adjacent vertices for y
    }

    // Printing the graph
    for(int i = 0 ; i< m ; ++i){
        int x, y;
        cout << "Adjacent vertices of " << i << ": ";
        for (int j = 0; j < Matrix[i].size(); ++j){
            cout << Matrix[i][j] << ' '; // Printing the adjacent vertices of vertex i
        }
        cout << endl; // Moving to the next line for the next vertex
    }
}
