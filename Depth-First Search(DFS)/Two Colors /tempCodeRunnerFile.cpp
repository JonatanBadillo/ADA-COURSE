#include <iostream>
#include <vector>

using namespace std;

// Verifying if it is colorable
bool is_two_colorable(const vector<vector<int> >& G, vector<int>& color, int u, int old_u) {
    if (color[u] == 0) {
        color[u] = color[old_u] % 2 + 1; // Changing different colors for vertex u
        for (int i : G[u]) {
            if (!is_two_colorable(G, color, i, u)) {
                return false;
            }
        }
        return true;
    }
    else {
        return color[u] != color[old_u]; // Return true if colors are distinct, false if they are the same
    }
}

// Algorithm that traverses the entire graph with DFS
bool dfs(const vector<vector<int> >& G) {
    int n = G.size();
    vector<int> color(n, 0); // Color vector for each vertex
    for (int i = 0; i < n; i++) {
        if (color[i] == 0 && !is_two_colorable(G, color, i, i)) {
            return false;
        }
    }
    return true;
}

int main() {
    int n; // Number of vertices
    int m; // Number of edges
    cout << "Insert the number of vertices and edges (Example: 2 1): \n";

    while (cin >> n >> m) {
        vector<vector<int> > G(n); // Declaring graph G with n vertices
        int x, y; // Two vertices
        cout << "Insert the pairs of edges (x, y): \n";
        for (int i = 0; i < m; ++i) {
            cin >> x >> y; // Read pair (x, y)
            G[x].push_back(y);
            G[y].push_back(x);
        }
        // The graph G is complete

        bool two_colorable = dfs(G);
        if (two_colorable) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
