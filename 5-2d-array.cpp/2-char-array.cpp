#include <iostream>
using namespace std;
int main(){
    char str1[][20] {
        "Papa",
        "Mummy",
        "Omraj", 
        "Shyamraj",
        "Kirti",
        "Riya"
    };

    // Printing entire row
    cout << str1[2] << endl;
    for(int i=0; i<6; i++)
        cout << str1[i] << endl;

    return 0;
}