/*
Given an expression with parentheses of two different types, write a program
to assess their correctness using stacks.
Lucas Bazilio - Udemy
Input
A sequence of parentheses (, ), [, ] ending in
spot.
Output
Write "Correct" or "Incorrect" as the case may be.


Public test cases
Input
(()[[(]])).
Output
Incorrect


Input
(()[[]]).
Output
Correct
*/

#include <iostream>
#include <stack>
using namespace std;

int main(){
    char x;
    stack<char> p;  // creating the stack of chars

    cin >> x;
    bool correct =true;

    while(correct and x != '.'){
        if(x == '[' or x == '('){
            p.push(x);
        }else if(x == ']'){ // if start with this expressions it doesn't close anything
            if(p.empty() or p.top() != '['){
                correct = false;
            }else{
                p.pop();
            }
        }else if(x==')'){ // if start with this expressions it doesn't close anything
            if(p.empty() or p.top() != '('){
                correct = false;
            }else{
                p.pop();
            }
        }

        cin >> x;
    }

    if(correct and p.empty()){
        cout << "Correct\n";
    }else{
        cout<< "Incorrect\n";
    }

}