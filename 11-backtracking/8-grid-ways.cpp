// grid ways - number of ways to reach bottom right corner from the top left corner
#include <iostream>
using namespace std;

// SOLUTION
// i,j - current coordinates, m,n - target coordinates
int gridWays(int i, int j, int m, int n){
    // base case
    if(i==m-1 and j==n-1)   return 1;
    if(j>=n or i>=m)        return 0;

    // rec case
    int ans = gridWays(i+1,j,m,n) + gridWays(i, j+1,m,n);
    return ans;
}

int main(){
    int m,n;
    cin>>m>>n;
    cout << gridWays(0,0,m,n) << endl;

    return 0;
}