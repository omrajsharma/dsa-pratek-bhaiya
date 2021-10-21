// Run length encoding for string compression
// if compressed string is bigger than original return original string
// Input : aaabbccddee
// Output : a3b2c2d2e2
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int arr[26] {0};
    
    // creating frq array
    int temp;
    for(int i=0; i<s.length(); i++){
        temp = s[i]-97;
        arr[temp]++;
    }

    // encoding 
    string encodedString("");
    for(int i=0; i<26; i++){
        if(arr[i]!=0){
            encodedString = encodedString + char(i+97) + to_string(arr[i]);
            // cout << encodedString << endl;
            // cout << char(i+97) << arr[i] << endl;
        }
    }
    // cout << endl;

    // output
    if(s.length() < encodedString.length())
        cout << s << endl;
    else 
        cout << encodedString << endl;

    return 0;
}