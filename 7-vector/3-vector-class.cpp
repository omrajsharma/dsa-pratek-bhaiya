#include <iostream>
using namespace std;

class vector{
    // Data members
    int *arr;
    int cs;
    int ms;

public:
    vector(int max_size=1) {
        cs=0;
        ms=max_size;
        arr = new int[ms];
    }

    void push_back(const int d){
        // Two case
        if(cs==ms){
            // create a new array and delete the old one, double the capacity
            int *oldArr = arr;
            ms = 2*ms;
            arr = new int[ms];
            // copy elements
            for(int i=0; i<cs; i++)
                arr[i] = oldArr[i];
            // delete
            delete [] oldArr;
        }
        arr[cs] = d;
        cs++;
    }

    void pop_back(){
        if(cs>=0)
            cs--;
    }

    bool isEmpty(){
        return cs ==0;
    }

    // front, back, at(i), []
    int front() const{
        return arr[0];
    }

    int back() const{
        return arr[cs-1];
    }

    int at(int i) const{
        return arr[i];
    }

    int size() const{
        return cs;
    }

    int capacity() const{
        return ms;
    }

    int operator[](const int i){
        return arr[i];
    }

};

int main(){
    vector v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);    
    v.pop_back();

    cout << v.front() << ' ' << v.back() << endl;
    cout << v.at(2) << endl;

    cout << v.size() << endl;
    cout << v.capacity() << endl;

    for(int i=0;i<v.size(); i++)
        cout << v[i] << endl;

    return 0;
}