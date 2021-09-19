#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char a[100] = "apple";
    char b[100];
    char c[100] = "omraj";

    // Calculate length
    cout << "Length of a : " << strlen(a) << endl;

    // String copy
    strcpy(b,a);
    cout << "String b : " << b << endl;

    // String compare
    cout << "Comparing a and b : " << strcmp(a,b) << endl;
    cout << "Comparing a and c : " << strcmp(a,c) << endl;

    // String concatination
    strcat(c,a);
    cout << "concate : " << c << endl;

    return 0;
}