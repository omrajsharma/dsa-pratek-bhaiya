// O(nlogn) - time complexity

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> vec {9,7,4,2,3,1,5,6,8};
    int arr[] {9,7,4,2,3,1,5,6,8};

    int n = sizeof(arr)/sizeof(int);
    sort(arr, arr + n);


    // Output
    for(int i=0; i<n; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;

    // To reverse
    reverse(arr, arr+n);

    // Output
    for(int i=0; i<n; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;

    

    return 0;
}