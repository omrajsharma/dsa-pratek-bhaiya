// Time Complexity = O(n)

#include <iostream>
using namespace std;

int main() {
    int arr[] {1,2,3,4,5,6,7,8,9,0};
    int n = sizeof(arr)/sizeof(int);
    int key = 60;

    // linear search 
    bool flag = false;
    for(int i=0; i<n; i++){
        if(arr[i]==key)
            flag = true;
    }

    // result
    if(flag)
        cout << "Element founded!" << endl;
    else 
        cout << "Element NOT FOUND!" << endl;

    return 0;
}