// K Rotate an array

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a {1,2,3,4,5,6,7,8,9};

    int temp;
    for(int i=0; i<2; i++){
        temp = a[a.size()-1];
        for(int j=a.size()-1; j>0; j--){
            a[j] = a[j-1];
        }
        a[0] = temp;
    }

    for(int i=0; i<a.size(); i++)
        cout << a[i] << endl;

	return 0;
}

