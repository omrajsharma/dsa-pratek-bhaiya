/*
31
1
3
*/


#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i;
    cin >> i;

    int j;
    cin >> j;

    int a = (-1 << j+1);
    int b = ((1<<i)-1);
    int mask = a|b;
    n = n&mask;

    cout << n << endl;



    return 0;
}