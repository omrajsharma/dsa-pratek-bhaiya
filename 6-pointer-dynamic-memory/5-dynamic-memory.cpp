#include <iostream>
using namespace std;

int main() {
    // Dynamic varibles
    int *var = new int;
    cin >> *var;
    cout << var << ' ' << *var << endl;


    // Dynamic array
    int n;
    cin >> n;
    int *arr = new int[n];

    for(int i=0; i<n; i++)
        cin >> arr[i];

    for(int i=0; i<n; i++)
        cout << arr[i] << endl;

    cout << arr << ' ' << *(arr+1) << endl;

    // Delete
    delete [] arr;

    cout << arr << endl;
}