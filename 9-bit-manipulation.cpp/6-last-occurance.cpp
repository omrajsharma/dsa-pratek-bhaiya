#include <iostream>
using namespace std;

int lastOccur(int arr[], int size, int key){
    // basecase
    if(size == 0){
        return -1;
    }

    // rec case
    int subInd = lastOccur(arr+1, size-1, key);
    if(subInd==-1){
        if(arr[0]==key){
            return 0;
        } else {
            return -1;
        }
    } else {
        return subInd+1;
    }
}

int main(){
    int arr[] {1,2,7,6,7,5};
    int size = sizeof(arr)/sizeof(int);

    int key;
    cin >> key;

    cout << lastOccur(arr,size,key) << endl;

    return 0;
}