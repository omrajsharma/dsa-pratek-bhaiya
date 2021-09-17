// Time complexity = O(log n)
// array must be monotonic (either strictly inc or dec).

#include <iostream>
using namespace std;

int main() {
    int arr[] {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(int);
    int key = 20;

    // Algorithm
    int s = 0;
    int e = n-1;
    int mid;
    int idx = -1;
    while(s<=e){
        mid = (s+e)/2;

        if(arr[mid] == key){
            idx = mid;
            break;
        } else if(arr[mid] > key){
            e = mid-1;
        } else {
            s = mid+1;
        }
    }

    if(idx>-1)
        cout << "Element Founded at " << idx << endl;
    else 
        cout << "Element not found!" << endl;

    return 0;
}