#include <iostream>
using namespace std;

void spiralPrint(int arr[][5], int r, int c){
    // Initialisation of variable
    int startRow = 0;
    int endColumn = c-1;
    int endRow = r-1;
    int startColumn = 0;

    // Printing out boundaries loop
    while(startColumn<=endColumn and startRow<=endRow) {
        // Printing start row
        for(int i=startColumn; i<=endColumn; i++)
            cout << arr[startRow][i] << ' '<< endl;

        // Printing end column
        for(int i=startRow+1; i<=endRow; i++)
            cout << arr[i][endColumn] << ' '<< endl;
        
        // Printing end row
        for(int i=endColumn-1; i>=startColumn; i--){
            if(endRow==startRow)
                break;
            cout << arr[endRow][i] << ' '<< endl;
        }

        // Printing first column
        for(int i=endRow-1; i>=startRow+1; i--){
            if(endColumn==startColumn)
                break;
            cout << arr[i][startColumn] << ' '<< endl;
        }

        // Updating variables
        startRow++;
        endColumn--;
        endRow--;
        startColumn++;
    }
}

int main() {
    int r=5;
    int c=5;
    int arr[5][5] {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };

    spiralPrint(arr, r, c);


    return 0;
}