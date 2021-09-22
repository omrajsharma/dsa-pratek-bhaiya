// Pass by reference using reference variable
// finding tax
#include <iostream>
using namespace std;

void applytax(int &incRef){
    float tax = 0.1;
    incRef = incRef - incRef*tax;
}

int main(){
    int income;
    cin >> income;

    applytax(income);

    cout << income << endl;

    return 0;
}