#include <iostream>
using namespace std;

int main() {
    char a1[100];
    char a2[100] = {'a', 'b', 'c'};     // Not recommended - as it prints garbage value as well while printing this array.
    char a3[100] = {'a', 'b', 'c', '\0'};   // Recommended - null character at the end
    char a4[100] = "Omraj Sharma";          // This adds a null character at the end

    cout << a1 << endl << a2 << endl << a3 << endl << a4 << endl;

    return 0;
}