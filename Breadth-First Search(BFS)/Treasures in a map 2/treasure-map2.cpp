// Tresaures in a map 2
// . empty path
// X obstacle
// t treasure

#include <iostream>
#include <vector>
#include <queue> // Necessary estructure in BFS (FIFO)

using namespace std;

// Possible directions to move
vector<pair<int, int> > directions;

// Initialize the directions vector
void initializeDirections() {
    directions.push_back(make_pair(0, 1));
    directions.push_back(make_pair(0, -1));
    directions.push_back(make_pair(1, 0));
    directions.push_back(make_pair(-1, 0));
}

// Return TRUE if it is on the limit of the matrix
bool limited(vector<vector<char> >& T, int r, int c) {
    return r >= 0 && c >= 0 && r < int(T.size()) && c < int(T.size());
}


// BFS Algorithm that returns the minimum distance to the treasure
int treasure_bfs(vector< vector<char> >& M, int i ,int j){
    vector< vector<bool> > vis(M.size(), vector<bool>(M[0].size(),false));

    // queue -> pair ( pair(x,y) , int ->DISTANCE)
    queue<pair<pair<int, int>, int> > q;

    q.push(make_pair(make_pair(i,j),0));  // initially I haven't spent any energy -> distance = 0

    int x,y; 
    int d; // Distance to increase 

    while(not q.empty()){

        // Collect data of the elements
        x = q.front().first.first;  // x equals to i
        y = q.front().first.second; // y equals to j

        d = q.front().second; // actual distance

        q.pop(); // deleting the element

        if(M[x][y]== 't'){
            return d; // if it finds the trasure, return the distance
        }else if(not vis[x][y]){
            vis[x][y] = true; // (x,y) as visited

            // Moving through the map
            for(auto&c : directions){
                int new_i,new_j; // new inital positions i,j
                new_i = x + c.first;
                new_j = y + c.second;
                if(limited(M,new_i,new_j) and  M[new_i][new_j] != 'X'){
                    q.push(make_pair(make_pair(new_i,new_j),d+1));
                }
            }
        }
    }

    return -1; // Not possible to achieve a treasure
}


int main() {
    //initializeDirections();

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

    int distance = treasure_bfs(T ,r-1 , c-1);

    if(distance == -1){
        cout << "No treasure can be reached \n";
    }else{
        cout << "Minimum distance: " << distance << endl;
    }

    return 0;
}
