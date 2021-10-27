// Longest Increasing Subsequence LIS
#include <iostream>
using namespace std;


int lis(int arr[], int n){
    int dp[n] {0};

    for(int i=0; i<n ; i++){
        // findest largest lower subsequence
        int subMax = 0;
        for(int j=0; j<i; j++){
            if(arr[j] < arr[i] and dp[j] > subMax ){
                subMax = dp[j];
            }
        }
        dp[i] = 1 + subMax;
        cout << subMax << ' ' << dp[i] << endl;
    }

    // finding largest substring
    int ans = 0;
    for(int i=1; i<n; i++){
        if(dp[i]>ans){
            ans=dp[i];
        }
    }

    return ans;
}

int main(){
    int arr[] {50,4,10,8,30,100};
    int n = sizeof(arr)/sizeof(int);

    cout << lis(arr, n) << endl;

    return 0;
}