#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    cout << "x : " << x << endl;

    // Address of variable 
    cout << "address of x : " << &x << endl;

    // Pointer variable
    int *p = &x;
    cout << "p : " << p << endl;
    cout << "*p(dereference) : " << *p << endl;

    // Pointer to a pointer
    int **pp = &p;
    cout << "pp : " << pp << endl;
    cout << "**pp : " << **pp << endl;  // Derefrencing x
    cout << "**pp : " << *pp << endl;   // derefrencing p

    // Null pointer
    int *ptr = NULL;
    int *ptr1 = 0;
    cout << *ptr << endl;

    return 0;
}