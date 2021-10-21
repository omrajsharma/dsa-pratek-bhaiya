#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr {9,7,4,2,3,1,5,6,8};

    // Mine better implementation
    for(int i=0; i<arr.size()-1; i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[j]< arr[i])  
                swap(arr[j], arr[i]);
        }

        // Output
        for(int k=0; k<arr.size(); k++)
            cout << arr[k] << ' ';
        cout << endl;  
    }

    // Prateek bhaiya's implementations
    /*
    for(int i=0; i< arr.size()-1; i++){
        int current = arr[i];
        int minPos = i;
        for(int j=i; j<arr.size(); j++){
            if(arr[j]< arr[minPos])
                minPos = j;
        }
        swap(arr[minPos], arr[i]);
    }
    */

    return 0;
}