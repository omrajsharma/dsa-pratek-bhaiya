// TESTING STACKS USING VECTORS

#include <iostream>
#include "stackV.h"
using namespace std;

int main(){
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.print();

    s.pop();
    s.print();

    return 0;
}