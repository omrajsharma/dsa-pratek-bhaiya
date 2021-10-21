// Brute Force Approach (time complex = O(n.n.n))
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] {-2,3,4,5,-12,6,2,3};
    int n=sizeof(arr)/sizeof(int);

    // Algorithm
    int ap[n] {0};
    ap[0] = arr[0];
    for(int i=1; i<n; i++){
        ap[i] = arr[i] + ap[i-1];
    }
    int sum;
    int mxSum = INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            sum = i>0? ap[j] - ap[i-1] : ap[j];
        }
        mxSum = max(mxSum, sum);
    }

    cout << "Max sum is : " << mxSum << endl;


    return 0;
}