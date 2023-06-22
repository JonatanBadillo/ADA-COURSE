#include <iostream>
#include <vector>
#include <queue> 

using namespace std;

int main(){
    char op;
    priority_queue<int> q;
    int x;

    while(cin >> op){
        if (op == 'S') {
			cin >> x;
			q.push(x);
		}
		else if (op == 'A') {
			if (q.empty()) cout << "error!";
			else cout << q.top();
			cout << endl;
		}
		else if (op == 'R') {
			if (q.empty()) cout << "error!";
			else q.pop();
			cout << endl;
		}
		else if (op == 'I') {
			cin >> x;
			if (q.empty()) cout << "error!" << endl;
			else {
				x = q.top() + x;
				q.pop();
				q.push(x);
			}
		}

		else if (op == 'D') {
			cin >> x;
			if (q.empty()) cout << "error!" << endl;
			else {
				x = q.top() - x;
				q.pop();
				q.push(x);
			}
		}
    }
}