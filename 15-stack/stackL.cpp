// TESTING STACKS USING LINKEDLIST

#include <iostream>
#include "stackL.h"
using namespace std;

int main(){
    Stack<char> s;
    s.push('h');
    s.push('e');
    s.push('l');
    s.push('l');
    s.push('o');

    s.print();

    return 0;
}