// . empty path
// X obstacle
// t treasure

#include <iostream>
#include <vector>

using namespace std;

// Possible directions to move
vector<pair<int, int> > directions;

// Initialize the directions vector
void initializeDirections() {
    directions.push_back(make_pair(0, 1));
    directions.push_back(make_pair(0, -1));
    directions.push_back(make_pair(-1, 0));
    directions.push_back(make_pair(1, 0));
}

// Return TRUE if it is on the limit of the matrix
bool limited(vector<vector<char> >& T, int r, int c) {
    return r >= 0 && c >= 0 && r < int(T.size()) && c < int(T.size());
}

// DFS algorithm - boolean
// TRUE if can reach the treasure with the initial position 
// Parameters: T(matrix), r(initial row), c(initial column)
bool treasure_dfs(vector<vector<char> >& T, int r, int c) {
    // BASIC CASES
    if (T[r][c] == 't') {
        return true; // initial position is in the treasure
    } else if (T[r][c] == 'X') {
        return false; // initial position is in the X
    }

    // initial position is in '.'
    T[r][c] = 'X'; // Visited

    // Moving through the matrix
    for (int i = 0; i < directions.size(); i++) {
        int adj_r = r + directions[i].first;
        int adj_c = c + directions[i].second;

        // (adj_r, adj_c) new position 
        if (limited(T, adj_r, adj_c) && treasure_dfs(T, adj_r, adj_c)) {
            return true;
        }
    }

    return false; // Default case
}

int main() {
    initializeDirections();

    int n; // number of rows
    int m; // number of columns
    cout << "Insert the number of rows: \n";
    cin >> n;
    cout << "Insert the number of columns: \n";
    cin >> m;

    vector<vector<char> > T(n, vector<char>(m)); // Declaration of matrix T[n,m]

    cout << "Fill the matrix: \n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> T[i][j]; // Reading the elements of the matrix
        }
    }

    int r; // initial row
    int c; // initial column

    cout << "Insert the initial row: \n";
    cin >> r;
    cout << "Insert the initial column: \n";
    cin >> c;

    bool answer = treasure_dfs(T, r - 1, c - 1);

    if (answer) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
