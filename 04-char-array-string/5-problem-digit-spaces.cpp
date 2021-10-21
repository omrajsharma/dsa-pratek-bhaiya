#include <iostream>
using namespace std;

int main(){
    char str[1000];

    int alpha = 0, digi = 0, space = 0;
    int charInt;

    char temp = cin.get();
    while(temp != '\n'){
        charInt = int(temp);

        // characters 'A' & 'Z' can be used for comparison rather than 65 or 90
        if( (charInt>=65 && charInt<=90) || (charInt>=97 && charInt<=122) )
            alpha++;
        else if(charInt>=48 && charInt<=57)
            digi++;
        else if(charInt==32)
            space++;

        // cout << temp << ' ' << int(temp) << endl ;

        temp = cin.get();
    }

    cout << "Alphabets : " << alpha << endl;
    cout << "Digits : " << digi << endl;
    cout << "Space : " << space << endl;

    return 0;
}