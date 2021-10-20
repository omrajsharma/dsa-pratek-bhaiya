#include <vector>
using namespace std;


// MIN HEAP IMPLEMENTATION
class Heap{
    vector<int> v;

    void heapify(int i){
        int l = 2*i;
        int r = 2*i+1;

        int minIdx = i;
        
        if(l < v.size() and v[l]<v[i]){
            minIdx = l;
        }
        if(r < v.size() and v[r]<v[i]){
            minIdx = r;
        }

        if(minIdx!=i){
            swap(v[i], v[minIdx]);
            heapify(minIdx);
        }
    }

public:
    Heap(int default_size = 10){
        v.reserve(default_size+1);
        v.push_back(-1);
    }

    // PUSH - logN TC
    void push(int data){
        // add data at the end of the heap
        v.push_back(data);
        
        int idx = v.size();
        int parent = idx/2;

        while(idx>1 and v[idx]<v[parent]){
            swap(v[parent], v[idx]);
            idx = parent;
            parent = parent/2;
        }
    }

    // return min element
    int top(){
        return v[1];
    }

    // REMOVE MIN/MAX - logN TC
    void pop(){
        // 1. swap 1st and last element
        swap(v[1], v[v.size()-1]);

        // 2. pop back
        v.pop_back();

        // 3. heapify - private method
        heapify(1);
    }

    // empty
    bool empty(){
        return v.size() == 1;
    }
    
};  