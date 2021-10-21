#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr {9,7,4,2,3,1,5,6,8};

    // My Implementation
    int temp;
    bool flag;
    for(int i=1; i<arr.size(); i++){
        temp = arr[i];
        flag = false;
        for(int j=i-1; j>=0; j--){
            if(arr[j]<temp){
                flag = true;
                arr[j+1] = temp;
                break;
            }
            arr[j+1] = arr[j];
        }
        if(!flag)
            arr[0] = temp;

        // Output
        for(int k=0; k<arr.size(); k++)
            cout << arr[k] << ' ';
        cout << endl;
    }

    // Prateek Bhaiya's Implementation
    /*
    for(int i=1; i<n; i++){
        int current = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > current ){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = current;
    }
    */  

    return 0;
}