#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i;
    cin >> i;

    int mask = (1<<i);
    cout << (mask&n?1:0) << endl;

    return 0;
}