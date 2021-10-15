// implementation using stacks
#include <vector>

using namespace std;

template<typename T>
class Stack{
    vector<T> arr;

public:
    // PUSH
    void push(T data){
        arr.push_back(data);
        cout << "Pushed " << data << endl;
    }

    // POP
    void pop(){
        cout << "Popped " << top() << endl;
        arr.pop_back();
    }

    // TOP
    T top(){
        int idx = arr.size()-1;
        return arr[idx];
    }

    // IS EMPTY
    bool isEmpty(){
        return arr.size() == 0;
    }

    // PRINT
    void print(){
        cout << "### STACK ###" << endl;
        for(int i=arr.size()-1; i>=0; i-- )
            cout << arr[i] << endl;
    }
};