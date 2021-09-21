// Stair case search
#include <iostream>
using namespace std;

void search(int arr[][4], int r, int c, int src){
    int a = 0;
    int b = c-1;

    cout << a << ' ' << b << endl;

    while(arr[a][b] != src && a<r && b>-1){
        cout << arr[a][b] << endl;
        
        if(arr[a][b]<src)
            a++;
        else    
            b--;
    }

    cout << "Founded at : " << a << ' ' << b << endl;
}

int main() {
    int arr[][4] {
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };

    int r=4;
    int c=4;
    int src=37;

    search(arr, r,c,src);

    return 0;
}