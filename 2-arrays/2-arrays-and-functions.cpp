// Passing array to a function (arrays always passed in reference)

#include <iostream>
using namespace std;

// #1
void check(int arr[], int n){
    for(int i=0; i<n; i++)
        cout << arr[i] << endl;
}
// #2
void check01(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }
}

int main() {
    int arr[] {1,2,3,4,5,6,7,8,9,10};

    // length of an array
    int n = sizeof(arr)/sizeof(int);

    // passing and printing an array in a function
    check(arr, n);
    check01(arr, n);

    return 0;
}