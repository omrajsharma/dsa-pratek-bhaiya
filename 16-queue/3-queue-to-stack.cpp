// Implement a stack class which use 2 queue internally as a data structure

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Stack {
    queue<int> q1, q2;

    public:
    // push
    void push(int x){
        if(!q1.empty()){
            // insert in a non empty queue
            q1.push(x);
        } else {
            q2.push(x);
        }
    }

    // pop
    void pop(){
        if(q1.empty()){
            // shift element from q2 -> q1
            while(!q2.empty()){
                int front = q2.front();

                q2.pop();

                if(q2.empty()){
                    break;
                }

                q1.push(front);
            }
        } else {
            // shift element from q1 -> q2
            while(!q1.empty()){
                int front = q1.front();

                q1.pop();

                if(q1.empty()){
                    break;
                }

                q2.push(front);
            }
        }
    }

    // top
    int top(){
        if(q1.empty()){
            // check on q2
            while(!q2.empty()){
                int front = q2.front();

                q2.pop();

                if(q2.empty()){
                    return front;
                }
            }
        } else {
            // check for q1
            while(!q1.empty()){
                int front = q1.front();

                q1.pop();

                if(q1.empty()){
                    return front;
                }
            }
        }
    } 

    bool empty() {
        return q1.empty() and q2.empty();
    }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    // s.pop();

    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }


    return 0;
}