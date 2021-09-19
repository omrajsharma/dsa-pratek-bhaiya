// Read N strings and print the largest string. Each string can have upto 1000 characters
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cout << "Number of string you wants to enter : " ;
    cin >> n;
    cin.get();      // refer section 4 lec 40
    // this consumes '\n' character which is not given to the getline which may creates error in program.

    char inputString[1000];
    int largestLength = 0;
    char largestString[1000];
    while(n--){
        cin.getline(inputString, 1000);

        if(strlen(inputString) > largestLength){
            largestLength = strlen(inputString);
            strcpy(largestString, inputString);
        }
    }

    cout << "Largest string is : " << largestString << endl;

    return 0;
}