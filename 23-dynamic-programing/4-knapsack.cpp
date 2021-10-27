#include <iostream>
#include <vector>
using namespace std;

// Top Down approach
int knapsackone(int wts[], int prices[], int N, int W){
    // base case
    if(N==0 or W==0){
        return 0;
    }

    // recur case
    int inc = 0, exc = 0;
    if(wts[N-1]<=W){
        inc = prices[N-1] + knapsackone(wts, prices, N-1, W-wts[N-1]);
    }
    exc = knapsackone(wts, prices, N-1, W);
    return max(inc, exc);    
}

// Botton Up approach
int knapsacktwo(int wts[], int price[], int N, int W){
    vector<vector<int>> dp(N+1, vector<int>(W+1,0));

    for(int n=1; n<=N; n++){
        for(int w=1; w<=W; w++){
            int inc = 0, exc = 0;

            if(wts[n-1]<=w){
                inc = price[n-1] + dp[n-1][w-wts[n-1]];
            }

            exc = dp[n-1][w];

            dp[n][w] = max(inc, exc);
        }
    }

    return dp[N][W];
}

int main(){
    int wts[] = {2,7,3,4};
    int prices[] = {5,20,20,10};
    int n = 4;
    int w = 11;

    cout << knapsackone(wts, prices, n,w) << endl;
    cout << knapsacktwo(wts, prices, n, w) << endl;

    return 0;
}