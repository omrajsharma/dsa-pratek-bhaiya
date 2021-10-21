// Kadane's Algorithm

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] {1,2,3,-4,-5,6,7,-8,-9};
    int n = sizeof(arr)/sizeof(int);

    // Algorithm
    int sum=0;
    int mxSum = INT_MIN;
    for(int i=0; i<n; i++){
        sum += arr[i];
        mxSum = max(mxSum, sum);
        if(sum<0)   sum = 0;
    }

    cout << mxSum << endl;


    return 0;
}