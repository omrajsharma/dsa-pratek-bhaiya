#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a1[100] = {'a', 'b', 'c', '\0'};
    cout << a1 << endl;

    // Input char array
    char a2[100];
    cin >> a2;                      // can't add space in the input
    cout << "Input char array is : " << a2 << endl;

    // finding the size
    cout << "Size of the string" << endl;
    cout << strlen(a1) << endl;     // number of character - 3
    cout << sizeof(a1) << endl;     // size of the array - 100
    
    return 0;
}