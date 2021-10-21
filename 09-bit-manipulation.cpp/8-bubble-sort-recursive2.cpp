// little complex - working like two loop

#include <iostream>
using namespace std;

void bubbleSortRecur(int arr[], int n, int j){
    if(n==0 || n==1)    return;
    if(j==n-1) {
        bubbleSortRecur(arr, n-1, 0);
    }
    if(arr[j]>arr[j+1])   swap(arr[j], arr[j+1]);
    bubbleSortRecur(arr, n, j+1);
}

int main(){
    int arr[] {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);

    bubbleSortRecur(arr, n, 0);

    for(int i=0; i<n; i++)
        cout << arr[i] << ' ' << endl;

    return 0;
}