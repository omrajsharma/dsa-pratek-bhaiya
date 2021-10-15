#include <iostream>
#include "list.h"
using namespace std;

int main(){
    List l;

// creation
    l.pushBack(3);
    l.pushBack(4);
    l.pushBack(5);
    l.pushBack(6);
    l.pushBack(7);
    l.pushFront(2);
    l.pushFront(1);
    l.pushFront(0);

// printing
    l.print();

// insert
    l.insert(10, 4);
    l.print();

// search
    int key = 10;
    if(l.search(key)){
        cout << key << " key founded at " << l.search(key) << endl; 
    } else {
        cout << "key not founded !!!" << endl;
    }

// pop front
    l.popFront();
    l.print();

// pop back
    l.popBack();
    l.print();

// reverse list
    l.reverseList();
    l.print();

    return 0;
}