// Time complexity = O(N.N.N)
#include <iostream>
using namespace std;

int main() {
    int arr[] {1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(int);

    // Algorithm
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout << arr[k] << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }


    return 0;
}