#include <iostream>
#include <vector>
using namespace std;

// METHOD 1
bool check(int arr[], int n){
    // base case
    if(n==0 or n==1){
        return true;
    }

    // recursive case
    return (arr[0]<arr[1] and check(arr+1, n-1));
}

// METHOD 2
bool check(int arr[], int i, int n){
    // base case
    if(i==n-1){
        return true;
    }
    
    // recursive case
    if(arr[i]<arr[i+1] and check(arr, i+1, n))
        return true;

    return false;


}

int main(){
    int arr[] {4,3,10,4,5,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout << check(arr,0, size) << endl;

    return 0;
}