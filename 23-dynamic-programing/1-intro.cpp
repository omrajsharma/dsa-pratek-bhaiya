/*
DP is all about "Remebering" what you have solved in the past

Types
- top down (recursive)
- bottom up (iterative)




*/

// Fibonacci Memoisation (Top down - recursion + memoisation)

// code not working
// #include <iostream>
// using namespace std;

// int fib(int n, int dp[]){
//     cout << n << endl;

//     if(n==0 or n==1){
//         return dp[n] = n;
//     }

//     // check if the state is already computed
//     if(dp[n]!=0){
//         return dp[n];
//     }

//     return dp[n] = fib(n-1, dp) + fib(n-2, dp);
// }

// int main(){
//     int n;
//     cin >> n;

//     int dp[n] {0};

//     cout << fib(n,dp) << endl;

//     return 0;
// }


// Bottom up DP O(N)
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int dp[n+1] {0,1};

    for(int i=2; i<=n ; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << dp[n] << endl;

    return 0;
}