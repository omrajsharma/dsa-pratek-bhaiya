#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector< vector<int> > arr = { {1,2,3},{4,5,6},{7,8,9,10,11,12,13,14,15} };

    for(int i=0; i<arr.size(); i++){            // no. of rows
        for(int j=0; j<arr[i].size(); j++){     // no. of columns
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}