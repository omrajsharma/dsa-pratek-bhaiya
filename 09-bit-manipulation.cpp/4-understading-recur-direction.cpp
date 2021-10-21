#include <iostream>
using namespace std;

void inc(int i, int n){
    cout << i << ' ' ;

    if(i==n){
        return;
    }

    inc(++i,n);
}

void dec(int n){
    cout << n << ' ';
    
    if(n>1)
        dec(n-1);
    else
        return;
}

int main(){
    int n;
    cin >> n;
    dec(n);
    cout << endl;
    inc(1,n);
    cout << endl;

    return 0;
}