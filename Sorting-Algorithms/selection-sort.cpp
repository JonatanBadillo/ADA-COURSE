// Selection Sort

#include <iostream>
#include <vector>

using namespace std;

// Function to find the index of the minimum element in a vector 
int pos_min(const vector<int>& v, int left, int right) {
    int pos = left;
    for (int i = left; i <= right; ++i) {
        if (v[i] < v[pos]) {
            pos = i;
        }
    }
    return pos;
}

// Function to perform selection sort on a vector
void selection_sort(vector<int>& v) {
    int last = v.size() - 1;
    for (int i = 0; i < last; ++i) {
        // Find the index of the minimum element in the unsorted part of the vector
        int k = pos_min(v, i, last);
        // Swap the minimum element with the current element at index i
        swap(v[k], v[i]);
    }
}

int main() {
    int n;
    cout << "Insert the size of the vector: \n";
    cin >> n;
    vector<int> my_vector(n);

    cout << "Insert the data of the vector: \n";
    for (int i = 0; i < n; i++) {
        cin >> my_vector[i];
    }

    cout << "The data of the vector without sorting: \n";
    for (int i = 0; i < n; i++) {
        cout << my_vector[i] << " ";
    }
    cout << endl;

    // Perform selection sort on the vector
    selection_sort(my_vector);

    cout << "The data of the vector with selection sort: \n";
    for (int i = 0; i < n; i++) {
        cout << my_vector[i] << " ";
    }
    cout << endl;
}
