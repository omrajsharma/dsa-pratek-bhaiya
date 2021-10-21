#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
    // cout << "Comparing " << a << ' ' << b << endl;
    return a>b;
}

int main(){
    vector<int> vec {9,7,4,2,3,1,5,6,8};
    int arr[] {9,7,4,2,3,1,5,6,8};

    int n = sizeof(arr)/sizeof(int);
    sort(arr, arr + n, compare);
    
    // Another Option
    // sort(arr, arr + n, greater<int>());  

    // Output
    for(int i=0; i<n; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}