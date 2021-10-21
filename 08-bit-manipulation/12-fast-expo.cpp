#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;

    int n;
    cin >> n;

    int ans = 1;

    while(n>0){
        int last_bit = (n&1);
        if(last_bit){
            ans = ans * a;
        }
        a = a*a;
        n = n>>1;
    }

    cout << ans << endl;


    return 0;
}