// Time compexity = O(n)
#include <iostream>
using namespace std;

int main(){
    int arr[] {1,2,3,4,5,6,7,8,9,0};
    int n = sizeof(arr)/sizeof(int);

    // printing array before reverse 
    for(int i=0; i<n; i++)
        cout << arr[i] << ' ';
    cout << endl;

    // Algorithm
    for(int i=0; i<n/2; i++)
        swap(arr[i], arr[n-1-i]);

    // printing array after reverse 
    for(int i=0; i<n; i++)
        cout << arr[i] << ' ';
    cout << endl;

    return 0;
}