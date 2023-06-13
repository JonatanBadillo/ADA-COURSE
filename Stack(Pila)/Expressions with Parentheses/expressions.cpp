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

    while(correct and x != '.'){ // it finish with a '.'
        if(x == '[' or x == '('){
            p.push(x); // adding in the stack
        }else if(x == ']'){ 
            if(p.empty() or p.top() != '['){ // verifying the expression is closed
                correct = false; //it's incorrect because the stack is empty or the top isn't the opening expression
            }else{
                p.pop(); // it means is correct
            }
        }else if(x==')'){ 
            if(p.empty() or p.top() != '('){// verifying the expression is closed
                correct = false;//it's incorrect because the stack is empty or the top isn't the opening expression
            }else{
                p.pop(); // it means is correct
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