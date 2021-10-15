// RECURSIVELY ADDING ELEMENT AT THE BOTTOM

#include <iostream>
#include "stackV.h"
using namespace std;

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

int main(){
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.print();

    insertAtBottom(s,5);

    s.print();


    return 0;
}