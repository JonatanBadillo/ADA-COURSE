// Merge Sort

#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& v, int left, int mid, int right) {
    int n = right - left + 1; // size of the vector
    vector<int> aux(n);
    int i = left; // sequence for the left vector
    int j = mid + 1; // sequence for the right vector
    int k = 0; // auxiliary vector

    while (i <= mid && j <= right) { // merging the left and right vectors
        if (v[i] <= v[j]) {
            aux[k] = v[i]; // store element from left vector
            ++i;
        } else {
            aux[k] = v[j]; // store element from right vector
            ++j;
        }
        ++k;
    }

    while (i <= mid) { // fill aux with remaining elements from the left vector
        aux[k] = v[i];
        ++k;
        ++i;
    }

    while (j <= right) { // fill aux with remaining elements from the right vector
        aux[k] = v[j];
        ++k;
        ++j;
    }

    for (k = 0; k < n; ++k) { // copy sorted elements from aux back to the original vector
        v[left + k] = aux[k];
    }
}


void merge_sort(vector<int>& v, int left, int right){ // dividing the vector
    if(left < right){
        int mid = (left+right) / 2; // middle position
        merge_sort(v, left, mid); // sorting the 1st half
        merge_sort(v, mid+1, right); // sorting the 2nd half
        merge(v, left , mid, right); //merging the vector
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

   merge_sort(my_vector, 0 ,n-1);

    cout << "The data of the vector with merge sort: \n";
    for (int i = 0; i < n; i++) {
        cout << my_vector[i] << " ";
    }
    cout << endl;
}
