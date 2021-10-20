/*
HEAP DS - A Heap is a special Tree-based data structure in which the tree is a complete binary tree. Generally, Heaps can be of two types:

Two types : max heap , min heap
root node must be max and min respectively

complete binary tree - all level complete filled except last level, last level filled from left to right

properties
- binary tree
- complete binary tree
- heap order property (max/min heap)


building of heap O(N)
pop of k elements O(KlogN)

NOTE : tree ds take much time in insetion so we choose working with arrays;
children of ith index is at 2i and 2i+1 with 1 based indexing

*/


// IMPLEMENTING PRIORITY QUEUE STL LIB
#include <iostream>
#include <queue>
using namespace std;

int main(){
    int arr[] = {10,15,20,13,6,90};
    int n = sizeof(arr)/sizeof(int);

    // by default max heap
    // priority_queue<int> heap;
    priority_queue<int, vector<int>, greater<int> > heap;

    for(int x : arr){
        heap.push(x);
    }

    while (!heap.empty())
    {
        cout << heap.top() << endl;
        heap.pop();
    }
    

    return 0;
}