#include <iostream>
using namespace std;

void numSpell(int n){
    if(n==0)    return;

    numSpell(n/10);
    switch (n%10)
    {
    case 0:
        cout << "Zero ";
        break;
    case 1:
        cout << "One ";
        break;
    case 2:
        cout << "Two ";
        break;
    case 3:
        cout << "Three ";
        break;
    case 4:
        cout << "Four ";
        break;
    case 5:
        cout << "Five ";
        break;
    case 6:
        cout << "Six ";
        break;
    case 7:
        cout << "Seven ";
        break;
    case 8:
        cout << "Eight ";
        break;
    case 9:
        cout << "Nine ";
        break;
    
    default:
        break;
    }
}

int main(){
    int n;
    cin >> n;

    numSpell(n);

    return 0;
}