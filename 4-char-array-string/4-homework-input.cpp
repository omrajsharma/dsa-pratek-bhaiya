#include <iostream>
using namespace std;

int main() {
    char sentence[1000];

    char temp = cin.get();
    int pt = 0;
    while(temp!='\n'){
        sentence[pt] = temp;
        pt++;
        temp = cin.get();
    }
    cout << sentence << endl;

    return 0;
}