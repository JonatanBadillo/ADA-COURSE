/*
Use a stack to determine, for an integer n and a sequence of
given integers of length n, whether the sequence is a palindrome or not. That is, it must
indicate whether the sequence reads the same from left to right as it does from left to right (without
reverse the digits within each integer)

Entrance
The input consists of an integer n and a sequence of
integers of length n.

Exit
It is necessary to write "YES" or "NO" as appropriate.
*/
#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    // Asking for the length of the sequence
    cout << "Insert the length: \n";
    cin >> n;

    // Creating the stack
    stack<int> Pila;
    int element;

    cout << "Insert the elements in the sequence: \n";

    // Pushing the first half of the sequence into the stack
    for (int i = 0; i < n / 2; ++i) {
        cin >> element;
        Pila.push(element); // adding the element to the stack
    }

    if (n % 2 != 0) { // checking if the length is odd
        cin >> element; // ignoring the middle element for odd-length sequences
    }

    bool palindrome = true;

    // Comparing the remaining half of the sequence with the elements popped from the stack
    while (cin >> element && palindrome && !Pila.empty()) {
        if (element != Pila.top()) {
            palindrome = false;
        }
        Pila.pop();
    }

    // Checking if the sequence is a palindrome or not
    if (palindrome && Pila.empty()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}





