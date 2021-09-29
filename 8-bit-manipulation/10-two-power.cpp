// Power of two
#include <iostream>
#include <climits>
using namespace std;

int main(){
    bool flag = false;

    int n;
    cin >> n;

    cout << ((n&(n-1))==0? "True" : "False") << endl;

    // My Code
    // int i = 0;
    // int temp = (1<<i++);
    // while(temp<=n){
    //     if(temp==n)
    //         flag = true;
        
    //     temp = (1<<i++);
    // }
    // cout << (flag? "Power of 2" : "Not power of 2!") << endl;

    return 0;
}