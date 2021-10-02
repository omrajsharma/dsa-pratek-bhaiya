#include <iostream>
using namespace std;

int fibonacci(int n){
    
    // base case
    if(n==0 or n==1){
        return n;
    }

    // recursive statements
    int f1 = fibonacci(n-1);
    int f2 = fibonacci(n-2);
    return f1+f2;
}

int main(){
    int n;
    cin >> n;

    cout << fibonacci(n) << endl;

    return 0;
}