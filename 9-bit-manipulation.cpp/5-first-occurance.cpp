#include <iostream>
using namespace std;

int firstOccurance(int arr[], int i, int size, int key){
    if(arr[i]==key)
        return i;

    i++;

    return firstOccurance(arr, i, size, key);
}

// Prateek bhaiya's code
int firstOccurance(int arr[], int size, int key){
    // base case
    if(size==0){
        return -1;
    }

    // recursive cases
    if(arr[0]==key){
        return 0;
    }
    int subIndex = firstOccurance(arr+1, size-1, key);
    if(subIndex!=-1){
        return subIndex+1;
    }
    return -1;
}

int main(){
    int arr[] {3,5,7,6,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    int key = 7;

    cout << (firstOccurance(arr, 0, size, key) < size ? firstOccurance(arr, 0, size, key) : -1) << endl;

    return 0;
}