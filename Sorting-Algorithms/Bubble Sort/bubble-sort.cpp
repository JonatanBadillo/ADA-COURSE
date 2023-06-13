// Bubble Sort

#include <iostream>
#include <vector>

using namespace std;

void bubble_sort(vector<int>& v){
    bool sorted = false; // Variable to track if the vector is sorted
    int last = v.size() - 1;  // Index of the last element

    while (not sorted){ // Repeat until the vector is sorted
        sorted = true; // Assume the vector is sorted
        for(int i = 0 ; i < last ; ++i){ // Iterate through the vector
            if(v[i] > v[i+1]){ // Check if adjacent elements are out of order
                swap(v[i],v[i+1]); // Swap the elements
                sorted = false; // Set sorted to false, indicating more sorting is required
            }
        }
        --last; // Decrement the index of the last element as it is now in its correct position
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
    bubble_sort(my_vector);

    cout << "The data of the vector with bubble sort: \n";
    for (int i = 0; i < n; i++) {
        cout << my_vector[i] << " ";
    }
    cout << endl;
}
