// Check Palindrome
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[1000];
    cin.getline(str, 1000);
    int len = strlen(str);

    bool flag = true;
    for(int i=0; i<(len/2); i++){
        if(str[i]!=str[len-1-i])
            flag = false;
    }

    cout << flag << endl;

    return 0;
}