#include <iostream>
#include <vector>
using namespace std;
int rotateSearch(vector<int> &arr, int key){
    int n = arr.size();

    int s = 0;
    int e = n-1;
    int mid;

    while(s<=e){
        mid = (s+e)/2;

        if(arr[mid]==key)   return mid;

        if(arr[s]<arr[mid]){
            // left
            if(arr[s]<=key and key<=arr[mid]){
                e = mid-1;
            } else {
                s = mid+1;
            }
        } else {
            // right
            if(arr[mid]<=key and key<=arr[e]){
                s = mid+1;
            } else {
                e = mid-1;
            }

        }

        // if(arr[s]<= key <=arr[mid]){
        //     e = mid;
        // } else {
        //     s = mid+1;
        // }
        // if(arr[mid]<=key<=arr[e]){
        //     s = mid;
        // } else {
        //     e = mid-1;
        // }
    }

    return -1;
}

int main(){
    
    vector<int> arr{4,5,6,7,0,1,2,3};
    int key;
    cin >> key;
    cout << rotateSearch(arr, key) << endl;

    return 0;
}