#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i;
    cin >> i;

    int val;
    cin >> val;

    int mask = (1<<i);
    mask = ~mask;
    
    n = (mask&n);       // clear ith bit

    mask = (val<<i);

    n = (mask|n);       // set ith bit

    cout << n << endl;



    return 0;
}