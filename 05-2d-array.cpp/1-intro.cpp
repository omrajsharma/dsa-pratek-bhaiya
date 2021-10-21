#include <iostream>
using namespace std;

void show(int arr[][100], int r, int c){    // Passing argument must have column size metioned
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {
    // Initialisation
    int arr[100][100];        // rows and columns are required while initializing
    int arr1[][100] { {1,2,3},{4,5,6},{7,8,9} };

    // Input array
    int r,c;
    cout << "Enter number of rows : ";
    cin >> r;
    cout << "Enter number of columns : ";
    cin >> c;
    cout << "Enter values : " << endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> arr[i][j];
        }
    }

    // Output
    show(arr,r,c);

    return 0;
}