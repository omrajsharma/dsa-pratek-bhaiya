// Brute Force Approach (time complex = O(n.n.n))
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] {-2,3,4,5,-12,6,2,3};
    int n=sizeof(arr)/sizeof(int);

    // Algorithm
    int sum;
    int mxSum = INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            sum = 0;
            for(int k=i; k<=j; k++){
                sum += arr[k];
            }
            mxSum = max(sum, mxSum);
            // if(sum > mxSum){
            //     mxSum = sum;
            // }
        }
    }

    cout << "Max sum is : " << mxSum << endl;


    return 0;
}