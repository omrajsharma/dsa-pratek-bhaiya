#include <iostream>
using namespace std;

int main() {
    int arr[] {3,4,6,3,4,8,3,6,4,2,5,7,4,1,4,7,3,2};
    int n = sizeof(arr)/sizeof(int);
    int range = 10;

    int frq[range] {0};

    // Counting the frequency
    for(int i=0; i<n; i++){
        frq[arr[i]]++;
    }

    // Sorting array
    int count = 0;
    for(int i=0; i<range; i++){
        if(frq[i]!=0){
            for(int j=0; j<frq[i]; j++){
                arr[count] = i;
                count++;
            }
        }
    }

    // Output
    for(int i=0; i<n; i++)
        cout << arr[i] << ' ';
    cout << endl;

    return 0;
}