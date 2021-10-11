/*
INPUT
5
OUTPUT
1 2 3 4 5 
-1 -2 -3 -4 -5
*/

#include <iostream>
using namespace std;

void printArray(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << ' ';
    }
}

void fillArray(int *arr, int i, int n, int val){
    // base case
    if(i==n){
        printArray(arr, n);
        return;
    }

    // recur case
    arr[i] = val;
    fillArray(arr, i+1, n, val+1);
    // BackTracking code
    arr[i] = -1*arr[i];
    
}

int main(){
    int arr[100] = {0};

    int n;
    cin >>n; 

    fillArray(arr, 0, n, 1);

    cout << endl;

    printArray(arr, n);    

    return 0;
}