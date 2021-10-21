#include <iostream>
using namespace std;

int ** createTwoDArray( int rows, int cols){
    int ** arr = new int*[rows];

    // Allocate memory for each row
    for(int i=0; i<rows; i++){
        arr[i] = new int[cols];
    }

    // Initialisatin of array
    int value = 0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            arr[i][j] = value;
            value++;
        }
    }

    return arr;
}

int main(){
    int rows, cols;
    cin >> rows >> cols;

    int ** arr = createTwoDArray(rows, cols);

    // Output
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}