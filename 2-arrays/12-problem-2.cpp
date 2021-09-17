// Implement a function that takes an array as input and returns the maximum subarray sum

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int check(vector<int> arr){
    int csm = 0;
    int mxsm = INT_MIN;
    for(int i=0; i< arr.size(); i++ ){
        csm += arr[i];
        csm = csm<0 ? 0:csm;
        mxsm = max(mxsm, csm);
    }
    return mxsm;
}

int main(){
    vector<int> arr {5,0,-1,0,1,2,-1};

    int largestNum = check(arr);

    cout << "maximum subarray sum : " << largestNum;

    return 0;
}