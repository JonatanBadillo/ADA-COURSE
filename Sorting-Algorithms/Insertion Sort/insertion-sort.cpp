// Insertion Sort

#include <iostream>
#include <vector>

using namespace std;


void insertion_sort(vector<int>& v){
    // Iterate through the vector starting from the second element
    for(int i=1; i< v.size();i++){ // vector: [0] ... [n-1], n = size of the vector
    // Store the current element to be inserted
        int x = v[i];     // 6 5 8
        // Start comparing from the current element
        int j = i;        // x = v[i] = 5 ; v[j-1] = 6
        // Shift elements to the right until the correct position is found
        while(j>0 and v[j-1] > x){
            // Shift the element to the right
            v[j] = v[j-1];    // v[j] = 6
            --j;; // Move to the previous position
        } 
        v[j] = x; // Insert the current element at the correct position
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
    insertion_sort(my_vector);

    cout << "The data of the vector with insertion sort: \n";
    for (int i = 0; i < n; i++) {
        cout << my_vector[i] << " ";
    }
    cout << endl;
}