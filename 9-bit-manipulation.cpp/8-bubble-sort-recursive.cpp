#include <iostream>
using namespace std;

void bubbleSortRecur(int arr[], int n){
    if(n==0)    return;

    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    bubbleSortRecur(arr, n-1);


}

int main(){
    int arr[] {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);

    bubbleSortRecur(arr, n);

    for(int i=0; i<n; i++)
        cout << arr[i] << ' ' << endl;

    return 0;
}