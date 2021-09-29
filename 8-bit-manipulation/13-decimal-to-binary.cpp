#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans = 0;
    int pow = 1;
    while(n>0){
        int lastBit = (n&1);
        ans += lastBit*pow;
        pow *= 10;
        n = n>>1;
    }

    cout << ans << endl;


    return 0;
}