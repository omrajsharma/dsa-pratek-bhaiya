#include <iostream>
#include "1-queue-array.h"
using namespace std;

int main(){
    Queue q(10);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.print();
    cout << "---------------------" << endl;

    q.pop();
    q.pop();
    q.pop();
    q.print();
    cout << "---------------------" << endl;

    q.push(6);
    q.push(7);
    q.push(8);
    q.print();
    cout << "---------------------" << endl;




    return 0;
}