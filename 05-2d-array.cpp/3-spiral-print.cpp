#include <iostream>
using namespace std;

int main() {
    int r=5;
    int cl=5;
    int arr[5][5] {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };

    int a = cl-1;
    int b = r-1;
    int c = 0;
    int d = 0;

    int count = (r+cl)-1;
    int switchCount = 0;
    while(count--){
        switch(switchCount){
            case 0 : for(int i=c; i<=a; i++){
                            cout << "case 0 : " << arr[d][i] << ' ';             
                    }
                    d++;
                    switchCount++;
                    break;
            case 1 : for(int i=d; i<=b; i++)
                        cout << "case 1 : " << arr[i][a] << ' ';
                    a--;
                    switchCount++;
                    break;
            case 2 : for(int i=a; i>=c; i--)
                        cout << "case 2 : " << arr[b][i] << ' ';
                    b--;
                    switchCount++;
                    break;
            case 3 : for(int i=b; i>=d; i--)
                        cout << "case 3 : " << arr[i][c] << ' ';
                    c++;
                    switchCount = 0;
                    break;
        }
    }

    return 0;
}