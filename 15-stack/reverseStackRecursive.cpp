// REVERSE STACK RECURSIVELY
#include <iostream>
#include "stackV.h"
using namespace std;

// INSERT AT THE BOTTOM
void insertAtBottom(Stack<int> &s, int data){
    // base case
    if(s.isEmpty()){
        s.push(data);
        return;
    }

    // recursive
    int temp = s.top();
    s.pop();
    insertAtBottom(s, data);
    s.push(temp);
}

// REVERSE STACK
void reverse(Stack<int> &s){
    // base case
    if(s.isEmpty()){
        return;
    }

    // recursive case
    int t = s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s, t);
    
}

int main(){
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.print();

    reverse(s);
    s.print();

    return 0;
}