// Pass by reference using pointers
#include <iostream>
using namespace std;

void applyTax(int *p){
    float tax = 0.1;
    *p = *p*(1-tax);
}

int main(){
    int income;
    cin >> income;

    applyTax(&income);

    cout << "Inhand salary : " << income << endl;

    return 0;
}