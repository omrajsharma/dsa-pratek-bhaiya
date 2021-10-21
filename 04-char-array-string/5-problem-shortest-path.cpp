// shortest displacement to the final position.
#include <iostream>
using namespace std;

int main() {
    char str[100];
    cin.getline(str, 100);

    int i=0;
    int N=0, E=0, W=0, S=0;
    while(str[i]!='\0'){
        if(str[i]=='N'){
            N++;
            S--;
        } else if(str[i]=='E'){
            E++;
            W--;
        } else if(str[i]=='W'){
            W++;
            E--;
        } else if(str[i]=='S'){
            S++;
            N--;
        }
        i++;
    }

    cout << "North : " << (N>0? N : 0) << endl;
    cout << "East : " << (E>0? E : 0) << endl;
    cout << "West : " << (W>0? W : 0) << endl;
    cout << "South : " << (S>0? S : 0) << endl;

    return 0;
}