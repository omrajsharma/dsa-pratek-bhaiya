// Mango Trees
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    char mango[n][n];

    // Input
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> mango[i][j];
    
    // Auxillary matrix 
    int aux[n][n] {0};
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 && j==0){
                aux[i][j] = mango[i][j]=='x'? 1 : 0;
            }
            else if(i==0){
                aux[i][j] = mango[i][j]=='x'? 1+aux[i][j-1] : aux[i][j-1];
            } else if(j==0){
                aux[i][j] = mango[i][j]=='x'? 1+aux[i-1][j] : aux[i-1][j];
            } else {
                aux[i][j] = mango[i][j]=='x'? (1+aux[i-1][j]+aux[i][j-1]-aux[i-1][j-1]) : (aux[i-1][j]+aux[i][j-1]-aux[i-1][j-1]);
            }
            cout << aux[i][j] << ' ';
        }   cout << endl;
    }

    // Maximising the minimum
    int a=0,b=0,c=0,d=0;
    int mini;
    int minMax=0;
    for(int i=1; i<n; i++){
        for(int j=1; j<n; j++){
            // cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
            // cout << aux[i-1][j-1] << ' ' << aux[i-1][n-1] << ' ' << aux[n-1][j-1] << ' ' << aux[n-1][n-1] << endl;
            a = aux[i-1][j-1];
            b = aux[i-1][n-1] - a;
            c = aux[n-1][j-1] - a;
            d = aux[n-1][n-1] - a -b -c;

            cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
            mini = min(a,min(b, min(c,d)));

            if(mini>minMax)
                minMax = mini;
        }
    }

    // Result
    cout << "Result" << minMax << endl;

    return 0;
}