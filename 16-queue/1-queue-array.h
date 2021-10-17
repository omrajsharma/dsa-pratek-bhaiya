#include <iostream>
using namespace std;

class Queue{
    int *arr;
    int cs;
    int ms;

    int front;
    int rear;

public:
    Queue(int default_size=5){
        ms = default_size;
        cs = 0;
        arr = new int[ms];
        front = 0;
        rear = ms-1;
    }

    // FULL
    bool full(){
        return cs==ms;
    }

    // EMPTY
    bool empty(){
        return cs==0;
    }

    // PUSH
    void push(int data){
        if(!full()){
            rear = (rear+1)%ms;
            arr[rear] = data;
            cs++;
            cout << "PUSHED " << data << endl;
        }
    }

    // POP
    void pop(){
        if(!empty()){
            front = (front+1)%ms;
            cout << "POPED " << arr[front] << endl;
            cs--;
        }
    }

    // FRONT
    int getFront(){
        return arr[front];
    }

    // PRINT
    void print(){
        int i;
        for(i=front; i!=rear; (i++)%ms ){
            cout << arr[i] << endl;
        }
        cout << arr[i] << endl;
    }
};