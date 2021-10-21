#include <iostream>
using namespace std;

void change(int &x){
    x = 10;
}

int main(){
    int x=5;
    int &y=x;

    y++;

    cout << x << endl;
    cout << y << endl;

    change(x);


    cout << x << endl;
    cout << y << endl;

    return 0;
}