#include <iostream>
#include <vector>
#include <queue> 

using namespace std;

int main(){
    priority_queue<int> Q; //MAX HEAP

    Q.push(6);
    Q.push(8);
    Q.push(2);

    cout << "MAX HEAP" << endl;
    cout << "The top is " << Q.top() << endl;


    priority_queue<int, vector<int> ,greater<int> > Q2; //MIN HEAP

    Q2.push(6);
    Q2.push(8);
    Q2.push(2);

    cout << "MIN HEAP" << endl;
     cout << "The top is " << Q2.top() << endl;
}