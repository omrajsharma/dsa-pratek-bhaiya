// Given an array of integers A(sorted) and a integer Val. Implement a function that take A and Val as input parameters and returns the lower bound of Val.

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int check(vector<int> A, int Val){
    int s=0, e= A.size()-1;
    int mid;
    while(s<=e){
        mid = (s+e)/2;
        if (A[mid]==Val)
            return A[mid];
        else if(A[mid] < Val && Val < A[mid+1])
            return A[mid];
        else if(A[mid] > Val)
            e = mid-1;
        else 
            s = mid+1;
    }
    return -1;
}

int main(){
    vector<int> arr {1,2,3,4,6};

    int ans = check(arr, 4);

    cout << ans << endl;

    return 0;
}