#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr {9,7,4,2,3,1,5,6,8};

    for(int i=arr.size()-1; i>0; i--){
        bool flag = false;
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
                flag = true;
                swap(arr[j], arr[j+1]);
            }
        }

        for(int k=0; k<arr.size(); k++)
            cout << arr[k] << ' ';

        cout << endl;

        // For Optimisation
        if(!flag)
            break;
    }

    return 0;
}