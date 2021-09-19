#include <iostream>
using namespace std;

int main(){
    // cin method
    /*
    char str1[100];
    cout << "# Input in cin #" << endl;
    cin >> str1;                // Doesn't work in inputs with white spaces
    cout << str1 << endl;
    */

    // Another method of input - cin.get()
    /*
    char str2[100];
    cout << "# Input using cin.get() #" << endl;
    char temp = cin.get();      // this function takes one char input at a time from input buffer.
    cout << temp << endl;
    while(temp != '\n'){        // here we can change the change the criteria of stopping the input
        cout << temp;
        temp = cin.get();
    }
    cout << endl;
    */

    // Another menthod of input - cin.getline()
    char str3[1000];
    cin.getline(str3, 1000, '.');
    cout << str3 << endl;

    return 0;
}