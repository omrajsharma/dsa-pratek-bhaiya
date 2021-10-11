/*
N-Queen is the problem of placing N chess queens on an N*N chessboard so that no two queens attacks each other.
*/

#include <iostream>
using namespace std;

// PRINTING BOARD
void printBoard(int n, int board[][20]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << board[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

// BOOL CAN PLACE
bool canPlace(int board[][20], int n, int x, int y){
    // Column check
    for(int k=0; k<x; k++){
        if(board[k][y]==1){
            return false;
        }
    }

    // Left diagonal check
    int i=x;
    int j=y;
    while(i>=0 and j>=0){
        if(board[i][j]==1){
            return false;
        }
        i--;
        j--;
    }

    // Right Diagonal Check
    i=x;
    j=y;
    while(i>=0 and j<n){
        if(board[i][j]==1){
            return false;
        }
        i--;
        j++;
    }

    return true;
}

// SOLUTION
// ### Return Type change ###
int solveNQueen(int n, int board[][20], int i){
    // base case
    if(i==n){
        // print boa
        printBoard(n, board);

        return 1;
    }

    // rec case
    // try to place a queen in every row
    int ways = 0;

    for(int j=0; j<n; j++){
        // whether the current i,j is safe or not
        if(canPlace(board, n, i, j)){
            board[i][j] = 1;
            ways += solveNQueen(n, board, i+1);
            // backtrack
            board[i][j] = 0;
        }
    }

    return ways;
    
}

int main(){
    int board[20][20] = {0};

    int n;
    cin >> n;

    cout << "Number of ways " << solveNQueen(n, board, 0) << endl;

    return 0;
}